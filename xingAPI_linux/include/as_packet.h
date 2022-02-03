/**********************************************************************
** Version          : 2.0.0
** 프로그램  이름   : Linux Platform include
** 소스 화일 이름   : as_packet.h
**********************************************************************/
#ifndef __AS_PACKET_H__
#define __AS_PACKET_H__

#define SOH					0x01
#define STX					0x02
#define ETX					0x03
#define EOT                 0x04

#ifndef uchar
#define uchar			unsigned char
#endif

/* 한번에 교환할수 있는 최대 자료 크기 (Header및 Data 합) */
#define MAX_PACKET_SIZE		4096

/* MAX_PACKET_SIZE 보다 TR_HEAD+DATA_HEAD 이상 작아야 함. */
#define MAX_SEND_SIZE		2048

/* 통신 Header Command */
enum {
	/* 단말과 서버 Process Command */
	AS_SISE_ADV 	= 	'A',
	AS_SISE_UNADV,
	AS_SISE_REQ,
	AS_SISE_DATA,
	AS_TRANSACTION,
	AS_RELEASE_FUNC,
	AS_PUSH_ADV,
	AS_PUSH_UNADV,
	AS_PUSH_DATA,

	AS_SERVER_HELLO	= 'K',		/* Xecure 암호처리 Command */
	AS_SERVER_ID	,			/* Xecure 암호처리 Command */
	AS_SERVER_PWD	,			/* Xecure 암호처리 Command */

	AS_LOGIN_DATA	=	'O',
	AS_MESSAGE_DATA,
	AS_SYSTEM_ERROR,

	AS_ITV_ADV		= 	'R',	/* AsITVc I/O Command	*/
	AS_ITV_UNADV,
	AS_ITV_REQ,
	AS_ITV_DATA,
	AS_TR_LIST		=	'V',	/* system internal command */
	AS_SET_INITECH  =   'W',    /* 이니텍 모듈 사용 */
	AS_SET_KEY		=	'X',	/* DES key set */
	AS_SET_PUBLIC_KEY,			/* 공인 인증서를 받아 Public Key 생성  */
	AS_SET_PUBLIC_KEY_WEB,      /* 공인 인증서를 받아 Public Key 생성  */

	/* 서버 Daemon Process Command */
    AS_FORM_CMD     =   'a',    /* AsForm Server Command */

	AS_ORD_CMD      =   'b',    /* AsORD Server Command */
	AS_RQ_CMD		= 	'c',	/* AsRQ Server Command */
	AS_BRK_CMD		= 	'd',	/* AsBRK Server Command */
	AS_OEM_CMD		= 	'e',	/* AsOEM Server Command */

	AS_REMOTE_CMD   =   'f',    /* AsRcmd Gang Add 20120323 */

	AS_BRD_CMD		= 	'g',	/* AsBRD Server Command */
	AS_RES_CMD		= 	'o',	/* AsResd Server Command */
	AS_CRON_CMD		= 	'p',	/* AsCRON Server Command */

	AS_DBS_CMD		= 	'q',	/* AsDBs Query Command */
	AS_TIC_CMD		= 	'r',	/* AsTIC Query Command */

	AS_BUS_CMD		= 	'v',	/* AsBUS Command */

	AS_PUT_FILE		= 	'w', 	
	AS_GET_FILE		= 	'x',
	AS_FILE_STAT	= 	'y',

	AS_POLLING		= 	'z',
	AS_CMD_END
};

/* Communication Flag */
#define AS_ENCRYPT			0x10
#define AS_COMPRESS			0x20

#define AS_FIRST_DATA		0x01
#define AS_MID_DATA			0x02
#define AS_LAST_DATA		0x03

/**************************************************************/
/* Communication Head */
typedef struct {
	uchar	flag[1];	/* Packet Flag  (Encrypt & Compress)*/
	uchar	id[1];		/* TR ID */
	uchar	cmd[1];		/* command */
} AS_COMM_HEAD;

/* Communication Packet */
typedef struct {
	AS_COMM_HEAD	head;
	uchar			data[1];
} AS_COMM_PACKET;

typedef struct {
	uchar	stx[1];
	uchar	hi[1];		/* length hi n/256 */
	uchar	lo[1];		/* length low n%256 */
	AS_COMM_HEAD	head;
	uchar			data[MAX_PACKET_SIZE];
/*	uchar	etx[1]; */	/* data 길이가 가변이므로 위치가 가변임 */
} AS_SOCK_PACKET;

/**************************************************************/
/*  Transaction flag define */
#define AS_NEXSYS_TR        0x01
#define AS_EBCDIC_TR        0x02
#define AS_BLOCK_MODE		0x04
#define AS_ELECTRO_SIGN		0x08

/* Transaction Head */
typedef struct {
	uchar	flag[1];		/* Transaction Type*/
	uchar	trcode[5];		/* 프로그램 코드 */
	uchar	media[1];		/* 매체구분 ('H':Hts 'I':Internet) */
	uchar	dhead_type[1];	/* Data Header Type */
	uchar	dhead_hi[1];	/* Data Header Length HI (n/256)*/
	uchar	dhead_lo[1];	/* Data Header Length LOW (n%256)*/
	uchar	filler[6];
} AS_TR_HEAD;

/* Transaction Packet */
typedef struct {
	AS_TR_HEAD		head;
	uchar			data[1];
} AS_TR_PACKET;

/**************************************************************/
/*  system error or message structure */
typedef struct {
	char	code[5];
	char	msg[130];
} AS_MSG_PACKET;

/**************************************************************/
#endif /* __AS_PACKET__ */
