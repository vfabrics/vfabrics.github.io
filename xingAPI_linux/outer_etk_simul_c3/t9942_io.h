typedef struct _t9942InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy    
} t9942InBlock, *LPt9942InBlock;

typedef struct _t9942OutBlock
{
    char    hname               [  40];    // [string,   40] �����       
    char    shcode              [   6];    // [string,    6] �����ڵ�    
    char    expcode             [  12];    // [string,   12] Ȯ���ڵ�   
} t9942OutBlock, *LPt9942OutBlock;
