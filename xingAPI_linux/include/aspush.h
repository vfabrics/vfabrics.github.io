/**********************************************************************
** Version          : 2.0.0
** 프로그램  이름   : Linux Platform include
** 소스 화일 이름   : aspush.h
**********************************************************************/
#include "aslib.h"

#define MAX_PUSHQ_SIZE   4096

typedef struct _PUSHQ {
	long    mtype;
	char    data[MAX_PUSHQ_SIZE];
} PUSHQ_DATA;

#ifdef __cplusplus
extern "C" {
#endif

int AsPUSHInitQ(AS_HANDLE handle, key_t qkey);
int AsPUSHSendQ(AS_HANDLE handle, char *data, int len);
int AsPUSHInitUDP(AS_HANDLE handle, int port);
int AsPUSHSendUDP(AS_HANDLE handle, char *data, int len, char *target);

int AsAdvisePush(AS_HANDLE handle,  char *userid, int len);
int AsUnadvisePush(AS_HANDLE handle,  char *userid, int len);

#ifdef __cplusplus
}
#endif
