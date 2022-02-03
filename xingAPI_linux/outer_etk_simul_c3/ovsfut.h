/*-------------------------------------------------------------------------*/
/* Client ������                                                         */
/*-------------------------------------------------------------------------*/
typedef struct  _SB_NHAP
{
    char MediaETK          [2]; /* ����ü                                */
    char SessionKey        [6]; /* ����Ű                                  */
    char ScreenNo          [5]; /* ȭ���ȣ                                */
    char SendSeqNo         [7]; /* ����TR SeqNo                            */
    char UserID            [8]; /* Login ID                                */
    char IPAddr           [16]; /* IP Address  192004015023                */
    char ServiceCode      [10]; /* Service Code                            */
    char BranchNo          [3]; /* ������                                  */
    char FuncCode          [4]; /* ó������  1:���,2:��ȸ,3:����,4:���,  */
                                /*         5:Ȯ��,6:��ȭ��,7:����,C:����   */
    char Cont              [1]; /* ���ӱ���  Y:����,N:NONE                 */
    char ContKey          [18]; /* ����Ű                                  */
    char Lang              [1]; /* ��� K:�ѱ�,E:����,C:�߱�,J:�Ϻ�        */
    char RqCnt             [4]; /* ��û�Ǽ�                                */
    char Loan              [1]; /* �б��� 1:�Ŀ���,0:������              */
    char MediaComm         [2]; /* ��Ÿ�ü                                */
    char BussGb            [1]; /* �����켭�߰����� 1:�����������,0:NONE  */
    char Filler            [9]; /* Filler                                  */
    char UserData         [26]; /* ��������                                */
    char MacAddress       [12]; /* MAC ADDRESS                             */
    char Filler2          [18]; /* Filler2                                 */
} SB_NHAP;

/*-------------------------------------------------------------------------*/
/* �ؿܼ��� �������                                                       */
/*-------------------------------------------------------------------------*/
/* �ؿܼ��� ü�᳻������ ��ȸ */
typedef struct _CIDBQ01400InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    QryTpCode           [   1];    // [string,    1] ��ȸ�����ڵ�          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
} CIDBQ01400InBlock1, *LPCIDBQ01400InBlock1;

typedef struct _CIDBQ01400OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    QryTpCode           [   1];    // [string,    1] ��ȸ�����ڵ�          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
} CIDBQ01400OutBlock1, *LPCIDBQ01400OutBlock1;

typedef struct _CIDBQ01400OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���          
} CIDBQ01400OutBlock2, *LPCIDBQ01400OutBlock2;

/* �ؿܼ��� �̰��� �ܰ��� */
typedef struct _CIDBQ01500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntTpCode          [   1];    // [string,    1] ���±����ڵ�          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ           
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    QryDt               [   8];    // [string,    8] ��ȸ����              
    char    BalTpCode           [   1];    // [string,    1] �ܰ����ڵ�          
} CIDBQ01500InBlock1, *LPCIDBQ01500InBlock1;

typedef struct _CIDBQ01500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntTpCode          [   1];    // [string,    1] ���±����ڵ�          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ           
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    QryDt               [   8];    // [string,    8] ��ȸ����              
    char    BalTpCode           [   1];    // [string,    1] �ܰ����ڵ�          
} CIDBQ01500OutBlock1, *LPCIDBQ01500OutBlock1;

