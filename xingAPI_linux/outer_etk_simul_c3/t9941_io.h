/*
 * t9941 Input Output Define
 */
typedef struct
{
    char        gubun[1];   /* ����(KSP:1KSD:2) */
}t9941InBlock;

typedef struct
{
    char        hname[20];  /* ����� */
    char        shcode[6];  /* �����ڵ� */
    char        expcode[12];    /* Ȯ���ڵ� */
}t9941OutBlock;
