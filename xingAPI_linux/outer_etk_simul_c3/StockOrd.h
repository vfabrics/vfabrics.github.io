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

// �ֽĽű��ֹ�
typedef struct _CSPAT00600InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ        
    char    IsuNo               [  12];    // [string,   12] �����ȣ            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���              
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    OrdprcPtnCode       [   2];    // [string,    2] ȣ�������ڵ�        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] ���α׷�ȣ�������ڵ�
    char    StslAbleYn          [   1];    // [string,    1] ���ŵ����ɿ���      
    char    StslOrdprcTpCode    [   1];    // [string,    1] ���ŵ�ȣ������      
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    MgntrnCode          [   3];    // [string,    3] �ſ�ŷ��ڵ�        
    char    LoanDt              [   8];    // [string,    8] ������              
    char    MbrNo               [   3];    // [string,    3] ȸ����ȣ            
    char    OrdCndiTpCode       [   1];    // [string,    1] �ֹ����Ǳ���        
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�            
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��            
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    LpYn                [   1];    // [string,    1] �����������ڿ���    
    char    CvrgTpCode          [   1];    // [string,    1] �ݴ�Ÿű���        
} CSPAT00600InBlock1, *LPCSPAT00600InBlock1;

typedef struct _CSPAT00600OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ        
    char    IsuNo               [  12];    // [string,   12] �����ȣ            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���              
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    OrdprcPtnCode       [   2];    // [string,    2] ȣ�������ڵ�        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] ���α׷�ȣ�������ڵ�
    char    StslAbleYn          [   1];    // [string,    1] ���ŵ����ɿ���      
    char    StslOrdprcTpCode    [   1];    // [string,    1] ���ŵ�ȣ������      
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    MgntrnCode          [   3];    // [string,    3] �ſ�ŷ��ڵ�        
    char    LoanDt              [   8];    // [string,    8] ������              
    char    MbrNo               [   3];    // [string,    3] ȸ����ȣ            
    char    OrdCndiTpCode       [   1];    // [string,    1] �ֹ����Ǳ���        
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�            
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��            
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    LpYn                [   1];    // [string,    1] �����������ڿ���    
    char    CvrgTpCode          [   1];    // [string,    1] �ݴ�Ÿű���        
} CSPAT00600OutBlock1, *LPCSPAT00600OutBlock1;

typedef struct _CSPAT00600OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��       
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ        
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�        
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    ShtnIsuNo           [   9];    // [string,    9] ���������ȣ    
    char    MgempNo             [   9];    // [string,    9] ���������ȣ    
    char    OrdAmt              [  16];    // [long  ,   16] �ֹ��ݾ�        
    char    SpareOrdNo          [  10];    // [long  ,   10] �����ֹ���ȣ    
    char    CvrgSeqno           [  10];    // [long  ,   10] �ݴ�Ÿ��Ϸù�ȣ 
    char    RsvOrdNo            [  10];    // [long  ,   10] �����ֹ���ȣ     
    char    SpotOrdQty          [  16];    // [long  ,   16] �ǹ��ֹ�����     
    char    RuseOrdQty          [  16];    // [long  ,   16] �����ֹ�����   
    char    MnyOrdAmt           [  16];    // [long  ,   16] �����ֹ��ݾ�     
    char    SubstOrdAmt         [  16];    // [long  ,   16] ����ֹ��ݾ�     
    char    RuseOrdAmt          [  16];    // [long  ,   16] �����ֹ��ݾ�   
    char    AcntNm              [  40];    // [string,   40] ���¸�           
    char    IsuNm               [  40];    // [string,   40] �����           
} CSPAT00600OutBlock2, *LPCSPAT00600OutBlock2;

