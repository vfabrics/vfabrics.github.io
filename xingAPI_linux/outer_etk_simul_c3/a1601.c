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

/* LOGIN.cfg �������� ��� */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

int main(int argc, char *argv[])
{
	int wlen = 0, rlen = 0, qty, rc, roklen=0, occcnt, ii, jj, slen;
	float	price;
	char sbuff[4096+1], rbuff[40960+1], tmp[48], logname[1024];
	char ip[16], port[16], id[16], pwd[16], acc[16], accpwd[16], branch[16], macadd[12];
	SB_NHAP	sbhd;
	CFOBQ10500InBlock1 InBlock1;
	CFOBQ10500OutBlock1 OutBlock1;
	CFOBQ10500OutBlock2 *OutBlock2;
	CFOBQ10500OutBlock3 *OutBlock3;
    char      encode[1024], decode[4096];

    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        printf("AS_HANDLE initial Error\n");
        exit(0);
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
    /*=============================================================================*/

	/* ȯ�����Ͽ��� ���� �о���� */
	/* ������ �߰��� �����ؼ� ��밡���մϴ�. �Ʒ��� �⺻�׸� */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "ID", "",  id);	  /* ID		  */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "PW", "",  pwd);	  /* �н����� */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "AC", "",  acc);	  /* ���¹�ȣ */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "AP", "",  accpwd);/* ���º�� */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "BC", "",  branch);/* ������ȣ */
    GetProfileStr( CONFIG_PATH, "LOGIN.cfg", "LOGIN",  "MC", "",  macadd);/* MACaddress*/

	/* �⺻������ ���� */
	printf("���̵�  : [%s]\n", id);
	printf("�н�����: [%s]\n", pwd);
	printf("���¹�ȣ: [%s]\n", acc);
	printf("���º��: [%s]\n", accpwd);
	printf("������ȣ: [%s]\n", branch); /* ����ڿ��� Ȯ���� ��������. */
	printf("MAC �ּ�: [%s]\n", macadd); /* �ֹ������� ���� or PC�� MAC Address�Է� */

    memset((char *)&sbhd, 0x20, sizeof(sbhd));
    memset((char *)&InBlock1, 0x20, sizeof(InBlock1));
    memset(sbuff, 0x00, sizeof(sbuff));
    memset(rbuff, 0x00, sizeof(rbuff));

    /*=============================================================================*/
    /* ��� �� �Է¿��� : ���� �����Ͽ� ����ϼ���.                              */
    /*-----------------------------------------------------------------------------*/
	/* UserID */
    memcpy(sbhd.UserID, id, strlen(id));         
	/* ����IP  '.'���� */
    memcpy(sbhd.IPAddr, "192168022160    ", sizeof(sbhd.IPAddr)); 
	/* ������ȣ */
    memcpy(sbhd.BranchNo, branch, strlen(branch));  /*** ������ check  ***/
    memcpy(sbhd.MacAddress, macadd, sizeof(sbhd.MacAddress)); /* MAC Address */
    /*=============================================================================*/

    /*=============================================================================*/
	/* �⺻���ð� - ������������ �״�� ����ϼ���. */
    memcpy(sbhd.MediaETK, "s ", sizeof(sbhd.MediaETK)); /* API����ü */
    memcpy(sbhd.ServiceCode, "CFOBQ10500", sizeof(sbhd.ServiceCode)); /* �����ڵ� check */
	sbhd.FuncCode[0] = 'C';
	sbhd.Cont[0] = 'N';
	sbhd.Lang[0] = 'K';
	sbhd.Loan[0] = '0';
    memcpy(sbhd.MediaComm, "41", sizeof(sbhd.MediaComm)); /* API��ü */
	sbhd.BussGb[0] = '0';
    /*=============================================================================*/

    /*=============================================================================*/
    /* ���� �� �Է¿��� : ���� �����Ͽ� ����ϼ���.  - check                     */
    /*-----------------------------------------------------------------------------*/
	/* ��ȸ���� */
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));/* ����check */
	/* ���¹�ȣ */
    memcpy(InBlock1.AcntNo, acc, strlen(acc)); 
	/* ���º�й�ȣ */
    memcpy(InBlock1.Pwd, accpwd, strlen(accpwd)); 
    /*=============================================================================*/

    /*=============================================================================*/
	/* ��Ŷ�ۼ��ź�                                                                */
    /*-----------------------------------------------------------------------------*/
	/* ������Ŷ ���� */
    memcpy(sbuff, &sbhd, sizeof(sbhd));
    memcpy(sbuff+sizeof(sbhd), &InBlock1, sizeof(InBlock1));

	/* ������Ŷ ��ȣȭ */
    slen = AsEncode(sbuff, sizeof(SB_NHAP)+sizeof(InBlock1), encode);

	/* ��Ŷ���� Timout: 5�� */
	AsClearTrFlag(AH); /* FLAG Clear ������ȸ�� �ʱ�ȭ�Ͽ� ��� */
	rc = AsCallTran(AH, "a7010", encode, slen, rbuff, 5);

	/* ������Ŷ ��ȣȭ */
    rlen = AsDecode(rbuff,decode,rc);
    OutBlock2 = (CFOBQ10500OutBlock2 *)&decode[sizeof(CFOBQ10500OutBlock1)];
	/* ������ŶȮ�� */
	printf("��Ź���Ѿ� ������ ���űݾ�\n");
	printf("%.16s:%.16s:%.16s\n", OutBlock2->DpsamtTotamt, OutBlock2->Dps, OutBlock2->Mgn);
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%5.5s", &decode[sizeof(CFOBQ10500OutBlock1)+sizeof(CFOBQ10500OutBlock2)]);
	occcnt = atoi(tmp);
	printf("rlen:%d:%d occcnt:%d\n", rlen, strlen(decode), occcnt);
	
	for(ii = 0; ii < occcnt; ii++)
	{
		OutBlock3 = (CFOBQ10500OutBlock3 *)&decode[sizeof(CFOBQ10500OutBlock1)+sizeof(CFOBQ10500OutBlock2)+5+sizeof(CFOBQ10500OutBlock3)*ii];
		printf("%.20s:%.16s:%.16s:%.16s\n", OutBlock3->PdGrpCodeNm, OutBlock3->NetRiskMgn, OutBlock3->PrcMgn, OutBlock3->PrcFlctMgn);
	}

	AsTerminate(AH);
	return 0;
}
