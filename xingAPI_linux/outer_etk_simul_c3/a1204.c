#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <netdb.h>
#include <errno.h>
#include "StockOrd.h"
#include "aslib.h"

AS_HANDLE   AH;

/* LOGIN.cfg 설정파일 경로 */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

int main(int argc, char *argv[])
{
	int rlen = 0, slen = 0, price, qty, rc, occcnt, ii;
	char *shcode, sbuff[4096+1], rbuff[4096+1], tmp[48];
	SB_NHAP	sbhd;
	CSPAQ03700InBlock1 InBlock1;
	CSPAQ03700OutBlock1 OutBlock1;
	CSPAQ03700OutBlock2 *OutBlock2;
	CSPAQ03700OutBlock3 *OutBlock3;
    char    encode[4096], decode[4096];
	char 	id[16], pwd[16], acc[16], accpwd[16], branch[16], macadd[12];

	/* Handle 초기화 */
    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        printf("AS_HANDLE initial Error\n");
        exit(0);
    }

    /*=============================================================================*/
    /* 고객 환경 Load 및 로그인 - return값 확인하세요.                             */
    /*-----------------------------------------------------------------------------*/
    /*  rc = -3 : 공인인증실패                                                     */
    /*  rc = -2 : 로그인실패                                                       */
    /*  rc = -1 : 서버접속실패                                                     */
    /*  rc =  0 : TR전송실패                                                       */
    /*  rc =  1 : 성공                                                             */
    /*-----------------------------------------------------------------------------*/
    rc = API_LOGIN_SIMUL(AH,  CONFIG_PATH, "LOGIN.cfg");
    if(rc <= 0)
    {
        printf("rc:%d [Error return]\n", rc);
        exit(0);
    }
    /*=============================================================================*/

	/* 환경파일에서 변수 읽어오기 */
	/* 변수는 추가로 지정해서 사용가능합니다. 아래는 기본항목 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "ID", "",  id);	  /* ID		  */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "PW", "",  pwd);	  /* 패스워드 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "AC", "",  acc);	  /* 계좌번호 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "AP", "",  accpwd);/* 계좌비번 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "BC", "",  branch);/* 지점번호 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "MC", "",  macadd);/* MACaddress*/

	/* 기본설정값 보기 */
	printf("아이디  : [%s]\n", id);
	printf("패스워드: [%s]\n", pwd);
	printf("계좌번호: [%s]\n", acc);
	printf("계좌비번: [%s]\n", accpwd);
	printf("지점번호: [%s]\n", branch); /* 담당자에게 확인후 넣으세요. */
	printf("MAC 주소: [%s]\n", macadd); /* 주문나가는 서버 or PC의 MAC Address입력 */

	/* 구조체 및 변수초기화 */
    memset((char *)&sbhd, 0x20, sizeof(sbhd));
    memset((char *)&InBlock1, 0x20, sizeof(InBlock1));
    memset(sbuff, 0x00, sizeof(sbuff));
    memset(rbuff, 0x00, sizeof(rbuff));

    /*=============================================================================*/
    /* 헤더 고객 입력영역 : 값을 변경하여 사용하세요.                              */
    /*-----------------------------------------------------------------------------*/
	/* UserID */
    memcpy(sbhd.UserID, id, strlen(id));         
	/* 서버IP  '.'제외 */
    memcpy(sbhd.IPAddr, "192168022160    ", sizeof(sbhd.IPAddr)); 
	/* 지점번호 */
    memcpy(sbhd.BranchNo, branch, strlen(branch));  /*** 관리점 check  ***/
    memcpy(sbhd.MacAddress, macadd, sizeof(sbhd.MacAddress)); /* MAC Address */
    /*=============================================================================*/

    /*=============================================================================*/
	/* 기본세팅값 - 변경하지말고 그대로 사용하세요. */
    memcpy(sbhd.MediaETK, "s ", sizeof(sbhd.MediaETK)); 
    memcpy(sbhd.ServiceCode, "CSPAQ03700", sizeof(sbhd.ServiceCode));
	sbhd.FuncCode[0] = 'C';
	sbhd.Cont[0] = 'N';
	sbhd.Lang[0] = 'K';
	sbhd.Loan[0] = '0';
    memcpy(sbhd.MediaComm, "41", sizeof(sbhd.MediaComm)); /* API매체 */
	sbhd.BussGb[0] = '0';
    /*=============================================================================*/

    /*=============================================================================*/
    /* 전문 고객 입력영역 : 값을 변경하여 사용하세요.                              */
    /*-----------------------------------------------------------------------------*/
	/* 계좌번호 */
    memcpy(InBlock1.AcntNo, acc, strlen(acc)); 
	/* 계좌비밀번호 */
    memcpy(InBlock1.InptPwd, accpwd, strlen(accpwd)); 
	/* 매도매수 구분 */
	InBlock1.BnsTpCode[0] = '0'; /* 전체:0, 매도:1, 매수:2 */
	/* 체결여부 */
	InBlock1.ExecYn[0] = '0'; /* 전체:0, 매도:1, 매수:2 */
	/* 주문일자 */
    memcpy(InBlock1.OrdDt, "20140211", sizeof(InBlock1.OrdDt)); /* 주문일자 check */
	/* 시작주문번호 */
    memcpy(InBlock1.SrtOrdNo2, "+999999999", sizeof(InBlock1.SrtOrdNo2));
	/* 역순구분 */
    InBlock1.BkseqTpCode[0] = '0';
	/* 주문유형코드 */
    memcpy(InBlock1.OrdPtnCode, "00", sizeof(InBlock1.OrdPtnCode));
    /*=============================================================================*/

    /*=============================================================================*/
	/* 기본세팅값 - 변경하지말고 그대로 사용하세요. */
    /*-----------------------------------------------------------------------------*/
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.OrdMktCode, "00", sizeof(InBlock1.OrdMktCode));

    /*=============================================================================*/

    /*=============================================================================*/
	/* 패킷송수신부                                                                */
    /*-----------------------------------------------------------------------------*/
	/* 전송패킷 생성 */
	memcpy(sbuff, &sbhd, sizeof(sbhd));
	memcpy(sbuff+sizeof(sbhd), &InBlock1, sizeof(InBlock1));

	/* 전송패킷 암호화 */
    slen = AsEncode(sbuff, sizeof(SB_NHAP)+sizeof(InBlock1), encode);

	/* 패킷전송 Timout: 5초 */
	AsClearTrFlag(AH); /* FLAG Clear 연속조회때 초기화하여 사용 */
	rc = AsCallTran(AH, "a6010", encode, slen, rbuff, 5);

	/* 수신패킷 복호화 */
    rlen = AsDecode(rbuff,decode,rc);

	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%5.5s", &decode[sizeof(CSPAQ03700OutBlock1)+sizeof(CSPAQ03700OutBlock2)]);
	/* Row 갯수 */
	occcnt = atoi(tmp);
	printf("rlen:[%d:%d] occcnt:%d\n", rlen, strlen(decode), occcnt);
	
	for(ii = 0; ii < occcnt; ii++)
	{
		OutBlock3 = (CSPAQ03700OutBlock3 *)&decode[sizeof(CSPAQ03700OutBlock1)+sizeof(CSPAQ03700OutBlock2)+5+sizeof(CSPAQ03700OutBlock3)*ii];
		/* 종목명:주문가격:체결수량:체결가격 - xingQ [6203]주식원장 체결/미체결 참조 */
		printf("%.20s:%.15s:%.16s:%.15s\n", OutBlock3->IsuNm, OutBlock3->OrdPrc, OutBlock3->ExecQty, OutBlock3->ExecPrc);
	}
    /*=============================================================================*/

	/* Handle Terminate */
    AsTerminate(AH);

	return 0;
}