/* �ֽ������ֹ� */
typedef struct _CSPAT00700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��    
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ    
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ      
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ  
    char    IsuNo               [  12];    // [string,   12] �����ȣ      
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����      
    char    OrdprcPtnCode       [   2];    // [string,    2] ȣ�������ڵ�  
    char    OrdCndiTpCode       [   1];    // [string,    1] �ֹ����Ǳ���  
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���        
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�  
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�      
    char    GrpId               [  20];    // [string,   20] �׷�ID        
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��      
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ    
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ    
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ    
} CSPAT00700InBlock1, *LPCSPAT00700InBlock1;

              
typedef struct _CSPAT00700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��    
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ    
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ      
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ  
    char    IsuNo               [  12];    // [string,   12] �����ȣ      
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����      
    char    OrdprcPtnCode       [   2];    // [string,    2] ȣ�������ڵ�  
    char    OrdCndiTpCode       [   1];    // [string,    1] �ֹ����Ǳ���  
    char    OrdPrc              [  13];    // [double, 13.2] �ֹ���        
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�  
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�      
    char    GrpId               [  20];    // [string,   20] �׷�ID        
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��      
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ    
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ    
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ    
} CSPAT00700OutBlock1, *LPCSPAT00700OutBlock1;

typedef struct _CSPAT00700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��    
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ      
    char    PrntOrdNo           [  10];    // [long  ,   10] ���ֹ���ȣ    
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�      
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�  
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�  
    char    ShtnIsuNo           [   9];    // [string,    9] ���������ȣ  
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] ���α׷�ȣ����
    char    StslOrdprcTpCode    [   1];    // [string,    1] ���ŵ�ȣ������
    char    StslAbleYn          [   1];    // [string,    1] ���ŵ����ɿ���
    char    MgntrnCode          [   3];    // [string,    3] �ſ�ŷ��ڵ�  
    char    LoanDt              [   8];    // [string,    8] ������        
    char    CvrgOrdTp           [   1];    // [string,    1] �ݴ�Ÿ��ֹ���
    char    LpYn                [   1];    // [string,    1] �����������ڿ�
    char    MgempNo             [   9];    // [string,    9] ���������ȣ  
    char    OrdAmt              [  16];    // [long  ,   16] �ֹ��ݾ�      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���      
    char    SpareOrdNo          [  10];    // [long  ,   10] �����ֹ���ȣ  
    char    CvrgSeqno           [  10];    // [long  ,   10] �ݴ�Ÿ��Ϸù�
    char    RsvOrdNo            [  10];    // [long  ,   10] �����ֹ���ȣ  
    char    MnyOrdAmt           [  16];    // [long  ,   16] �����ֹ��ݾ�  
    char    SubstOrdAmt         [  16];    // [long  ,   16] ����ֹ��ݾ�  
    char    RuseOrdAmt          [  16];    // [long  ,   16] �����ֹ��ݾ�
    char    AcntNm              [  40];    // [string,   40] ���¸�        
    char    IsuNm               [  40];    // [string,   40] �����        
} CSPAT00700OutBlock2, *LPCSPAT00700OutBlock2;

/* �ֽ�����ֹ� */
typedef struct _CSPAT00800InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ        
    char    IsuNo               [  12];    // [string,   12] �����ȣ            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�            
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��            
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
} CSPAT00800InBlock1, *LPCSPAT00800InBlock1;

typedef struct _CSPAT00800OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ        
    char    IsuNo               [  12];    // [string,   12] �����ȣ            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    StrtgCode           [   6];    // [string,    6] �����ڵ�            
    char    OrdSeqNo            [  10];    // [long  ,   10] �ֹ�ȸ��            
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
} CSPAT00800OutBlock1, *LPCSPAT00800OutBlock1;

