/*
 * t9941 Input Output Define
 */
typedef struct
{
    char        gubun[1];   /* 구분(KSP:1KSD:2) */
}t9941InBlock;

typedef struct
{
    char        hname[20];  /* 종목명 */
    char        shcode[6];  /* 단축코드 */
    char        expcode[12];    /* 확장코드 */
}t9941OutBlock;
