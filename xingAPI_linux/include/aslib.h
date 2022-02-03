/**********************************************************************
** Version          : 2.0.0
** 프로그램  이름   : Linux Platform include
** 소스 화일 이름   : aslib.h
**********************************************************************/
#ifndef __ASLIB_H__
#define __ASLIB_H__

#include <sys/types.h>

#include "as_packet.h"

#define AsDebug2 AsDebug

/* FIELD ATTRIBUTE */
#define ATTR_BIG_FONT       0x80|0x01
#define ATTR_REVERSE        0x80|0x02
#define ATTR_PROTECT        0x80|0x04
#define ATTR_CURSOR         0x80|0x08
#define ATTR_BLACK          0x80|0x10
#define ATTR_BLUE           0x80|0x20
#define ATTR_RED            0x80|0x30
#define ATTR_GREEN          0x80|0x40
#define ATTR_BROWN          0x80|0x50
#define ATTR_CYAN           0x80|0x60
#define ATTR_LIGHTRED       0x80|0x70
#define ATTR_NORMAL         0x80
#define ATTR_IGNORE         0xff

/* 등락부호 Define */
#ifdef __INTERNET__
#define ATTR_UP          0x32
#define ATTR_DOWN        0x35
#define ATTR_UPLIMIT     0x31
#define ATTR_DOWNLIMIT   0x34
#define ATTR_UNCHANGE    0x33
#else
#define ATTR_UP          0x1E
#define ATTR_DOWN        0x1F
#define ATTR_UPLIMIT     0x18
#define ATTR_DOWNLIMIT   0x19
#define ATTR_UNCHANGE    0x20
#endif

#define AS_TIMEOUT          -1
#define AS_STOP             -2
#define AS_MEMORY_ERR       -3
#define AS_TR_CALL_ERROR    -4
#define AS_SYS_ERROR        -5

#define BLOCK_NAME_SIZE     16

#ifndef RING_BUFFER_SIZE
#define RING_BUFFER_SIZE    8192
#endif

typedef struct
{
    AS_TR_HEAD  m_TrHead;
    int         m_Id;

    int         m_rfd;
    int         m_wfd;
    int         m_dfd;
    int         m_key;          /* AsRQ key */
    int         m_direct;
    int         m_waittime;     /* GetMessage select time (sec)*/

    char*       m_pInBuff;
    int         m_InSize;
    int         m_InLen;
    int         m_NewBlock;

    AS_SOCK_PACKET  m_OutPack;
    int         m_OutLen;

    char        m_RingBuff[RING_BUFFER_SIZE];
    int         m_tail;
    int         m_front;

    char        m_MsgCode[6];
    char        m_MsgStr[130];
    int         m_MsgLen;

    char        m_LogFile[124];
    int         m_DebugLevel;

    int         m_dtype;        /* 수신 Data Type ( TR or other) */
    int         m_barray[12];   /* block 의 마지막 위치 표시 */
    int         m_bcnt;         /* 수신 블록 갯수           */

    int         m_EncFlag;      /* Encryption Flag */
    int         m_CompFlag;     /* Compress Flag */

    char        m_PgmName[64];
    char        m_IpAddr[32];

    void*       m_pPrev;
    void*       m_pNext;
} tagAS_HANDLE;

typedef tagAS_HANDLE*   AS_HANDLE;