typedef struct _CSPAT00800OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ            
    char    PrntOrdNo           [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�            
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    ShtnIsuNo           [   9];    // [string,    9] ���������ȣ        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] ���α׷�ȣ�������ڵ�
    char    StslOrdprcTpCode    [   1];    // [string,    1] ���ŵ�ȣ������      
    char    StslAbleYn          [   1];    // [string,    1] ���ŵ����ɿ���      
    char    MgntrnCode          [   3];    // [string,    3] �ſ�ŷ��ڵ�        
    char    LoanDt              [   8];    // [string,    8] ������              
    char    CvrgOrdTp           [   1];    // [string,    1] �ݴ�Ÿ��ֹ�����    
    char    LpYn                [   1];    // [string,    1] �����������ڿ���    
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    SpareOrdNo          [  10];    // [long  ,   10] �����ֹ���ȣ        
    char    CvrgSeqno           [  10];    // [long  ,   10] �ݴ�Ÿ��Ϸù�ȣ    
    char    RsvOrdNo            [  10];    // [long  ,   10] �����ֹ���ȣ        
    char    AcntNm              [  40];    // [string,   40] ���¸�              
    char    IsuNm               [  40];    // [string,   40] �����              
} CSPAT00800OutBlock2, *LPCSPAT00800OutBlock2;

/* ���������ֹ�ü�᳻����ȸ */
typedef struct _CSPAQ03700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ        
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ    
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���        
    char    IsuNo               [  12];    // [string,   12] �����ȣ        
    char    ExecYn              [   1];    // [string,    1] ü�Ῡ��        
    char    OrdDt               [   8];    // [string,    8] �ֹ���          
    char    SrtOrdNo2           [  10];    // [long  ,   10] �����ֹ���ȣ2   
    char    BkseqTpCode         [   1];    // [string,    1] ��������        
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�    
} CSPAQ03700InBlock1, *LPCSPAQ03700InBlock1;

typedef struct _CSPAQ03700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ        
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ    
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���        
    char    IsuNo               [  12];    // [string,   12] �����ȣ        
    char    ExecYn              [   1];    // [string,    1] ü�Ῡ��        
    char    OrdDt               [   8];    // [string,    8] �ֹ���          
    char    SrtOrdNo2           [  10];    // [long  ,   10] �����ֹ���ȣ2   
    char    BkseqTpCode         [   1];    // [string,    1] ��������        
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�    
} CSPAQ03700OutBlock1, *LPCSPAQ03700OutBlock1;

typedef struct _CSPAQ03700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    SellExecAmt         [  16];    // [long  ,   16] �ŵ�ü��ݾ�    
    char    BuyExecAmt          [  16];    // [long  ,   16] �ż�ü��ݾ�    
    char    SellExecQty         [  16];    // [long  ,   16] �ŵ�ü�����    
    char    BuyExecQty          [  16];    // [long  ,   16] �ż�ü�����    
    char    SellOrdQty          [  16];    // [long  ,   16] �ŵ��ֹ�����    
    char    BuyOrdQty           [  16];    // [long  ,   16] �ż��ֹ�����    
} CSPAQ03700OutBlock2, *LPCSPAQ03700OutBlock2;

