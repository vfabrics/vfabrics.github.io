/* t9942 : ELW마스터조회 													*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

#include "aslib.h"
#include "t9942_io.h"
/* LOGIN.cfg 설정파일 경로 */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

typedef struct  _NAHAP {
    char conti               [1]; /* 연속구분                               */
                              /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)  */
                              /* c->s 0(최초),1(Next),2(Prev)               */
    char trsrc               [1]; /* 주문 또는 조회발원지                   */
    char filler              [8]; /* filler                                 */
} NAHAP;

typedef struct  _NAHAP2 {
    char conti               [1]; /* 연속구분                               */
                              /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)  */
                              /* c->s 0(최초),1(Next),2(Prev)               */
    char trsrc               [1]; /* 주문 또는 조회발원지                   */
    char userid              [8]; /* userid                                 */
    char trcode              [5]; /* trcode                                 */
} NAHAP2;


AS_HANDLE   AH;

int main(int argc, char *argv[])
{
	NAHAP         nahap;
    t9942InBlock  in;
    t9942OutBlock  *out;
    char      sbuff[1024], rbuff[4096*100], tmp[100];
    char    id[16];
    int       rc, fut_prc, elw_prc, i, rcnt=0, ii;

    /* =============================================== */
    /* 통신을 위한 Handle 초기화                       */
    /* =============================================== */
    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        fprintf(stdout, "Handle Init Error\n");
        return 0;
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
    /* 환경파일에서 변수 읽어오기 */
    /* 변수는 추가로 지정해서 사용가능합니다. 아래는 기본항목 */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "ID", "",  id);    /* ID       */

    /* =============================================== */
    /* ORDER TR DATA                                   */
    /* =============================================== */
	memset(&nahap, 0x20, sizeof(NAHAP));
	nahap.conti[0] = '0';
	nahap.trsrc[0] = 's';
	memcpy(nahap.filler, id, strlen(id));

    /* =============================================== */
    /* Transaction Call Sample                         */
    /* =============================================== */
	memset(sbuff, 0x00, sizeof(sbuff));
	memcpy(sbuff, &nahap, sizeof(nahap));
	memcpy(sbuff+sizeof(nahap), &in, sizeof(in));

    rc = AsCallTranSise( AH, "t9942", (char *)sbuff, sizeof(in)+sizeof(nahap), (char *)rbuff, 10);

	rcnt = rc / sizeof(t9942OutBlock);

	for(ii = 0; ii < rcnt; ii++)
	{
		out = (t9942OutBlock *)&rbuff[ii*sizeof(t9942OutBlock)];		
		printf("J%.6s  %.12s%.20s\n", out->shcode, out->expcode, out->hname);
	}

    /* =============================================== */
    /* Handle Clear                                    */
    /* =============================================== */
    AsTerminate(AH);

    return 0;
}