typedef struct _CIDBQ01500OutBlock2
{
    char    BaseDt              [   8];    // [string,    8] ��������              
    char    Dps                 [  16];    // [long  ,   16] ������                
    char    LpnlAmt             [  19];    // [double, 19.2] û����ͱݾ�          
    char    FutsDueBfLpnlAmt    [  23];    // [double, 23.2] ����������û����ͱݾ�
    char    FutsDueBfCmsn       [  23];    // [double, 23.2] ����������������      
    char    CsgnMgn             [  16];    // [long  ,   16] ��Ź���űݾ�          
    char    MaintMgn            [  16];    // [long  ,   16] �������ű�            
    char    CtlmtAmt            [  23];    // [double, 23.2] �ſ��ѵ��ݾ�          
    char    AddMgn              [  16];    // [long  ,   16] �߰����űݾ�          
    char    MgnclRat            [  27];    // [double,27.10] ��������              
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�          
    char    WthdwAbleAmt        [  16];    // [long  ,   16] ���Ⱑ�ɱݾ�          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    IsuNm               [  50];    // [string,   50] �����                
    char    CrcyCodeVal         [   3];    // [string,    3] ��ȭ�ڵ尪            
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] �ؿ��Ļ���ǰ�ڵ�      
    char    OvrsDrvtOptTpCode   [   1];    // [string,    1] �ؿ��Ļ��ɼǱ����ڵ�  
    char    DueDt               [   8];    // [string,    8] ��������              
    char    OvrsDrvtXrcPrc      [  25];    // [double, 25.8] �ؿ��Ļ���簡��      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    CmnCodeNm           [ 100];    // [string,  100] �����ڵ��            
    char    TpCodeNm            [  50];    // [string,   50] �����ڵ��            
    char    BalQty              [  16];    // [long  ,   16] �ܰ����              
    char    PchsPrc             [  25];    // [double, 25.8] ���԰���              
    char    OvrsDrvtNowPrc      [  25];    // [double, 25.8] �ؿ��Ļ����簡        
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] �ؿܼ����򰡼��ͱݾ�  
    char    CsgnCmsn            [  19];    // [double, 19.2] ��Ź������            
    char    PosNo               [  13];    // [string,   13] �����ǹ�ȣ            
    char    EufOneCmsnAmt       [  19];    // [double, 19.2] �ŷ��Һ��1������ݾ� 
    char    EufTwoCmsnAmt       [  19];    // [double, 19.2] �ŷ��Һ��2������ݾ� 
} CIDBQ01500OutBlock2, *LPCIDBQ01500OutBlock2;

/* �ؿܼ��� �ֹ�ü�᳻�� ��ȸ */ 
typedef struct _CIDBQ01800InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    ThdayTpCode         [   1];    // [string,    1] ���ϱ����ڵ�          
    char    OrdStatCode         [   1];    // [string,    1] �ֹ������ڵ�          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    QryTpCode           [   1];    // [string,    1] ��ȸ�����ڵ�          
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�          
} CIDBQ01800InBlock1, *LPCIDBQ01800InBlock1;

typedef struct _CIDBQ01800OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    ThdayTpCode         [   1];    // [string,    1] ���ϱ����ڵ�          
    char    OrdStatCode         [   1];    // [string,    1] �ֹ������ڵ�          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    QryTpCode           [   1];    // [string,    1] ��ȸ�����ڵ�          
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�          
} CIDBQ01800OutBlock1, *LPCIDBQ01800OutBlock1;

typedef struct _CIDBQ01800OutBlock2
{
    char    OvrsFutsOrdNo       [  10];    // [string,   10] �ؿܼ����ֹ���ȣ      
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] �ؿܼ������ֹ���ȣ    
    char    FcmOrdNo            [  15];    // [string,   15] FCM�ֹ���ȣ           
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    IsuNm               [  50];    // [string,   50] �����                
    char    AbrdFutsXrcPrc      [  29];    // [double,29.10] �ؿܼ�����簡��      
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ           
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű��и�            
    char    FutsOrdStatCode     [   1];    // [string,    1] �����ֹ������ڵ�      
    char    TpCodeNm            [  50];    // [string,   50] �����ڵ��            
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    TrdTpNm             [  20];    // [string,   20] �ŷ����и�            
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] �ؿܼ����ֹ������ڵ�  
    char    OrdPtnNm            [  40];    // [string,   40] �ֹ�������            
    char    OrdPtnTermTpCode    [   2];    // [string,    2] �ֹ������Ⱓ�����ڵ�  
    char    CmnCodeNm           [ 100];    // [string,  100] �����ڵ��            
    char    AppSrtDt            [   8];    // [string,    8] �����������          
    char    AppEndDt            [   8];    // [string,    8] ������������          
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] �ؿ��Ļ��ֹ�����      
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    AbrdFutsExecPrc     [  29];    // [double,29.10] �ؿܼ���ü�ᰡ��      
    char    ExecQty             [  16];    // [long  ,   16] ü�����              
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���          
    char    OvrsDrvtNowPrc      [  25];    // [double, 25.8] �ؿ��Ļ����簡        
    char    MdfyQty             [  16];    // [long  ,   16] ��������              
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���              
    char    RjtQty              [  13];    // [long  ,   13] �źμ���              
    char    CnfQty              [  16];    // [long  ,   16] Ȯ�μ���              
    char    CvrgYn              [   1];    // [string,    1] �ݴ�Ÿſ���          
    char    RegTmnlNo           [   3];    // [string,    3] ��ϴܸ���ȣ          
    char    RegBrnNo            [   3];    // [string,    3] ���������ȣ          
    char    RegUserId           [  16];    // [string,   16] ��ϻ����ID          
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�              
} CIDBQ01800OutBlock2, *LPCIDBQ01800OutBlock2;