typedef struct _CSPAQ03700OutBlock3
{
    char    OrdDt               [   8];    // [string,    8] �ֹ���          
    char    MgmtBrnNo           [   3];    // [string,    3] ����������ȣ    
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ        
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ      
    char    IsuNo               [  12];    // [string,   12] �����ȣ        
    char    IsuNm               [  40];    // [string,   40] �����          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���        
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���        
    char    OrdPtnCode          [   2];    // [string,    2] �ֹ������ڵ�    
    char    OrdPtnNm            [  40];    // [string,   40] �ֹ�������      
    char    OrdTrxPtnCode       [   9];    // [long  ,    9] �ֹ�ó�������ڵ�
    char    OrdTrxPtnNm         [  50];    // [string,   50] �ֹ�ó��������  
    char    MrcTpCode           [   1];    // [string,    1] ������ұ���    
    char    MrcTpNm             [  10];    // [string,   10] ������ұ��и�  
    char    MrcQty              [  16];    // [long  ,   16] ������Ҽ���    
    char    MrcAbleQty          [  16];    // [long  ,   16] ������Ұ��ɼ���
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����        
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����        
    char    ExecQty             [  16];    // [long  ,   16] ü�����        
    char    ExecPrc             [  15];    // [double, 15.2] ü�ᰡ          
    char    ExecTrxTime         [   9];    // [string,    9] ü��ó���ð�    
    char    LastExecTime        [   9];    // [string,    9] ����ü��ð�    
    char    OrdprcPtnCode       [   2];    // [string,    2] ȣ�������ڵ�    
    char    OrdprcPtnNm         [  40];    // [string,   40] ȣ��������      
    char    OrdCndiTpCode       [   1];    // [string,    1] �ֹ����Ǳ���    
    char    AllExecQty          [  16];    // [long  ,   16] ��üü�����    
    char    RegCommdaCode       [   2];    // [string,    2] ��Ÿ�ü�ڵ�    
    char    CommdaNm            [  40];    // [string,   40] ��Ÿ�ü��      
    char    MbrNo               [   3];    // [string,    3] ȸ����ȣ        
    char    RsvOrdYn            [   1];    // [string,    1] �����ֹ�����    
    char    LoanDt              [   8];    // [string,    8] ������          
    char    OrdTime             [   9];    // [string,    9] �ֹ��ð�        
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ    
    char    OdrrId              [  16];    // [string,   16] �ֹ���ID        
} CSPAQ03700OutBlock3, *LPCSPAQ03700OutBlock3;

/* �������¿����� �ֹ����ɱݾ� ������ȸ */
typedef struct _CSPAQ02200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                  
    char    MgmtBrnNo           [   3];    // [string,    3] ����������ȣ                
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                    
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                    
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������                
} CSPAQ02200InBlock1, *LPCSPAQ02200InBlock1;

typedef struct _CSPAQ02200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                  
    char    MgmtBrnNo           [   3];    // [string,    3] ����������ȣ                
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                    
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                    
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������                
} CSPAQ02200OutBlock1, *LPCSPAQ02200OutBlock1;

