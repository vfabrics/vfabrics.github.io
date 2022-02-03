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
		printf(" ��) �Ｚ���� 100���� 10�� : ./a1201 A005930 1000000 10\n");
		printf("	���üҽ����� check �׸��� Ȯ���ϼ���.\n");
		return 0;
	}

	shcode = argv[1];		/* �����ڵ� */
	price = atoi(argv[2]);  /* ���� 	*/
	qty = atoi(argv[3]);	/* �ֹ����� */

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
    memcpy(sbhd.ServiceCode, "CSPAT00600", sizeof(sbhd.ServiceCode));
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
    //memcpy(InBlock1.AcntNo, "11111111111", strlen(acc)); 
	/* ���º�й�ȣ */
    memcpy(InBlock1.InptPwd, accpwd, strlen(accpwd)); 
	/* ���� check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%010d.00", price);
    memcpy(InBlock1.OrdPrc, tmp, sizeof(InBlock1.OrdPrc));
	/* ���� check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "%7.7s     ", shcode);
    memcpy(InBlock1.IsuNo, tmp, sizeof(InBlock1.IsuNo));
	/* ���� check */
	memset(tmp, 0x20, sizeof(tmp));
	sprintf(tmp, "000000000%07d", qty);
    memcpy(InBlock1.OrdQty, tmp, sizeof(InBlock1.OrdQty));
	/* �ŵ��ż� ���� */
	InBlock1.BnsTpCode[0] = '2'; /* �ŵ�:1, �ż�:2 */
    /* �ֹ����� 00:����, 03:���尡, 61:����, 81:���� check */
    memcpy(InBlock1.OrdprcPtnCode, "00", sizeof(InBlock1.OrdprcPtnCode));
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.PrgmOrdprcPtnCode, "00", sizeof(InBlock1.PrgmOrdprcPtnCode));
    memcpy(InBlock1.CommdaCode, "41", sizeof(InBlock1.CommdaCode)); /* API��ü */
    memcpy(InBlock1.MgntrnCode, "000", sizeof(InBlock1.MgntrnCode)); 
    memcpy(InBlock1.MbrNo, "063", sizeof(InBlock1.MbrNo)); /* ȸ����ȣ:��Ʈ���̵�063 */
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
	/* ��Ŷ�ۼ��ź�                                                                */
    /*-----------------------------------------------------------------------------*/
	/* ������Ŷ ���� */
	memcpy(sbuff, &sbhd, sizeof(sbhd));
	memcpy(sbuff+sizeof(sbhd), &InBlock1, sizeof(InBlock1));

	/* ������Ŷ ��ȣȭ */
    slen = AsEncode(sbuff, sizeof(SB_NHAP)+sizeof(InBlock1), encode);

	/* ��Ŷ���� Timout: 5�� */
	AsClearTrFlag(AH); /* FLAG Clear ������ȸ�� �ʱ�ȭ�Ͽ� ��� */
	rc = AsCallTran(AH, "a5010", encode, slen, rbuff, 5);

	/* ������Ŷ ��ȣȭ */
    rlen = AsDecode(rbuff,decode,rc);

    OutBlock2 = (CSPAT00600OutBlock2 *)&decode[sizeof(CSPAT00600OutBlock1)];
	/* ������ŶȮ�� */
	printf("[%d:%d] decode:[%s]\n", rlen, strlen(decode), decode);	
	printf("�ֹ�������ȣ[%.*s]\n", sizeof(OutBlock2->OrdNo), OutBlock2->OrdNo);
    printf("�����ڵ�[%.5s] ���Ÿ޼���[%s]\n", AH->m_MsgCode,  AH->m_MsgStr);
    /*=============================================================================*/

	/* Handle Terminate */
    AsTerminate(AH);

	return 0;
}
