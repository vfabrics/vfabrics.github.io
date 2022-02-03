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
#include "FutOrd.h"
#include "aslib.h"

#define MAX_BUFF_LEN   4096
extern int errno;

AS_HANDLE   AH;

/* LOGIN.cfg 설정파일 경로 */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

int main(int argc, char *argv[])
{
	int rlen = 0, slen = 0, rc, roklen, qty;
	char *shcode, sbuff[4096+1], rbuff[4096+1], tmp[48], logname[1024];
	char ip[16], port[16], id[16], pwd[16], acc[16], accpwd[16];
	char juno[16], dnname[128], dnfile[128], logpath[64], branch[16], macadd[12];
	float	price;
	SB_NHAP	sbhd;
    CFOAT00100InBlock1 InBlock1;
    CFOAT00100OutBlock1 OutBlock1;
    CFOAT00100OutBlock2 *OutBlock2;
    char      encode[1024], decode[4096];
	char	  Temp[1024];
    char      File[1024];

	if(argc != 3)
	{
		printf("usage : a1301 주문가격 주문수량\n");
        printf("    종목,가격은 샘플소스내의 check 항목을 확인하세요.\n");
		return 0;
	}

    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        printf("AS_HANDLE initial Error\n");
        exit(0);
    }

	price = atof(argv[1]);
	qty = atoi(argv[2]);

    /* =============================================== */
    /* 고객 환경 Load 및 로그인 - plase, check it out  */
    /* =============================================== */
	/*  rc = -3 : 공인인증실패                         */
	/*  rc = -2 : 로그인실패                           */
	/*  rc = -1 : 서버접속실패                         */
	/*  rc =  0 : TR전송실패                           */
	/*  rc =  1 : 성공                                 */
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
    memset(decode, 0x00, sizeof(decode));

    /* =============================================== */
    /* 헤더 고객 입력영역 please check it out          */
    /* =============================================== */
    memcpy(sbhd.UserID, id, strlen(id)); /*** ID check ***/
    memcpy(sbhd.IPAddr, "192168022160", strlen(ip)); /*** IP  check '.'제외 ***/
    memcpy(sbhd.BranchNo, branch, strlen(branch)); /*** 관리점 check ***/
    memcpy(sbhd.MacAddress, macadd, sizeof(sbhd.MacAddress)); /* MAC Address */
    /* =============================================== */

    /*=============================================================================*/
	/* 기본세팅값 - 변경하지말고 그대로 사용하세요. */
    memcpy(sbhd.MediaETK, "s ", sizeof(sbhd.MediaETK)); /* API당사매체 */
    memcpy(sbhd.ServiceCode, "CFOAT00100", sizeof(sbhd.ServiceCode));
	sbhd.FuncCode[0] = 'C';
	sbhd.Cont[0] = 'N';
	sbhd.Lang[0] = 'K';
	sbhd.Loan[0] = '0';
    memcpy(sbhd.MediaComm, "41", sizeof(sbhd.MediaComm)); /* API매체 */
	sbhd.BussGb[0] = '0';
    /*=============================================================================*/

    /*=============================================================================*/
    /* 전문 고객 입력영역 : 값을 변경하여 사용하세요. check                        */
    /*-----------------------------------------------------------------------------*/
    memcpy(InBlock1.AcntNo, acc, strlen(acc));/* 계좌check */
    memcpy(InBlock1.Pwd, accpwd, strlen(accpwd));/* 비밀번호 check */
    memcpy(InBlock1.FnoIsuNo, "201J4257    ", sizeof(InBlock1.FnoIsuNo));/* 종목check */
    InBlock1.BnsTpCode[0] = '2'; /* 1:매도 2:매수 check */
    /* 00:지정가 03:시장가 10:지정가(IOC) 13:시장가(IOC) check */
    memcpy(InBlock1.FnoOrdprcPtnCode, "00", sizeof(InBlock1.FnoOrdprcPtnCode));
	sprintf(tmp, "%015.2f", price); /* 가격check */
    memcpy(InBlock1.OrdPrc, tmp , sizeof(InBlock1.OrdPrc));/* 주문가격 check */
	sprintf(tmp, "%016d", qty);
    memcpy(InBlock1.OrdQty, tmp, sizeof(InBlock1.OrdQty));/* 수량check */
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.FnoOrdPtnCode, "00", sizeof(InBlock1.FnoOrdPtnCode)); /*유형 check*/
    memcpy(InBlock1.FnoTrdPtnCode, "03", sizeof(InBlock1.FnoTrdPtnCode));
    memcpy(InBlock1.OrdMktCode, "40", sizeof(InBlock1.OrdMktCode));
    memcpy(InBlock1.CommdaCode, "41", sizeof(InBlock1.CommdaCode)); 
    memcpy(InBlock1.DscusBnsCmpltTime, "         ", sizeof(InBlock1.DscusBnsCmpltTime));
    memcpy(InBlock1.GrpId, "                    ", sizeof(InBlock1.GrpId));
    memcpy(InBlock1.OrdSeqno, "0000000000", sizeof(InBlock1.OrdSeqno));
    memcpy(InBlock1.PtflNo, "0000000000", sizeof(InBlock1.PtflNo));
    memcpy(InBlock1.BskNo, "0000000000", sizeof(InBlock1.BskNo));
    memcpy(InBlock1.TrchNo, "0000000000", sizeof(InBlock1.TrchNo));
    memcpy(InBlock1.ItemNo, "0000000000000000", sizeof(InBlock1.ItemNo));
    memcpy(InBlock1.OpDrtnNo, "            ", sizeof(InBlock1.OpDrtnNo));
    memcpy(InBlock1.MgempNo, "         ", sizeof(InBlock1.MgempNo));
    memcpy(InBlock1.FundId, "0           ", sizeof(InBlock1.FundId));
    memcpy(InBlock1.FundOrdNo, "0000000000", sizeof(InBlock1.FundOrdNo));
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
	rc = AsCallTran(AH, "a5110", encode, slen, rbuff, 5);

	/* 수신패킷 복호화 */
    rlen = AsDecode(rbuff,decode,rc);

    OutBlock2 = (CFOAT00100OutBlock2 *)&decode[sizeof(CFOAT00100OutBlock1)];

	/* 수신패킷확인 */
	printf("주문접수번호[%.*s]\n", sizeof(OutBlock2->OrdNo), OutBlock2->OrdNo);
    printf("[%.5s] %s\n", AH->m_MsgCode,  AH->m_MsgStr);
    /*=============================================================================*/

    AsTerminate(AH);

	return 0;
}
