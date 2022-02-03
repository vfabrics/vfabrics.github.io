#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/ioctl.h>
#include <netdb.h>
#include <time.h>
#include <sys/fcntl.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <net/if.h>
#include <errno.h>
#include "FutOrd.h"
#include "aslib.h"

#define MAX_BUFF_LEN   4096

/* LOGIN.cfg �������� ��� */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

AS_HANDLE   AH;

typedef struct _ORD
{
	char	ordno[10];
	char	qty[16];
	char	price[15];
}ORD;


int SendPacket(char *ordpacket)
{
	char sbuff[4096+1], rbuff[4096+1], tmp[48];
    CFOAT00200InBlock1 InBlock1;
    CFOAT00200OutBlock1 OutBlock1;
    CFOAT00200OutBlock2 *OutBlock2;
	SB_NHAP	sbhd;
	ORD		*ord;
	int		rc, rlen, slen, roklen;
    char      encode[1024], decode[4096];
	char ip[16], port[16], id[16], pwd[16], acc[16], accpwd[16], branch[16], macadd[12];

	ord = (ORD *)ordpacket;

    /* =============================================== */
    /* �� ȯ�� Load �� �α��� - plase, check it out  */
    /* =============================================== */
	/*  rc = -3 : ������������                         */
	/*  rc = -2 : �α��ν���                           */
	/*  rc = -1 : �������ӽ���                         */
	/*  rc =  0 : TR���۽���                           */
	/*  rc =  1 : ����                                 */
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

    /* =============================================== */
    /* ��� �� �Է¿��� please check it out          */
    /* =============================================== */
    memcpy(sbhd.UserID, id, strlen(id)); /*** ID check ***/
    memcpy(sbhd.IPAddr, "192168022160", strlen(ip)); /*** IP  check '.'���� ***/
    memcpy(sbhd.BranchNo, branch, strlen(branch)); /*** ������ check ����ڿ��� Ȯ���� ��������. */
    memcpy(sbhd.MacAddress, macadd, sizeof(sbhd.MacAddress)); /* MAC Address */
    /* =============================================== */

    /*=============================================================================*/
	/* �⺻���ð� - ������������ �״�� ����ϼ���. */
    memcpy(sbhd.MediaETK, "s ", sizeof(sbhd.MediaETK));
    memcpy(sbhd.ServiceCode, "CFOAT00200", sizeof(sbhd.ServiceCode));
	sbhd.FuncCode[0] = 'C';
	sbhd.Cont[0] = 'N';
	sbhd.Lang[0] = 'K';
	sbhd.Loan[0] = '0';
    memcpy(sbhd.MediaComm, "41", sizeof(sbhd.MediaComm));
	sbhd.BussGb[0] = '0';
    /*=============================================================================*/

    /*=============================================================================*/
    /* ���� �� �Է¿��� : ���� �����Ͽ� ����ϼ���. check                        */
    /*-----------------------------------------------------------------------------*/
    memcpy(InBlock1.AcntNo, acc, strlen(acc));/* ����check */
    memcpy(InBlock1.Pwd, accpwd, strlen(accpwd));/* ��й�ȣ check */
    memcpy(InBlock1.FnoIsuNo, "201J4257    ", sizeof(InBlock1.FnoIsuNo));/* ���� check */
    memcpy(InBlock1.OrgOrdNo, ord->ordno, sizeof(InBlock1.OrgOrdNo)); /* ���ֹ���ȣ check */
    memcpy(InBlock1.MdfyQty, ord->qty, sizeof(InBlock1.MdfyQty)); /* �������� check */
    memcpy(InBlock1.OrdPrc, ord->price, sizeof(InBlock1.OrdPrc)); /* �������� check */
    /* 00:������ 03:���尡 10:������(IOC) 13:���尡(IOC) check */
    memcpy(InBlock1.FnoOrdprcPtnCode, "00", sizeof(InBlock1.FnoOrdprcPtnCode));
    /* =============================================== */

    /*=============================================================================*/
	/* �⺻���ð� - ������������ �״�� ����ϼ���. */
    /*-----------------------------------------------------------------------------*/
    memcpy(InBlock1.RecCnt, "00001", sizeof(InBlock1.RecCnt));
    memcpy(InBlock1.FnoOrdPtnCode, "00", sizeof(InBlock1.FnoOrdPtnCode));
    memcpy(InBlock1.OrdMktCode, "40", sizeof(InBlock1.OrdMktCode));
    memcpy(InBlock1.CommdaCode, "41", sizeof(InBlock1.CommdaCode)); 
    memcpy(InBlock1.DscusBnsCmpltTime, "         ", sizeof(InBlock1.DscusBnsCmpltTime)); 
    memcpy(InBlock1.GrpId, "                    ", sizeof(InBlock1.GrpId)); 
    memcpy(InBlock1.OrdSeqno, "0000000000", sizeof(InBlock1.OrdSeqno)); 
    memcpy(InBlock1.PtflNo, "0000000000", sizeof(InBlock1.PtflNo)); 
    memcpy(InBlock1.BskNo, "0000000000", sizeof(InBlock1.BskNo)); 
    memcpy(InBlock1.TrchNo, "0000000000", sizeof(InBlock1.TrchNo)); 
    memcpy(InBlock1.ItemNo, "0000000000000000", sizeof(InBlock1.ItemNo)); 
    memcpy(InBlock1.MgempNo, "         ", sizeof(InBlock1.MgempNo)); 
    memcpy(InBlock1.FundId, "0           ", sizeof(InBlock1.FundId)); 
    memcpy(InBlock1.FundOrdNo, "0000000000", sizeof(InBlock1.FundOrdNo)); 
    memcpy(InBlock1.FundOrgOrdNo, "0000000000", sizeof(InBlock1.FundOrgOrdNo)); 
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
	rc = AsCallTran(AH, "a5110", encode, slen, rbuff, 5);

	/* ������Ŷ ��ȣȭ */
    rlen = AsDecode(rbuff,decode,rc);

    OutBlock2 = (CFOAT00200OutBlock2 *)&decode[sizeof(CFOAT00200OutBlock1)];

	/* ������ŶȮ�� */
    printf("�ֹ�������ȣ[%.*s]\n", sizeof(OutBlock2->OrdNo), OutBlock2->OrdNo);
    printf("[%.5s] %s\n", AH->m_MsgCode,  AH->m_MsgStr);
    /*=============================================================================*/

    AsTerminate(AH);

	return 1;
}

int main(int argc, char *argv[])
{
	int    sfd, sz;
	int    len;
	long   lordno;
	long   lqty;
	float  modiprc;
	char buff[128], temp[40];

	if(argc != 4)
	{
		printf("Usage : a1302 ���ֹ���ȣ ���� ��������\n");
        printf("    ���üҽ����� check �׸��� Ȯ���ϼ���.\n");
		return 0;
	}

    AH = AsInitial(0, NULL);
    if (AH == NULL)
    {
        printf("AS_HANDLE initial Error\n");
        exit(0);
    }

	lordno	= atol(argv[1]);
	lqty  	= atol(argv[2]);
	modiprc	= atof(argv[3]);

	sprintf(buff, "%010d%016d%015.2f", lordno, lqty, modiprc);
	/*
	printf("Send:[%s]\n", buff);
	*/

	SendPacket(buff);

	return 0;
}