typedef struct _CSPAQ02200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��             
    char    BrnNm               [  40];    // [string,   40] ������                
    char    AcntNm              [  40];    // [string,   40] ���¸�               
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�    
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�       
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] �ŷ��ұݾ�        
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] �ڽ��ڱݾ�            
    char    BalEvalAmt          [  16];    // [long  ,   16] �ܰ��򰡱ݾ�           
    char    RcvblAmt            [  16];    // [long  ,   16] �̼��ݾ�                
    char    DpsastTotamt        [  16];    // [long  ,   16] ��Ź�ڻ��Ѿ�   
    char    PnlRat              [  18];    // [double, 18.6] ������         
    char    InvstOrgAmt         [  20];    // [long  ,   20] ���ڿ���        
    char    InvstPlAmt          [  16];    // [long  ,   16] ���ڼ��ͱݾ�     
    char    CrdtPldgOrdAmt      [  16];    // [long  ,   16] �ſ�㺸�ֹ��ݾ�  
    char    Dps                 [  16];    // [long  ,   16] ������         
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�        
    char    D1Dps               [  16];    // [long  ,   16] D1������         
    char    D2Dps               [  16];    // [long  ,   16] D2������          
    char    MnyrclAmt           [  16];    // [long  ,   16] ���ݹ̼��ݾ�       
    char    MgnMny              [  16];    // [long  ,   16] ���ű�����          
    char    MgnSubst            [  16];    // [long  ,   16] ���űݴ��           
    char    ChckAmt             [  16];    // [long  ,   16] ��ǥ�ݾ�              
    char    SubstOrdAbleAmt     [  16];    // [long  ,   16] ����ֹ����ɱݾ�       
    char    MgnRat100pctOrdAbleAmt[  16];  // [long  ,   16] ���ű�100�ۼ�Ʈ�ֹ����ɱݾ�
    char    MgnRat35ordAbleAmt  [  16];    // [long  ,   16] ���űݷ�35%�ֹ����ɱݾ� 
    char    MgnRat50ordAbleAmt  [  16];    // [long  ,   16] ���űݷ�50%�ֹ����ɱݾ� 
    char    PrdaySellAdjstAmt   [  16];    // [long  ,   16] ���ϸŵ�����ݾ� 
    char    PrdayBuyAdjstAmt    [  16];    // [long  ,   16] ���ϸż�����ݾ� 
    char    CrdaySellAdjstAmt   [  16];    // [long  ,   16] ���ϸŵ�����ݾ� 
    char    CrdayBuyAdjstAmt    [  16];    // [long  ,   16] ���ϸż�����ݾ� 
    char    D1ovdRepayRqrdAmt   [  16];    // [long  ,   16] D1��ü�����ҿ�ݾ�
    char    D2ovdRepayRqrdAmt   [  16];    // [long  ,   16] D2��ü�����ҿ�ݾ� 
    char    D1PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D1�������Ⱑ�ɱݾ�  
    char    D2PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D2�������Ⱑ�ɱݾ�   
    char    DpspdgLoanAmt       [  16];    // [long  ,   16] ��Ź�㺸����ݾ�      
    char    Imreq               [  16];    // [long  ,   16] �ſ뼳��������    
    char    MloanAmt            [  16];    // [long  ,   16] ���ڱݾ�           
    char    ChgAfPldgRat        [   9];    // [double,  9.3] �����Ĵ㺸����  
    char    OrgPldgAmt          [  16];    // [long  ,   16] ���㺸�ݾ�    
    char    SubPldgAmt          [  16];    // [long  ,   16] �δ㺸�ݾ�     
    char    RqrdPldgAmt         [  16];    // [long  ,   16] �ҿ�㺸�ݾ�    
    char    OrgPdlckAmt         [  16];    // [long  ,   16] ���㺸�����ݾ�   
    char    PdlckAmt            [  16];    // [long  ,   16] �㺸�����ݾ�      
    char    AddPldgMny          [  16];    // [long  ,   16] �߰��㺸����       
    char    D1OrdAbleAmt        [  16];    // [long  ,   16] D1�ֹ����ɱݾ�      
    char    CrdtIntdltAmt       [  16];    // [long  ,   16] �ſ����ڹ̳��ݾ�     
    char    EtclndAmt           [  16];    // [long  ,   16] ��Ÿ�뿩�ݾ�         
    char    NtdayPrsmptCvrgAmt  [  16];    // [long  ,   16] ���������ݴ�Ÿűݾ� 
    char    OrgPldgSumAmt       [  16];    // [long  ,   16] ���㺸�հ�ݾ�    
    char    CrdtOrdAbleAmt      [  16];    // [long  ,   16] �ſ��ֹ����ɱݾ�  
    char    SubPldgSumAmt       [  16];    // [long  ,   16] �δ㺸�հ�ݾ�    
    char    CrdtPldgAmtMny      [  16];    // [long  ,   16] �ſ�㺸������    
    char    CrdtPldgSubstAmt    [  16];    // [long  ,   16] �ſ�㺸���ݾ�    
    char    AddCrdtPldgMny      [  16];    // [long  ,   16] �߰��ſ�㺸����     
    char    CrdtPldgRuseAmt     [  16];    // [long  ,   16] �ſ�㺸����ݾ�    
    char    AddCrdtPldgSubst    [  16];    // [long  ,   16] �߰��ſ�㺸���       
    char    CslLoanAmtdt1       [  16];    // [long  ,   16] �ŵ���ݴ㺸����ݾ�    
    char    DpslRestrcAmt       [  16];    // [long  ,   16] ó�����ѱݾ�             
} CSPAQ02200OutBlock2, *LPCSPAQ02200OutBlock2;

