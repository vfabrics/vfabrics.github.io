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

/* LOGIN.cfg �������� ��� */
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

	/* Handle �ʱ�ȭ */
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

	/* ����ü �� �����ʱ�ȭ */
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
    memcpy(sbhd.MediaETK, "s ", sizeof(sbhd.MediaETK)); 
    memcpy(sbhd.ServiceCode, "CSPAQ03700", sizeof(sbhd.ServiceCode));
	sbhd.FuncCode[0] = 'C';
	sbhd.Cont[0] = 'N';
	sbhd.Lang[0] = 'K';
	sbhd.Loan[0] = '0';
    memcpy(sbhd.MediaComm, "41", sizeof(sbhd.MediaComm)); /* API��ü */
	sbhd.BussGb[0] = '0';
    /*=============================================================================*/

    /*=============================================================================*/
    /* ���� �� �Է¿��� : ���� �����Ͽ� ����ϼ���.                              */
    /*-----------------------------------------------------------------------------*/
	/* ���¹�ȣ */
    memcpy(InBlock1.AcntNo, acc, strlen(acc)); 
	/* ���º�й�ȣ */
    memcpy(InBlock1.InptPwd, accpwd, strlen(accpwd)); 
	/* �ŵ��ż� ���� */
	InBlock1.BnsTpCode[0] = '0'; /* ��ü:0, �ŵ�:1, �ż�:2 */
	/* ü�Ῡ�� */
	InBlock1.ExecYn[0] = '0'; /* ��ü:0, �ŵ�:1, �ż�:2 */
	/* �ֹ����� */
    memcpy(InBlock1.OrdDt, "20140211", sizeof(InBlock1.OrdDt)); /* �ֹ����� check */
	/* �����ֹ���ȣ */
    memcpy(InBlock1.SrtOrdNo2, "+999999999", sizeof(InBlock1.SrtOrdNo2));
	/* �������� */
    InBlock1.BkseqTpCode[0] = '0';
	/* �ֹ������ڵ� */
    memcpy(InBlock1.OrdPtnCode, "00", sizeof(InBlock1.OrdPtnCode));
    /*=============================================================================*/

    /*=============================================================================*/
	/* �⺻���ð� - ������������ �״�� ����ϼ���. */
    /*-----------------------------------------------------------------------------*/
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.OrdMktCode, "00", sizeof(InBlock1.OrdMktCode));

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
	rc = AsCallTran(AH, "a6010", encode, slen, rbuff, 5);

	/* ������Ŷ ��ȣȭ */
    rlen = AsDecode(rbuff,decode,rc);

	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%5.5s", &decode[sizeof(CSPAQ03700OutBlock1)+sizeof(CSPAQ03700OutBlock2)]);
	/* Row ���� */
	occcnt = atoi(tmp);
	printf("rlen:[%d:%d] occcnt:%d\n", rlen, strlen(decode), occcnt);
	
	for(ii = 0; ii < occcnt; ii++)
	{
		OutBlock3 = (CSPAQ03700OutBlock3 *)&decode[sizeof(CSPAQ03700OutBlock1)+sizeof(CSPAQ03700OutBlock2)+5+sizeof(CSPAQ03700OutBlock3)*ii];
		/* �����:�ֹ�����:ü�����:ü�ᰡ�� - xingQ [6203]�ֽĿ��� ü��/��ü�� ���� */
		printf("%.20s:%.15s:%.16s:%.15s\n", OutBlock3->IsuNm, OutBlock3->OrdPrc, OutBlock3->ExecQty, OutBlock3->ExecPrc);
	}
    /*=============================================================================*/

	/* Handle Terminate */
    AsTerminate(AH);

	return 0;
}
