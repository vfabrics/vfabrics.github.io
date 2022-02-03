#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

#include "aslib.h"
#include "aspush.h"

AS_HANDLE	AsHandle;

/* LOGIN.cfg �������� ��� */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

int RDDataProc(AS_HANDLE AsHandle, char *data, int len)
{
	int	n, pos = 0, cnt = 0;
	char	buff[40960];

	while(pos < len)
	{
		/* =================================== */
		/* RD Size ���                        */
		/* =================================== */
		n = (uchar)data[pos] * 256; pos++;
		n += (uchar)data[pos]; pos ++;

		memcpy(buff, &data[pos], n);
		buff[n] = 0;
		pos += n;
		cnt++;

		if(!memcmp(buff, "O01", 3))
			printf("�������� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "H01", 3))
			printf("����������� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "C01", 3))
			printf("����ü�� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC0", 3))
			printf("�ֽ����� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC1", 3))
			printf("�ֽ�ü�� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC2", 3))
			printf("�ֽ�������� [%d][%d:%d][%s]\n", cnt, len, pos, buff);
	}
	return 1;
}

int RDMsgProc()
{
	AS_COMM_PACKET  *pCommPack;
    struct  timeval timeout;

	fd_set  event;
	int     rcvsize, size, maxfd, rc, loop = 1;
	uchar 	buff[4096];
    uchar   tmp[MAX_PACKET_SIZE + 10];

	pCommPack = (AS_COMM_PACKET *)buff;
	while(loop)
	{
		timeout.tv_sec  = 300;    /* Second */
		timeout.tv_usec = 0;    /* micro Second */
		FD_ZERO(&event);
		FD_SET(AsHandle->m_rfd, &event);
		maxfd = AsHandle->m_rfd + 1;

		rc = select(maxfd, &event, 
			(fd_set *)0,(fd_set *)0, (struct timeval *) &timeout);
		if (rc > 0)
		{
			if(FD_ISSET(AsHandle->m_rfd, &event))
			{
				if(AsCheckFd(AsHandle) <= 0) return AS_STOP; 

				while(1) 
				{
					rcvsize = AsRecvPacket(AsHandle, (uchar *)buff);
					if (rcvsize <= 0) break;
					buff[rcvsize] = 0;

				    size = rcvsize - sizeof(AS_COMM_HEAD);
				    if (pCommPack->head.flag[0] & AS_COMPRESS)
					{
						size = DecompressLZO(pCommPack->data,tmp, size);
						memcpy((char *)pCommPack->data, tmp, size);
					}
					RDDataProc(AsHandle, (char *)pCommPack->data, size);
				}
			}
		} else 
		if (rc == 0)
		{
			fprintf(stderr, "Timeout................\n");
		} else
		{
			fprintf(stderr, "signal no=%d...............\n", errno);
		}
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int rc;
    char logname[256];
	char 	id[16], pwd[16], acc[16], accpwd[16], branch[16], macadd[12];

	/* =============================================== */
	/* ����� ���� Handle �ʱ�ȭ                       */
	/* =============================================== */
	AsHandle = AsInitial(0, NULL);
	if(AsHandle == NULL)
	{
		fprintf(stderr, "AS_HANDLE initial Error\n");
		return 0;
	}

    /* =============================================== */
    /* �� ȯ�� Load �� �α��� - plase, check it out  */
    /* =============================================== */
    /*  rc = -3 : ������������                         */
    /*  rc = -2 : �α��ν���                           */
    /*  rc = -1 : �������ӽ���                         */
    /*  rc =  0 : TR���۽���                           */
    /*  rc =  1 : ����                                 */
    rc = API_LOGIN_SIMUL(AsHandle, CONFIG_PATH, "LOGIN.cfg");
    if(rc <= 0)
    {
        printf("rc:%d [Error return]\n", rc);
        exit(0);
    }

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

	rc = AsAdvisePush(AsHandle, acc, 11); /* ���¹�ȣ check */
	if (rc <= 0)
	{
		fprintf(stderr, "Rd Key Advise Error [%d]\n", rc);
		return 0;
	}

	RDMsgProc();

	/* =============================================== */
	/* Handle Clear                                    */
	/* =============================================== */
	AsTerminate(AsHandle);

	return 0;
}
