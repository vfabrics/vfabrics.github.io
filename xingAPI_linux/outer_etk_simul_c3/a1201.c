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
	int rlen = 0, slen = 0, price, qty, rc;
	char *shcode, sbuff[4096+1], rbuff[4096+1], tmp[48];
	SB_NHAP	sbhd;
	CSPAT00600InBlock1 InBlock1;
	CSPAT00600OutBlock1 OutBlock1;
	CSPAT00600OutBlock2 *OutBlock2;
    char    encode[4096], decode[4096];
	char 	id[16], pwd[16], acc[16], accpwd[16], branch[16], macadd[12];

	if (argc < 3)
	{
		printf("Usage : %s shcode price qty\n", argv[0]);
		printf(" 예) 삼성전자 100만원 10주 : ./a1201 A005930 1000000 10\n");
		printf("	샘플소스내의 check 항목을 확인하세요.\n");
		return 0;
	}

	shcode = argv[1];		/* 종목코드 */
	price = atoi(argv[2]);  /* 가격 	*/
	qty = atoi(argv[3]);	/* 주문수량 */

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
    memcpy(sbhd.ServiceCode, "CSPAT00600", sizeof(sbhd.ServiceCode));
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
    //memcpy(InBlock1.AcntNo, "11111111111", strlen(acc)); 
	/* 계좌비밀번호 */
    memcpy(InBlock1.InptPwd, accpwd, strlen(accpwd)); 
	/* 가격 check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%010d.00", price);
    memcpy(InBlock1.OrdPrc, tmp, sizeof(InBlock1.OrdPrc));
	/* 종목 check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%7.7s     ", shcode);
    memcpy(InBlock1.IsuNo, tmp, sizeof(InBlock1.IsuNo));
	/* 수량 check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "000000000%07d", qty);
    memcpy(InBlock1.OrdQty, tmp, sizeof(InBlock1.OrdQty));
	/* 매도매수 구분 */
	InBlock1.BnsTpCode[0] = '2'; /* 매도:1, 매수:2 */
    /* 주문유형 00:보통, 03:시장가, 61:장전, 81:장후 check */
    memcpy(InBlock1.OrdprcPtnCode, "00", sizeof(InBlock1.OrdprcPtnCode));
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.PrgmOrdprcPtnCode, "00", sizeof(InBlock1.PrgmOrdprcPtnCode));
    memcpy(InBlock1.CommdaCode, "41", sizeof(InBlock1.CommdaCode)); /* API매체 */
    memcpy(InBlock1.MgntrnCode, "000", sizeof(InBlock1.MgntrnCode)); 
    memcpy(InBlock1.MbrNo, "063", sizeof(InBlock1.MbrNo)); /* 회원번호:이트레이드063 */
	InBlock1.OrdCndiTpCode[0] = '0';
    memcpy(InBlock1.OrdCndiTpCode, "000", sizeof(InBlock1.OrdCndiTpCode));
    memcpy(InBlock1.OrdSeqNo, "0000000000", sizeof(InBlock1.OrdSeqNo));
    memcpy(InBlock1.PtflNo, "0000000000", sizeof(InBlock1.PtflNo));
    memcpy(InBlock1.BskNo, "0000000000", sizeof(InBlock1.BskNo));
    memcpy(InBlock1.TrchNo, "0000000000", sizeof(InBlock1.TrchNo));
    memcpy(InBlock1.ItemNo, "0000000000", sizeof(InBlock1.ItemNo));
    memcpy(InBlock1.OpDrtnNo, "            ", sizeof(InBlock1.OpDrtnNo));
	InBlock1.LpYn[0] = '0';
	InBlock1.CvrgTpCode[0] = '0';
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
	rc = AsCallTran(AH, "a5010", encode, slen, rbuff, 5);

	/* 수신패킷 복호화 */
    rlen = AsDecode(rbuff,decode,rc);

    OutBlock2 = (CSPAT00600OutBlock2 *)&decode[sizeof(CSPAT00600OutBlock1)];
	/* 수신패킷확인 */
	printf("[%d:%d] decode:[%s]\n", rlen, strlen(decode), decode);	
	printf("주문접수번호[%.*s]\n", sizeof(OutBlock2->OrdNo), OutBlock2->OrdNo);
    printf("수신코드[%.5s] 수신메세지[%s]\n", AH->m_MsgCode,  AH->m_MsgStr);
    /*=============================================================================*/

	/* Handle Terminate */
    AsTerminate(AH);

	return 0;
}