/* �ܰ�, BEP�ܰ���ȸ */
typedef struct _CSPAQ02300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��         
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ         
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ        
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������    
    char    CmsnAppTpCode       [   1];    // [string,    1] ���������뱸��  
    char    D2balBaseQryTp      [   1];    // [string,    1] D2�ܰ������ȸ����     
    char    UprcTpCode          [   1];    // [string,    1] �ܰ�����              
} CSPAQ02300InBlock1, *LPCSPAQ02300InBlock1;

typedef struct _CSPAQ02300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��               
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                 
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                
    char    BalCreTp            [   1];    // [string,    1] �ܰ��������           
    char    CmsnAppTpCode       [   1];    // [string,    1] ���������뱸��        
    char    D2balBaseQryTp      [   1];    // [string,    1] D2�ܰ������ȸ����   
    char    UprcTpCode          [   1];    // [string,    1] �ܰ�����            
} CSPAQ02300OutBlock1, *LPCSPAQ02300OutBlock1;

typedef struct _CSPAQ02300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��                 
    char    BrnNm               [  40];    // [string,   40] ������                    
    char    AcntNm              [  40];    // [string,   40] ���¸�                   
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�        
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] ��ݰ��ɱݾ�           
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] �ŷ��ұݾ�            
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] �ڽ��ڱݾ�           
    char    HtsOrdAbleAmt       [  16];    // [long  ,   16] HTS�ֹ����ɱݾ�     
    char    MgnRat100pctOrdAbleAmt[  16];  // [long  ,   16] ���űݷ�100�ֹ����ɱݾ�
    char    BalEvalAmt          [  16];    // [long  ,   16] �ܰ��򰡱ݾ�   
    char    PchsAmt             [  16];    // [long  ,   16] ���Աݾ�      
    char    RcvblAmt            [  16];    // [long  ,   16] �̼��ݾ�     
    char    PnlRat              [  18];    // [double, 18.6] ������      
    char    InvstOrgAmt         [  20];    // [long  ,   20] ���ڿ���  
    char    InvstPlAmt          [  16];    // [long  ,   16] ���ڼ��ͱݾ�        
    char    CrdtPldgOrdAmt      [  16];    // [long  ,   16] �ſ�㺸�ֹ��ݾ�   
    char    Dps                 [  16];    // [long  ,   16] ������            
    char    D1Dps               [  16];    // [long  ,   16] D1������         
    char    D2Dps               [  16];    // [long  ,   16] D2������        
    char    OrdDt               [   8];    // [string,    8] �ֹ���         
    char    MnyMgn              [  16];    // [long  ,   16] �������űݾ�  
    char    SubstMgn            [  16];    // [long  ,   16] ������űݾ� 
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�    
    char    PrdayBuyExecAmt     [  16];    // [long  ,   16] ���ϸż�ü��ݾ�        
    char    PrdaySellExecAmt    [  16];    // [long  ,   16] ���ϸŵ�ü��ݾ�       
    char    CrdayBuyExecAmt     [  16];    // [long  ,   16] ���ϸż�ü��ݾ�      
    char    CrdaySellExecAmt    [  16];    // [long  ,   16] ���ϸŵ�ü��ݾ�     
    char    EvalPnlSum          [  15];    // [long  ,   15] �򰡼����հ�        
    char    DpsastTotamt        [  16];    // [long  ,   16] ��Ź�ڻ��Ѿ�       
    char    Evrprc              [  19];    // [long  ,   19] �����            
    char    RuseAmt             [  16];    // [long  ,   16] ����ݾ�       
    char    EtclndAmt           [  16];    // [long  ,   16] ��Ÿ�뿩�ݾ�    
    char    PrcAdjstAmt         [  16];    // [long  ,   16] ������ݾ�     
    char    D1CmsnAmt           [  16];    // [long  ,   16] D1������      
    char    D2CmsnAmt           [  16];    // [long  ,   16] D2������     
    char    D1EvrTax            [  16];    // [long  ,   16] D1������    
    char    D2EvrTax            [  16];    // [long  ,   16] D2������   
    char    D1SettPrergAmt      [  16];    // [long  ,   16] D1���������ݾ�            
    char    D2SettPrergAmt      [  16];    // [long  ,   16] D2���������ݾ�            
    char    PrdayKseMnyMgn      [  16];    // [long  ,   16] ����KSE�������ű�         
    char    PrdayKseSubstMgn    [  16];    // [long  ,   16] ����KSE������ű�         
    char    PrdayKseCrdtMnyMgn  [  16];    // [long  ,   16] ����KSE�ſ��������ű�     
    char    PrdayKseCrdtSubstMgn[  16];    // [long  ,   16] ����KSE�ſ������ű�     
    char    CrdayKseMnyMgn      [  16];    // [long  ,   16] ����KSE�������ű�         
    char    CrdayKseSubstMgn    [  16];    // [long  ,   16] ����KSE������ű�         
    char    CrdayKseCrdtMnyMgn  [  16];    // [long  ,   16] ����KSE�ſ��������ű�     
    char    CrdayKseCrdtSubstMgn[  16];    // [long  ,   16] ����KSE�ſ������ű�     
    char    PrdayKdqMnyMgn      [  16];    // [long  ,   16] �����ڽ����������ű�      
    char    PrdayKdqSubstMgn    [  16];    // [long  ,   16] �����ڽ��ڴ�����ű�      
    char    PrdayKdqCrdtMnyMgn  [  16];    // [long  ,   16] �����ڽ��ڽſ��������ű�  
    char    PrdayKdqCrdtSubstMgn[  16];    // [long  ,   16] �����ڽ��ڽſ������ű�  
    char    CrdayKdqMnyMgn      [  16];    // [long  ,   16] �����ڽ����������ű�      
    char    CrdayKdqSubstMgn    [  16];    // [long  ,   16] �����ڽ��ڴ�����ű�      
    char    CrdayKdqCrdtMnyMgn  [  16];    // [long  ,   16] �����ڽ��ڽſ��������ű�  
    char    CrdayKdqCrdtSubstMgn[  16];    // [long  ,   16] �����ڽ��ڽſ������ű�  
    char    PrdayFrbrdMnyMgn    [  16];    // [long  ,   16] �������������������ű�    
    char    PrdayFrbrdSubstMgn  [  16];    // [long  ,   16] �����������������ű�    
    char    CrdayFrbrdMnyMgn    [  16];    // [long  ,   16] �������������������ű�    
    char    CrdayFrbrdSubstMgn  [  16];    // [long  ,   16] �����������������ű�    
    char    PrdayCrbmkMnyMgn    [  16];    // [long  ,   16] ��������������ű�        
    char    PrdayCrbmkSubstMgn  [  16];    // [long  ,   16] ������ܴ�����ű�        
    char    CrdayCrbmkMnyMgn    [  16];    // [long  ,   16] ��������������ű�        
    char    CrdayCrbmkSubstMgn  [  16];    // [long  ,   16] ������ܴ�����ű�        
    char    DpspdgQty           [  16];    // [long  ,   16] ��Ź�㺸����              
    char    BuyAdjstAmtD2       [  16];    // [long  ,   16] �ż������(D+2)           
    char    SellAdjstAmtD2      [  16];    // [long  ,   16] �ŵ������(D+2)           
    char    RepayRqrdAmtD1      [  16];    // [long  ,   16] �����ҿ��(D+1)         
    char    RepayRqrdAmtD2      [  16];    // [long  ,   16] �����ҿ��(D+2)          
    char    LoanAmt             [  16];    // [long  ,   16] ����ݾ�               
} CSPAQ02300OutBlock2, *LPCSPAQ02300OutBlock2;