/* �ؿܼ��� ���¿�Ź�ڻ���ȸ */
typedef struct _CIDBQ05300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OvrsAcntTpCode      [   1];    // [string,    1] �ؿܰ��±����ڵ�      
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ           
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    AcntPwd             [   8];    // [string,    8] ���º�й�ȣ          
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�              
} CIDBQ05300InBlock1, *LPCIDBQ05300InBlock1;

typedef struct _CIDBQ05300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OvrsAcntTpCode      [   1];    // [string,    1] �ؿܰ��±����ڵ�      
    char    FcmAcntNo           [  20];    // [string,   20] FCM���¹�ȣ           
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    AcntPwd             [   8];    // [string,    8] ���º�й�ȣ          
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�              
} CIDBQ05300OutBlock1, *LPCIDBQ05300OutBlock1;

typedef struct _CIDBQ05300OutBlock2
{
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�              
    char    OvrsFutsDps         [  23];    // [double, 23.2] �ؿܼ���������        
    char    AbrdFutsCsgnMgn     [  19];    // [double, 19.2] �ؿܼ�����Ź���űݾ�  
    char    OvrsFutsSplmMgn     [  23];    // [double, 23.2] �ؿܼ����߰����ű�    
    char    CustmLpnlAmt        [  19];    // [double, 19.2] ��û����ͱݾ�      
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] �ؿܼ����򰡼��ͱݾ�  
    char    AbrdFutsCmsnAmt     [  19];    // [double, 19.2] �ؿܼ���������ݾ�    
    char    AbrdFutsEvalDpstgTotAmt[  19];    // [double, 19.2] �ؿܼ����򰡿�Ź��?
    char    Xchrat              [  15];    // [double, 15.4] ȯ��                  
    char    FcurrRealMxchgAmt   [  19];    // [double, 19.2] ��ȭ��ȯ���ݾ�        
    char    AbrdFutsWthdwAbleAmt[  19];    // [double, 19.2] �ؿܼ������Ⱑ�ɱݾ�  
    char    AbrdFutsOrdAbleAmt  [  19];    // [double, 19.2] �ؿܼ����ֹ����ɱݾ�  
    char    FutsDueNarrvLqdtPnlAmt[  19];    // [double, 19.2] ��������̵���û���
    char    FutsDueNarrvCmsn    [  19];    // [double, 19.2] ��������̵���������  
    char    AbrdFutsLqdtPnlAmt  [  19];    // [double, 19.2] �ؿܼ���û����ͱݾ�  
    char    OvrsFutsDueCmsn     [  19];    // [double, 19.2] �ؿܼ������������    
    char    OvrsFutsOptBuyAmt   [  23];    // [double, 23.2] �ؿܼ����ɼǸż��ݾ�  
    char    OvrsFutsOptSellAmt  [  23];    // [double, 23.2] �ؿܼ����ɼǸŵ��ݾ�  
    char    OptBuyMktWrthAmt    [  19];    // [double, 19.2] �ɼǸż����尡ġ�ݾ�  
    char    OptSellMktWrthAmt   [  19];    // [double, 19.2] �ɼǸŵ����尡ġ�ݾ�  
} CIDBQ05300OutBlock2, *LPCIDBQ05300OutBlock2;