#ifdef __cplusplus
extern "C" {
#endif

AS_HANDLE AsInitial(int argc, char *argv[]);
int     AsTerminate(AS_HANDLE handle);

AS_HANDLE AsInitExt(int fd);
AS_HANDLE AsGetEvent(AS_HANDLE handle, int wtime);
int     AsAddHandle(AS_HANDLE handle1, AS_HANDLE handle2);
int     AsDelHandle(AS_HANDLE handle);
int     AsTermExt(AS_HANDLE handle);

int     AsGetInputData(AS_HANDLE handle, char *buff, int len);
char    *AsGetInputBuff(AS_HANDLE handle);
int     AsGetMessage(AS_HANDLE handle, char *buff);

int     AsGetMessage2(AS_HANDLE handle);
int     AsGetMessage3(AS_HANDLE handle, char *buff);

/* alram flag = 1 이면 ON 상태 */
int     AsConnect(AS_HANDLE handle, char *server, char *port,int alarmflag);
int     AsShutdown(AS_HANDLE handle);

int     AsCheckFd(AS_HANDLE handle);
int     AsSelect(AS_HANDLE handle, int sec, int usec);
int     AsWrite(AS_HANDLE handle, char *pData, int len);
int     AsWriteOne(AS_HANDLE handle, char *pData, int len);
int     AsWriteTR(AS_HANDLE handle, char *pData, int len);
int     AsSendPacket(AS_HANDLE handle, uchar *data, int len);
int     AsRecvPacket(AS_HANDLE handle, uchar *data);
int     AsClearBuffer(AS_HANDLE handle);

/**********************************************************************/
int GetTick(char *item_sect, char *etf_yn, int hoga, int tick, int check);
/**********************************************************************/
/**********************************************************************/
int     AsOpen(AS_HANDLE handle, char *name);
int     AsOpenHead(AS_HANDLE handle, char *name,
                        char type, char *dhead, int headlen);
int     AsClose(AS_HANDLE handle, char *name);
int     AsSend(AS_HANDLE handle, char *pData, int len);
int     AsRelease(AS_HANDLE handle);

int     AsMessage(AS_HANDLE handle, int code, const char *msg);
int     AsSendMsg(AS_HANDLE handle, char *code, const char *msg);
int     AsErrorMsg(AS_HANDLE handle, int code, const char *msg);

void    AsSysDebug(const char *fmt,...);
void    AsDebug(AS_HANDLE handle, const char *fmt,...);
void    AsSetDebugFile(AS_HANDLE handle, const char *filepath);

void    AsDebugL(AS_HANDLE handle, int debuglevel, const char *fmt,...);
void    AsSetDebugLevel(AS_HANDLE handle, int debuglevel);

int     AsGetTrCode(AS_HANDLE handle, char *trcode);
int     AsSetTrCode(AS_HANDLE handle, char *trcode, int len);
void    AsClearTrFlag(AS_HANDLE handle);
uchar   AsGetTrFlag(AS_HANDLE handle);
int     AsSetWaitTime(AS_HANDLE handle, int sec);/*GetMessage select time(sec)*/
int     AsSetTrFlag(AS_HANDLE handle, int flag);
int     AsGetId(AS_HANDLE handle);
int     AsSetId(AS_HANDLE handle, int id);
int     AsSetMedia(AS_HANDLE handle, char media);
char    AsGetMedia(AS_HANDLE handle);

int     AsSetBlockMode(AS_HANDLE handle, int op);   /* 1: ON else OFF */
int     AsSetEncrypt(AS_HANDLE handle, int op); /* 1: ON else OFF */
int     AsSetCompress(AS_HANDLE handle, int op);    /* 1: ON else OFF */

int     AsGetMsgStr(AS_HANDLE handle, char *msgbuff);
int     AsGetMsgCode(AS_HANDLE handle, char *code);
int     AsGetMsgNo(AS_HANDLE handle);

int     AsGetHeadType(AS_HANDLE handle);
int     AsSetHeadType(AS_HANDLE handle, int type, int len);
int     AsGetHeadLen(AS_HANDLE handle);

int     AsGetRcvSize(AS_HANDLE handle);
int     AsGetBlockSize(AS_HANDLE handle, char *blockname);
int     AsGetRcvData(AS_HANDLE handle, char *buff);
int     AsGetBlockData(AS_HANDLE handle, char *blockname, char *buff);
int     AsCallTran(AS_HANDLE handle, char *trcode,
            char *indata, int inlen, char *outbuff, int waittime);

int     AsCallTran2(AS_HANDLE handle, char *trcode,
            char *indata, int inlen, char *outbuff, int waittime);


int     AsRemoteCall(AS_HANDLE handle, char *trcode,
            char *indata, int inlen, char *outnuff, int waittime);

int     AsRemoteCallProc(char *host,char *port,char *trcode,
            char *input,int insize,char *out,char *msg,int alarmflag,int wtime);
int     AsRemoteCallProc2(char *host,char *port,char *trcode,
            char *input,int insize,char *out,char *msg,int alarmflag,int wtime);

int     AsCallCmd(AS_HANDLE handle, char cmd, char *indata, int inlen,
            char *outbuff, int waittime);

int     AsPolling(AS_HANDLE handle);

/* AsOEM suppert function */
int     AsOEMCall(AS_HANDLE handle, char *trcode,
                                char *indata, int inlen, int wtime);

/* Monitoring Server Message function */
int     AsCSInit(AS_HANDLE handle, char *pgmname, char *addr, int port);
int     AsCSConfirmMsg(AS_HANDLE handle, const char *fmt, ...);
int     AsCSWarningMsg(AS_HANDLE handle, const char *fmt, ...);
int     AsCSCriticalMsg(AS_HANDLE handle, const char *fmt, ...);
int     AsCSSendMsg(AS_HANDLE handle, char *type, char *data, int size);

/****************************************************************************/
/* shared only                                                              */
/****************************************************************************/
int     AsClear(AS_HANDLE handle, int id, AS_TR_HEAD *pTrHead, int fd);
void*   AsGetResPtr();
void    AsSetResPtr(void *p);

/****************************************************************************/
/* database                                                                 */
/****************************************************************************/
int     AsDBSendCmd(AS_HANDLE handle, char *cmd, int len);
int     AsDBSetTerm(AS_HANDLE handle);
int     AsDBLoadFromDisk(AS_HANDLE handle);
int     AsDBSaveToDisk(AS_HANDLE handle);
int     AsDBViewStatus(AS_HANDLE handle);
int     AsDBStopServer(AS_HANDLE handle);

int     AsDBGetSize(AS_HANDLE handle);
int     AsDBGetData(AS_HANDLE handle, char *buff);
int     AsDBExec(AS_HANDLE handle, char *sql, char *msgstr);

int     AsDBGetint(AS_HANDLE handle, char *data, int *pos);
long    AsDBGetLong(AS_HANDLE handle, char *data, int *pos);
double  AsDBGetDouble(AS_HANDLE handle, char *data, int *pos);
int     AsDBGetStr(AS_HANDLE handle, char *data, int *pos, char *buff);

/* asdbc에서만 사용*/
int     AsDBGetRec(AS_HANDLE handle, char *data, int *pos, char *buff);

/****************************************************************************/
/* udp(multi) only                                                          */
/****************************************************************************/
int AsUDPSendInit(AS_HANDLE handle, char *server, char *port, int ttl);
int AsUDPRecvInit(AS_HANDLE handle, char *server, char *port);
int AsUDPSend(AS_HANDLE handle, char *senddata, int sendlen, char *target);
int AsUDPRecv(AS_HANDLE handle, char *recvbuff, int bufflen);
int AsMDPRecvInit(AS_HANDLE handle, char *server, char *port, const char *ifname, u_int ifindex);

/****************************************************************************/
/* compress only                                                            */
/****************************************************************************/
int AsOpenHeadCOM(AS_HANDLE handle, char *name, char type, char *dhead, int headlen);
int AsCloseCOM(AS_HANDLE handle, char *name);
int AsSendCOM(AS_HANDLE handle, char *data, int len);

#ifdef __cplusplus
}
#endif

#endif /* __ASLIB__ */
