typedef struct _t9942InBlock
{
    char    dummy               [   1];    // [string,    1] Dummy    
} t9942InBlock, *LPt9942InBlock;

typedef struct _t9942OutBlock
{
    char    hname               [  40];    // [string,   40] 종목명       
    char    shcode              [   6];    // [string,    6] 단축코드    
    char    expcode             [  12];    // [string,   12] 확장코드   
} t9942OutBlock, *LPt9942OutBlock;
