#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

#include "aslib.h"
#include "aspush.h"

AS_HANDLE	AsHandle;

/* LOGIN.cfg 설정파일 경로 */
#define CONFIG_PATH "/htsteam/home/example/customer/outer_etk_simul_c3"

int RDDataProc(AS_HANDLE AsHandle, char *data, int len)
{
	int	n, pos = 0, cnt = 0;
	char	buff[40960];

	while(pos < len)
	{
		/* =================================== */
		/* RD Size 계산                        */
		/* =================================== */
		n = (uchar)data[pos] * 256; pos++;
		n += (uchar)data[pos]; pos ++;

		memcpy(buff, &data[pos], n);
		buff[n] = 0;
		pos += n;
		cnt++;

		if(!memcmp(buff, "O01", 3))
			printf("선옵접수 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "H01", 3))
			printf("선옵정정취소 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "C01", 3))
			printf("선옵체결 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC0", 3))
			printf("주식접수 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC1", 3))
			printf("주식체결 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
		else if(!memcmp(buff, "SC2", 3))
			printf("주식정정취소 [%d][%d:%d][%s]\n", cnt, len, pos, buff);
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
	/* 통신을 위한 Handle 초기화                       */
	/* =============================================== */
	AsHandle = AsInitial(0, NULL);
	if(AsHandle == NULL)
	{
		fprintf(stderr, "AS_HANDLE initial Error\n");
		return 0;
	}

    /* =============================================== */
    /* 고객 환경 Load 및 로그인 - plase, check it out  */
    /* =============================================== */
    /*  rc = -3 : 공인인증실패                         */
    /*  rc = -2 : 로그인실패                           */
    /*  rc = -1 : 서버접속실패                         */
    /*  rc =  0 : TR전송실패                           */
    /*  rc =  1 : 성공                                 */
    rc = API_LOGIN_SIMUL(AsHandle, CONFIG_PATH, "LOGIN.cfg");
    if(rc <= 0)
    {
        printf("rc:%d [Error return]\n", rc);
        exit(0);
    }

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

	rc = AsAdvisePush(AsHandle, acc, 11); /* 계좌번호 check */
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