typedef struct _CIDBQ05300OutBlock3
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OvrsFutsDps         [  23];    // [double, 23.2] �ؿܼ���������        
    char    AbrdFutsLqdtPnlAmt  [  19];    // [double, 19.2] �ؿܼ���û����ͱݾ�  
    char    FutsDueNarrvLqdtPnlAmt[  19];    // [double, 19.2] ��������̵���û���
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] �ؿܼ����򰡼��ͱݾ�  
    char    AbrdFutsEvalDpstgTotAmt[  19];    // [double, 19.2] �ؿܼ����򰡿�Ź��?
    char    CustmLpnlAmt        [  19];    // [double, 19.2] ��û����ͱݾ�      
    char    OvrsFutsDueCmsn     [  19];    // [double, 19.2] �ؿܼ������������    
    char    FcurrRealMxchgAmt   [  19];    // [double, 19.2] ��ȭ��ȯ���ݾ�        
    char    AbrdFutsCmsnAmt     [  19];    // [double, 19.2] �ؿܼ���������ݾ�    
    char    FutsDueNarrvCmsn    [  19];    // [double, 19.2] ��������̵���������  
    char    AbrdFutsCsgnMgn     [  19];    // [double, 19.2] �ؿܼ�����Ź���űݾ�  
    char    OvrsFutsMaintMgn    [  19];    // [double, 19.2] �ؿܼ����������ű�    
    char    OvrsFutsOptBuyAmt   [  23];    // [double, 23.2] �ؿܼ����ɼǸż��ݾ�  
    char    OvrsFutsOptSellAmt  [  23];    // [double, 23.2] �ؿܼ����ɼǸŵ��ݾ�  
    char    CtlmtAmt            [  23];    // [double, 23.2] �ſ��ѵ��ݾ�          
    char    OvrsFutsSplmMgn     [  23];    // [double, 23.2] �ؿܼ����߰����ű�    
    char    MgnclRat            [  27];    // [double,27.10] ��������              
    char    AbrdFutsOrdAbleAmt  [  19];    // [double, 19.2] �ؿܼ����ֹ����ɱݾ�  
    char    AbrdFutsWthdwAbleAmt[  19];    // [double, 19.2] �ؿܼ������Ⱑ�ɱݾ�  
    char    OptBuyMktWrthAmt    [  19];    // [double, 19.2] �ɼǸż����尡ġ�ݾ�  
    char    OptSellMktWrthAmt   [  19];    // [double, 19.2] �ɼǸŵ����尡ġ�ݾ�  
} CIDBQ05300OutBlock3, *LPCIDBQ05300OutBlock3;

/* �ؿܼ����ű��ֹ� */
typedef struct _CIDBT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    BrnCode             [   7];    // [string,    7] �����ڵ�              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] �ؿܼ����ֹ������ڵ�  
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�              
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] �ؿ��Ļ��ֹ�����      
    char    CndiOrdPrc          [  25];    // [double, 25.8] �����ֹ�����          
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    PrdtCode            [   6];    // [string,    6] ��ǰ�ڵ�              
    char    DueYymm             [   6];    // [string,    6] ������              
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT00100InBlock1, *LPCIDBT00100InBlock1;


typedef struct _CIDBT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    BrnCode             [   7];    // [string,    7] �����ڵ�              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] �ؿܼ����ֹ������ڵ�  
    char    CrcyCode            [   3];    // [string,    3] ��ȭ�ڵ�              
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] �ؿ��Ļ��ֹ�����      
    char    CndiOrdPrc          [  25];    // [double, 25.8] �����ֹ�����          
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    PrdtCode            [   6];    // [string,    6] ��ǰ�ڵ�              
    char    DueYymm             [   6];    // [string,    6] ������              
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT00100OutBlock1, *LPCIDBT00100OutBlock1;


typedef struct _CIDBT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] �ؿܼ����ֹ���ȣ      
} CIDBT00100OutBlock2, *LPCIDBT00100OutBlock2;