typedef struct _CSPAQ02300OutBlock3
{
    char    IsuNo               [  12];    // [string,   12] �����ȣ              
    char    IsuNm               [  40];    // [string,   40] �����               
    char    SecBalPtnCode       [   2];    // [string,    2] ���������ܰ������ڵ�
    char    SecBalPtnNm         [  40];    // [string,   40] ���������ܰ������� 
    char    BalQty              [  16];    // [long  ,   16] �ܰ����           
    char    BnsBaseBalQty       [  16];    // [long  ,   16] �Ÿű����ܰ����   
    char    CrdayBuyExecQty     [  16];    // [long  ,   16] ���ϸż�ü�����   
    char    CrdaySellExecQty    [  16];    // [long  ,   16] ���ϸŵ�ü�����   
    char    SellPrc             [  21];    // [double, 21.4] �ŵ���             
    char    BuyPrc              [  21];    // [double, 21.4] �ż���             
    char    SellPnlAmt          [  16];    // [long  ,   16] �ŵ����ͱݾ�       
    char    PnlRat              [  18];    // [double, 18.6] ������             
    char    NowPrc              [  15];    // [double, 15.2] ���簡             
    char    CrdtAmt             [  16];    // [long  ,   16] �ſ�ݾ�           
    char    DueDt               [   8];    // [string,    8] ������            
    char    PrdaySellExecPrc    [  13];    // [double, 13.2] ���ϸŵ�ü�ᰡ   
    char    PrdaySellQty        [  16];    // [long  ,   16] ���ϸŵ�����    
    char    PrdayBuyExecPrc     [  13];    // [double, 13.2] ���ϸż�ü�ᰡ 
    char    PrdayBuyQty         [  16];    // [long  ,   16] ���ϸż�����  
    char    LoanDt              [   8];    // [string,    8] ������       
    char    AvrUprc             [  13];    // [double, 13.2] ��մܰ�              
    char    SellAbleQty         [  16];    // [long  ,   16] �ŵ����ɼ���         
    char    SellOrdQty          [  16];    // [long  ,   16] �ŵ��ֹ�����        
    char    CrdayBuyExecAmt     [  16];    // [long  ,   16] ���ϸż�ü��ݾ�   
    char    CrdaySellExecAmt    [  16];    // [long  ,   16] ���ϸŵ�ü��ݾ�  
    char    PrdayBuyExecAmt     [  16];    // [long  ,   16] ���ϸż�ü��ݾ�  
    char    PrdaySellExecAmt    [  16];    // [long  ,   16] ���ϸŵ�ü��ݾ�  
    char    BalEvalAmt          [  16];    // [long  ,   16] �ܰ��򰡱ݾ�      
    char    EvalPnl             [  16];    // [long  ,   16] �򰡼���          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�  
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�      
    char    SellUnercQty        [  16];    // [long  ,   16] �ŵ���ü�����    
    char    SellUnsttQty        [  16];    // [long  ,   16] �ŵ��̰�������    
    char    BuyUnercQty         [  16];    // [long  ,   16] �ż���ü�����    
    char    BuyUnsttQty         [  16];    // [long  ,   16] �ż��̰�������    
    char    UnsttQty            [  16];    // [long  ,   16] �̰�������        
    char    UnercQty            [  16];    // [long  ,   16] ��ü�����        
    char    PrdayCprc           [  15];    // [double, 15.2] ��������          
    char    PchsAmt             [  16];    // [long  ,   16] ���Աݾ�          
    char    RegMktCode          [   2];    // [string,    2] ��Ͻ����ڵ�      
    char    LoanDtlClssCode     [   2];    // [string,    2] ����󼼺з��ڵ�  
    char    DpspdgLoanQty       [  16];    // [long  ,   16] ��Ź�㺸�������  
} CSPAQ02300OutBlock3, *LPCSPAQ02300OutBlock3;

