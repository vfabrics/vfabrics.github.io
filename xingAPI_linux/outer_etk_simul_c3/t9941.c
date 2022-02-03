/* t9941 : �ֽĸ�������ȸAPI�� 												*/
/* �Է°�: gubun 1:KOSPI 2:KOSDAQ 											*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

#include "aslib.h"
#include "t9941_io.h"

/* LOGIN.cfg �������� ��� */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

typedef struct  _NAHAP {
    char conti               [1]; /* ���ӱ���                               */
                              /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)  */
                              /* c->s 0(����),1(Next),2(Prev)               */
    char trsrc               [1]; /* �ֹ� �Ǵ� ��ȸ�߿���                   */
    char userid              [8]; /* userid                                 */
} NAHAP;

AS_HANDLE   AH;

int main(int argc, char *argv[])
{
	NAHAP         nahap;
    t9941InBlock  in;
    t9941OutBlock  *out;
    char      sbuff[1024], rbuff[1024*100], tmp[100];
    char    id[16];
    int       rc, fut_prc, elw_prc, i, rcnt=0, ii;

    /* =============================================== */
    /* ����� ���� Handle �ʱ�ȭ                       */
    /* =============================================== */
    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        fprintf(stdout, "Handle Init Error\n");
        return 0;
    }

    /*=============================================================================*/
    /* �� ȯ�� Load �� �α��� - return�� Ȯ���ϼ���.                             */
    /*-----------------------------------------------------------------------------*/
    /*  rc = -3 : ������������                                                     */
    /*  rc = -2 : �α��ν���                                                       */
    /*  rc = -1 : �������ӽ���                                                     */
    /*  rc =  0 : TR���۽���                                                       */
    /*  rc =  1 : ����                                                             */
    /*-----------------------------------------------------------------------------*/
    rc = API_LOGIN_SIMUL(AH,  CONFIG_PATH, "LOGIN.cfg");
    if(rc <= 0)
    {
        printf("rc:%d [Error return]\n", rc);
        exit(0);
    }

    /* ȯ�����Ͽ��� ���� �о���� */
    /* ������ �߰��� �����ؼ� ��밡���մϴ�. �Ʒ��� �⺻�׸� */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "ID", "",  id);    /* ID       */

    memset(rbuff, 0x00, sizeof(rbuff));
    memset(&in, 0x20, sizeof(in));

    /* =============================================== */
    /* ��� �⺻�� ����                   			   */
    /* =============================================== */
	memset(&nahap, 0x20, sizeof(NAHAP));
	nahap.conti[0] = '0';
	nahap.trsrc[0] = 's';
	memcpy(nahap.userid, id, strlen(id));

    /* =============================================== */
    /* �Է°� ����                   			       */
    /* =============================================== */
	in.gubun[0] = '1'; /* 1:KOSPI 2:KOSDAQ */

    /* =============================================== */
    /* Transaction Call                                */
    /* =============================================== */
	memset(sbuff, 0x00, sizeof(sbuff));
	memcpy(sbuff, &nahap, sizeof(nahap));
	memcpy(sbuff+sizeof(nahap), &in, sizeof(in));

    rc = AsCallTranSise( AH, "t9941", (char *)sbuff, sizeof(in)+sizeof(nahap), (char *)rbuff, 10);

	/* ���ŵ� OUTPUT Count */
	rcnt = rc / sizeof(t9941OutBlock);

	for(ii = 0; ii < rcnt; ii++)
	{
		out = (t9941OutBlock *)&rbuff[ii*sizeof(t9941OutBlock)];		
		printf("%.20s %.6s %.12s\n", out->hname, out->shcode, out->expcode);
	}
	printf("%d �� %s\n", rcnt, AH->m_MsgStr);

    /* =============================================== */
    /* Handle Clear                                    */
    /* =============================================== */
    AsTerminate(AH);

    return 0;
}