/* �ؿܼ��������ֹ� */
typedef struct _CIDBT00900InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    RegBrnNo            [   3];    // [string,    3] ���������ȣ          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] �ؿܼ������ֹ���ȣ    
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    FutsOrdPtnCode      [   1];    // [string,    1] �����ֹ������ڵ�      
    char    CrcyCodeVal         [   3];    // [string,    3] ��ȭ�ڵ尪            
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] �ؿ��Ļ��ֹ�����      
    char    CndiOrdPrc          [  25];    // [double, 25.8] �����ֹ�����          
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] �ؿ��Ļ���ǰ�ڵ�      
    char    DueYymm             [   6];    // [string,    6] ������              
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT00900InBlock1, *LPCIDBT00900InBlock1;


typedef struct _CIDBT00900OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    RegBrnNo            [   3];    // [string,    3] ���������ȣ          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] �ؿܼ������ֹ���ȣ    
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    FutsOrdPtnCode      [   1];    // [string,    1] �����ֹ������ڵ�      
    char    CrcyCodeVal         [   3];    // [string,    3] ��ȭ�ڵ尪            
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] �ؿ��Ļ��ֹ�����      
    char    CndiOrdPrc          [  25];    // [double, 25.8] �����ֹ�����          
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] �ؿ��Ļ���ǰ�ڵ�      
    char    DueYymm             [   6];    // [string,    6] ������              
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT00900OutBlock1, *LPCIDBT00900OutBlock1;


typedef struct _CIDBT00900OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] �ؿܼ����ֹ���ȣ      
    char    InnerMsgCnts        [  80];    // [string,   80] ���θ޽�������        
} CIDBT00900OutBlock2, *LPCIDBT00900OutBlock2;


/* �ؿܼ�������ֹ� */
typedef struct _CIDBT01000InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    BrnNo               [   3];    // [string,    3] ������ȣ              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] �ؿܼ������ֹ���ȣ    
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    PrdtTpCode          [   2];    // [string,    2] ��ǰ�����ڵ�          
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT01000InBlock1, *LPCIDBT01000InBlock1;


typedef struct _CIDBT01000OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdDt               [   8];    // [string,    8] �ֹ�����              
    char    BrnNo               [   3];    // [string,    3] ������ȣ              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    IsuCodeVal          [  18];    // [string,   18] �����ڵ尪            
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] �ؿܼ������ֹ���ȣ    
    char    FutsOrdTpCode       [   1];    // [string,    1] �����ֹ������ڵ�      
    char    PrdtTpCode          [   2];    // [string,    2] ��ǰ�����ڵ�          
    char    ExchCode            [  10];    // [string,   10] �ŷ����ڵ�            
} CIDBT01000OutBlock1, *LPCIDBT01000OutBlock1;


typedef struct _CIDBT01000OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] �ؿܼ����ֹ���ȣ      
    char    InnerMsgCnts        [  80];    // [string,   80] ���θ޽�������        
} CIDBT01000OutBlock2, *LPCIDBT01000OutBlock2;


/*-------------------------------------------------------------------------*/
/* �ؿܼ��� ü��RD���                                                     */
/*-------------------------------------------------------------------------*/
/* �ؿܼ����ֹ����� */
typedef struct _TC1_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] �����Ϸù�ȣ      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] ������ID          
    char    svc_id              [   4];    // [string,    4] ����ID          
    char    ordr_dt             [   8];    // [string,    8] �ֹ�����          
    char    brn_cd              [   3];    // [string,    3] ������ȣ          
    char    ordr_no             [  10];    // [long  ,   10] �ֹ���ȣ          
    char    orgn_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    mthr_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    ac_no               [  11];    // [string,   11] ���¹�ȣ          
    char    is_cd               [  30];    // [string,   30] �����ڵ�          
    char    s_b_ccd             [   1];    // [string,    1] �ŵ��ż�����      
    char    ordr_ccd            [   1];    // [string,    1] �����������      
    char    ordr_typ_cd         [   1];    // [string,    1] �ֹ������ڵ�      
    char    ordr_typ_prd_ccd    [   2];    // [string,    2] �ֹ��Ⱓ�ڵ�      
    char    ordr_aplc_strt_dt   [   8];    // [string,    8] �ֹ������������  
    char    ordr_aplc_end_dt    [   8];    // [string,    8] �ֹ�������������  
    char    ordr_prc            [  15];    // [double, 15.8] �ֹ�����          
    char    cndt_ordr_prc       [  15];    // [double, 15.8] �ֹ����ǰ���      
    char    ordr_q              [  12];    // [long  ,   12] �ֹ�����          
    char    ordr_tm             [   9];    // [string,    9] �ֹ��ð�          
    char    userid              [   8];    // [string,    8] �����ID          
} TC1_OutBlock, *LPTC1_OutBlock;

/* �ؿܼ����ֹ����� */
typedef struct _TC2_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] �����Ϸù�ȣ      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] ������ID          
    char    svc_id              [   4];    // [string,    4] ����ID          
    char    ordr_dt             [   8];    // [string,    8] �ֹ�����          
    char    brn_cd              [   3];    // [string,    3] ������ȣ          
    char    ordr_no             [  10];    // [long  ,   10] �ֹ���ȣ          
    char    orgn_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    mthr_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    ac_no               [  11];    // [string,   11] ���¹�ȣ          
    char    is_cd               [  30];    // [string,   30] �����ڵ�          
    char    s_b_ccd             [   1];    // [string,    1] �ŵ��ż�����      
    char    ordr_ccd            [   1];    // [string,    1] �����������      
    char    ordr_typ_cd         [   1];    // [string,    1] �ֹ������ڵ�      
    char    ordr_typ_prd_ccd    [   2];    // [string,    2] �ֹ��Ⱓ�ڵ�      
    char    ordr_aplc_strt_dt   [   8];    // [string,    8] �ֹ������������  
    char    ordr_aplc_end_dt    [   8];    // [string,    8] �ֹ�������������  
    char    ordr_prc            [  15];    // [double, 15.8] �ֹ�����          
    char    cndt_ordr_prc       [  15];    // [double, 15.8] �ֹ����ǰ���      
    char    ordr_q              [  12];    // [long  ,   12] �ֹ�����          
    char    ordr_tm             [   9];    // [string,    9] �ֹ��ð�          
    char    cnfr_q              [  12];    // [long  ,   12] ȣ��Ȯ�μ���      
    char    rfsl_cd             [   4];    // [string,    4] ȣ���źλ����ڵ�  
    char    text                [ 300];    // [string,  300] ȣ���źλ����ڵ��
} TC2_OutBlock, *LPTC2_OutBlock;

/* �ؿܼ���ü�� */
typedef struct _TC3_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] �����Ϸù�ȣ      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] ������ID          
    char    svc_id              [   4];    // [string,    4] ����ID          
    char    ordr_dt             [   8];    // [string,    8] �ֹ�����          
    char    brn_cd              [   3];    // [string,    3] ������ȣ          
    char    ordr_no             [  10];    // [long  ,   10] �ֹ���ȣ          
    char    orgn_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    mthr_ordr_no        [  10];    // [long  ,   10] ���ֹ���ȣ        
    char    ac_no               [  11];    // [string,   11] ���¹�ȣ          
    char    is_cd               [  30];    // [string,   30] �����ڵ�          
    char    s_b_ccd             [   1];    // [string,    1] �ŵ��ż�����      
    char    ordr_ccd            [   1];    // [string,    1] �����������      
    char    ccls_q              [  15];    // [long  ,   15] ü�����          
    char    ccls_prc            [  15];    // [double, 15.8] ü�ᰡ��          
    char    ccls_no             [  10];    // [string,   10] ü���ȣ          
    char    ccls_tm             [   9];    // [string,    9] ü��ð�          
    char    avg_byng_uprc       [  12];    // [double, 12.6] ������մܰ�      
    char    byug_amt            [  25];    // [double, 25.8] ���Աݾ�          
    char    clr_pl_amt          [  19];    // [double, 19.2] û�����          
    char    ent_fee             [  19];    // [double, 19.2] ��Ź������        
    char    fcm_fee             [  19];    // [double, 19.2] FCM������         
    char    userid              [   8];    // [string,    8] �����ID          
    char    now_prc             [  15];    // [double, 15.8] ���簡��          
    char    crncy_cd            [   3];    // [string,    3] ��ȭ�ڵ�          
    char    mtrt_dt             [   8];    // [string,    8] ��������          
} TC3_OutBlock, *LPTC3_OutBlock;
