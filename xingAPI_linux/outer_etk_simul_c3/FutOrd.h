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

typedef struct _CFOAT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  16];    // [long  ,   16] �׸��ȣ            
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CFOAT00100InBlock1, *LPCFOAT00100InBlock1;
#define NAME_CFOAT00100InBlock1     "CFOAT00100InBlock1"

typedef struct _CFOAT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  16];    // [long  ,   16] �׸��ȣ            
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CFOAT00100OutBlock1, *LPCFOAT00100OutBlock1;
#define NAME_CFOAT00100OutBlock1     "CFOAT00100OutBlock1"

typedef struct _CFOAT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ            
    char    BrnNm               [  40];    // [string,   40] ������              
    char    AcntNm              [  40];    // [string,   40] ���¸�              
    char    IsuNm               [  50];    // [string,   50] �����              
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�    
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����ű�          
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����ű�      
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���        
} CFOAT00100OutBlock2, *LPCFOAT00100OutBlock2;
#define NAME_CFOAT00100OutBlock2     "CFOAT00100OutBlock2"

typedef struct _CFOAT00200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�         
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ             
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ             
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ     
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ� 
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ� 
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����             
    char    MdfyQty             [  16];    // [long  ,   16] ��������             
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�     
    char    GrpId               [  20];    // [string,   20] �׷�ID               
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ         
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ       
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ           
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ           
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ           
    char    MgempNo             [   9];    // [string,    9] ���������ȣ         
    char    FundId              [  12];    // [string,   12] �ݵ�ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ       
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ         
} CFOAT00200InBlock1, *LPCFOAT00200InBlock1;
#define NAME_CFOAT00200InBlock1     "CFOAT00200InBlock1"

  
typedef struct _CFOAT00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�         
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ             
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ             
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ     
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ� 
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ� 
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����             
    char    MdfyQty             [  16];    // [long  ,   16] ��������             
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�     
    char    GrpId               [  20];    // [string,   20] �׷�ID               
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ         
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ       
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ           
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ           
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ           
    char    MgempNo             [   9];    // [string,    9] ���������ȣ         
    char    FundId              [  12];    // [string,   12] �ݵ�ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ       
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ         
} CFOAT00200OutBlock1, *LPCFOAT00200OutBlock1;
#define NAME_CFOAT00200OutBlock1     "CFOAT00200OutBlock1"


typedef struct _CFOAT00200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ             
    char    BrnNm               [  40];    // [string,   40] ������               
    char    AcntNm              [  40];    // [string,   40] ���¸�               
    char    IsuNm               [  50];    // [string,   50] �����               
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�         
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�     
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�         
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�     
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���         
} CFOAT00200OutBlock2, *LPCFOAT00200OutBlock2;
#define NAME_CFOAT00200OutBlock2     "CFOAT00200OutBlock2"



typedef struct _CFOAT00300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ      
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CFOAT00300InBlock1, *LPCFOAT00300InBlock1;
#define NAME_CFOAT00300InBlock1     "CFOAT00300InBlock1"


typedef struct _CFOAT00300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ      
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CFOAT00300OutBlock1, *LPCFOAT00300OutBlock1;
#define NAME_CFOAT00300OutBlock1     "CFOAT00300OutBlock1"


typedef struct _CFOAT00300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ            
    char    BrnNm               [  40];    // [string,   40] ������              
    char    AcntNm              [  40];    // [string,   40] ���¸�              
    char    IsuNm               [  50];    // [string,   50] �����              
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�    
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�        
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�    
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���        
} CFOAT00300OutBlock2, *LPCFOAT00300OutBlock2;
#define NAME_CFOAT00300OutBlock2     "CFOAT00300OutBlock2"

typedef struct _t9700InBlock{
    char accno[11];
    char jang_gb[1]; //���屸�� 1 : �Ļ� 2 : �ֽ�
    char seqno_start[10];
    char seqno_end[10];
    char qry_gb[1]; //��ȸ���� 1 : ������ȸ 2 : ��ü��ȸ
} t9700InBlock;

typedef struct _t9700OutBlock{
    char seqno[10];
} t9700OutBlock;

typedef struct {
    char   svc_id            [4   ];  /* ID  HO01              X(04)   *
                                       * ID  HO04              X(04)   */
    char   ordr_dt           [8   ];  /* �ֹ�����              X(08)   */
    char   brn_cd            [3   ];  /* ������ȣ              X(03)   */
    char   ordr_no           [10  ];  /* �ֹ���ȣ              X(10)   */
    char   orgn_ordr_no      [10  ];  /* ���ֹ���ȣ            X(10)   */
    char   mthr_ordr_no      [10  ];  /* ���ֹ���ȣ            X(10)   */
    char   ac_no             [11  ];  /* ���¹�ȣ              X(11)   */
    char   is_cd             [30  ];  /* �����ڵ�              X(30)   */
    char   s_b_ccd           [1   ];  /* �ŵ��ż�����          X(01)   */
    char   ordr_ccd          [1   ];  /* �����������          X(01)   */
    char   ordr_typ_cd       [1   ];  /* �ֹ������ڵ�          X(01)   */
    char   ordr_typ_prd_ccd  [2   ];  /* �ֹ������Ⱓ�����ڵ�  X(02)   */
    char   ordr_aplc_strt_dt [8   ];  /* �ֹ������������      X(08)   */
    char   ordr_aplc_end_dt  [8   ];  /* �ֹ�������������      X(08)   */
    char   ordr_prc          [15  ];  /* �ֹ�����              9(15.8) */
    char   cndt_ordr_prc     [15  ];  /* �ֹ����ǰ���          9(15.8) */
    char   ordr_q            [12  ];  /* �ֹ�����              9(12.0) */
    char   ordr_tm           [9   ];  /* �ֹ��ð�              X(09)   */
    char   userid            [8   ];  /* �ֹ���ID              X(08)   */
}hoga_in;

#define SZ_HO01 sizeof(hoga_in)
#define SZ_HO04 sizeof(hoga_in)

typedef struct {
    char    svc_id           [4   ];  /* ID HO02:Ȯ��, HO03:�ź� X(04) */
    char    ordr_dt          [8   ];  /* �ֹ�����              X(08)   */
    char    brn_cd           [3   ];  /* ������ȣ              X(03)   */
    char    ordr_no          [10  ];  /* �ֹ���ȣ              X(10)   */
    char    orgn_ordr_no     [10  ];  /* ���ֹ���ȣ            X(10)   */
    char    mthr_ordr_no     [10  ];  /* ���ֹ���ȣ            X(10)   */
    char    ac_no            [11  ];  /* ���¹�ȣ              X(11)   */
    char    is_cd            [30  ];  /* �����ڵ�              X(30)   */
    char    s_b_ccd          [1   ];  /* �ŵ��ż�����          X(01)   */
    char    ordr_ccd         [1   ];  /* �����������          X(01)   */
    char    ordr_typ_cd      [1   ];  /* �ֹ������ڵ�          X(01)   */
    char    ordr_typ_prd_ccd [2   ];  /* �ֹ������Ⱓ�����ڵ�  X(02)   */
    char    ordr_aplc_strt_dt[8   ];  /* �ֹ������������      X(08)   */
    char    ordr_aplc_end_dt [8   ];  /* �ֹ�������������      X(08)   */
    char    ordr_prc         [15  ];  /* �ֹ�����              9(15.8) */
    char    cndt_ordr_prc    [15  ];  /* �ֹ����ǰ���          9(15.8) */
    char    ordr_q           [12  ];  /* �ֹ�����              9(12.0) */
    char    ordr_tm          [9   ];  /* �ֹ��ð�              X(09)   */
    char    cnfr_q           [12  ];  /* ȣ��Ȯ�μ���          9(12.0) */
    char    rfsl_cd          [4   ];  /* ȣ���źλ����ڵ�      X(04)   */
    char    text             [80  ];  /* ȣ���źλ����ڵ��    X(300)  */
    char    userid           [8   ];  /* �ֹ���ID              X(08)   */
}hoga_out;

#define SZ_HO02 sizeof(hoga_out)
#define SZ_HO03 sizeof(hoga_out)

typedef struct {
    char    svc_id           [4   ];   /* ID CH01              X(04)   */
    char    ordr_dt          [8   ];   /* �ֹ�����             X(08)   */
    char    brn_cd           [3   ];   /* ������ȣ             X(03)   */
    char    ordr_no          [10  ];   /* �ֹ���ȣ             X(10)   */
    char    orgn_ordr_no     [10  ];   /* ���ֹ���ȣ           X(10)   */
    char    mthr_ordr_no     [10  ];   /* ���ֹ���ȣ           X(10)   */
    char    ac_no            [11  ];   /* ���¹�ȣ             X(11)   */
    char    is_cd            [30  ];   /* �����ڵ�             X(30)   */
    char    s_b_ccd          [1   ];   /* �ŵ��ż�����         X(01)   */
    char    ordr_ccd         [1   ];   /* �����������         X(01)   */
    char    ccls_q           [15  ];   /* ü�����             9(15.0) */
    char    ccls_prc         [15  ];   /* ü�ᰡ��             9(15.8) */
    char    ccls_no          [10  ];   /* ü���ȣ             9(10)   */
    char    ccls_tm          [9   ];   /* ü��ð�             X(09)   */
    char    avg_byng_uprc    [12  ];   /* ������մܰ�         9(12.6) */
    char    byug_amt         [25  ];   /* ���Աݾ�             9(25.8) */
    char    clr_pl_amt       [19  ];   /* û�����             9(19.2) */
    char    ent_fee          [19  ];   /* ��Ź������           9(19.2) */
    char    fcm_fee          [19  ];   /* FCM������            9(19.2) */
    char    userid           [8   ];   /* �ֹ���ID             X(08)   */
    char    now_prc          [15  ];   /* ���簡��             9(15.8) */
    char    crncy_cd         [3   ];   /* ��ȭ�ڵ�             X(03)   */
    char    mtrt_dt          [8   ];   /* ��������             X(08)   */
}hoga_che;

#define SZ_CH01 sizeof(hoga_che)

/* �����ɼ� ���ű���ȸ */
typedef struct _CFOBQ10500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                
} CFOBQ10500InBlock1, *LPCFOBQ10500InBlock1;
#define NAME_CFOBQ10500InBlock1     "CFOBQ10500InBlock1"

typedef struct _CFOBQ10500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                
} CFOBQ10500OutBlock1, *LPCFOBQ10500OutBlock1;
#define NAME_CFOBQ10500OutBlock1     "CFOBQ10500OutBlock1"

typedef struct _CFOBQ10500OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNm              [  40];    // [string,   40] ���¸�                  
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�              
    char    Dps                 [  16];    // [long  ,   16] ������                  
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�                
    char    FilupDpsamtTotamt   [  16];    // [long  ,   16] ��翹Ź���Ѿ�          
    char    FilupDps            [  16];    // [long  ,   16] ��翹����              
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�            
    char    WthdwAbleAmt        [  16];    // [long  ,   16] ���Ⱑ�ɱݾ�            
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�          
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] ���Ⱑ�ɴ��ݾ�        
    char    Mgn                 [  16];    // [long  ,   16] ���űݾ�                
    char    MnyMgn              [  16];    // [long  ,   16] �������űݾ�            
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�            
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�        
    char    AddMgn              [  16];    // [long  ,   16] �߰����űݾ�            
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�        
    char    AmtPrdayChckInAmt   [  16];    // [long  ,   16] �����ϼ�ǥ�Աݾ�        
    char    FnoPrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼ����ϴ��ŵ��ݾ�
    char    FnoCrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼǱ��ϴ��ŵ��ݾ�
    char    FnoPrdayFdamt       [  16];    // [long  ,   16] �����ɼ����ϰ��Աݾ�    
    char    FnoCrdayFdamt       [  16];    // [long  ,   16] �����ɼǱ��ϰ��Աݾ�    
    char    FcurrSubstAmt       [  16];    // [long  ,   16] ��ȭ���ݾ�            
    char    FnoAcntAfmgnNm      [  20];    // [string,   20] �����ɼǰ��»������űݸ�
} CFOBQ10500OutBlock2, *LPCFOBQ10500OutBlock2;
#define NAME_CFOBQ10500OutBlock2     "CFOBQ10500OutBlock2"

typedef struct _CFOBQ10500OutBlock3
{
    char    PdGrpCodeNm         [  20];    // [string,   20] ��ǰ���ڵ��            
    char    NetRiskMgn          [  16];    // [long  ,   16] ���������űݾ�          
    char    PrcMgn              [  16];    // [long  ,   16] �������űݾ�            
    char    SprdMgn             [  16];    // [long  ,   16] �����������űݾ�        
    char    PrcFlctMgn          [  16];    // [long  ,   16] ���ݺ������űݾ�        
    char    MinMgn              [  16];    // [long  ,   16] �ּ����űݾ�            
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�            
    char    OptNetBuyAmt        [  16];    // [long  ,   16] �ɼǼ��ż��ݾ�          
    char    CsgnMgn             [  16];    // [long  ,   16] ��Ź���űݾ�            
    char    MaintMgn            [  16];    // [long  ,   16] �������űݾ�            
    char    FutsBuyExecAmt      [  16];    // [long  ,   16] �����ż�ü��ݾ�        
    char    FutsSellExecAmt     [  16];    // [long  ,   16] �����ŵ�ü��ݾ�        
    char    OptBuyExecAmt       [  16];    // [long  ,   16] �ɼǸż�ü��ݾ�        
    char    OptSellExecAmt      [  16];    // [long  ,   16] �ɼǸŵ�ü��ݾ�        
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�            
    char    TotRiskCsgnMgn      [  16];    // [long  ,   16] ��������Ź���ű�        
    char    UndCsgnMgn          [  16];    // [long  ,   16] �μ�����Ź���ű�        
    char    MgnRdctAmt          [  16];    // [long  ,   16] ���űݰ���ݾ�          
} CFOBQ10500OutBlock3, *LPCFOBQ10500OutBlock3;

/* �����ɼ� CME ��Ź�����ű���ȸ */
typedef struct _CCEBQ10500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                
} CCEBQ10500InBlock1, *LPCCEBQ10500InBlock1;
#define NAME_CCEBQ10500InBlock1     "CCEBQ10500InBlock1"

typedef struct _CCEBQ10500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ                
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ                
} CCEBQ10500OutBlock1, *LPCCEBQ10500OutBlock1;
#define NAME_CCEBQ10500OutBlock1     "CCEBQ10500OutBlock1"

typedef struct _CCEBQ10500OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��              
    char    AcntNm              [  40];    // [string,   40] ���¸�                  
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�              
    char    Dps                 [  16];    // [long  ,   16] ������                  
    char    SubstAmt            [  16];    // [long  ,   16] ���ݾ�                
    char    FilupDpsamtTotamt   [  16];    // [long  ,   16] ��翹Ź���Ѿ�          
    char    FilupDps            [  16];    // [long  ,   16] ��翹����              
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�            
    char    WthdwAbleAmt        [  16];    // [long  ,   16] ���Ⱑ�ɱݾ�            
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�          
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] ���Ⱑ�ɴ��ݾ�        
    char    Mgn                 [  16];    // [long  ,   16] ���űݾ�                
    char    MnyMgn              [  16];    // [long  ,   16] �������űݾ�            
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�            
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�        
    char    AddMgn              [  16];    // [long  ,   16] �߰����űݾ�            
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�        
    char    AmtPrdayChckInAmt   [  16];    // [long  ,   16] �����ϼ�ǥ�Աݾ�        
    char    FnoPrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼ����ϴ��ŵ��ݾ�
    char    FnoCrdaySubstSellAmt[  16];    // [long  ,   16] �����ɼǱ��ϴ��ŵ��ݾ�
    char    FnoPrdayFdamt       [  16];    // [long  ,   16] �����ɼ����ϰ��Աݾ�    
    char    FnoCrdayFdamt       [  16];    // [long  ,   16] �����ɼǱ��ϰ��Աݾ�    
    char    FcurrSubstAmt       [  16];    // [long  ,   16] ��ȭ���ݾ�            
    char    FnoAcntAfmgnNm      [  20];    // [string,   20] �����ɼǰ��»������űݸ�
} CCEBQ10500OutBlock2, *LPCCEBQ10500OutBlock2;
#define NAME_CCEBQ10500OutBlock2     "CCEBQ10500OutBlock2"

typedef struct _CCEBQ10500OutBlock3
{
    char    PdGrpCodeNm         [  20];    // [string,   20] ��ǰ���ڵ��            
    char    NetRiskMgn          [  16];    // [long  ,   16] ���������űݾ�          
    char    PrcMgn              [  16];    // [long  ,   16] �������űݾ�            
    char    SprdMgn             [  16];    // [long  ,   16] �����������űݾ�        
    char    PrcFlctMgn          [  16];    // [long  ,   16] ���ݺ������űݾ�        
    char    MinMgn              [  16];    // [long  ,   16] �ּ����űݾ�            
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�            
    char    OptNetBuyAmt        [  16];    // [long  ,   16] �ɼǼ��ż��ݾ�          
    char    CsgnMgn             [  16];    // [long  ,   16] ��Ź���űݾ�            
    char    MaintMgn            [  16];    // [long  ,   16] �������űݾ�            
    char    FutsBuyExecAmt      [  16];    // [long  ,   16] �����ż�ü��ݾ�        
    char    FutsSellExecAmt     [  16];    // [long  ,   16] �����ŵ�ü��ݾ�        
    char    OptBuyExecAmt       [  16];    // [long  ,   16] �ɼǸż�ü��ݾ�        
    char    OptSellExecAmt      [  16];    // [long  ,   16] �ɼǸŵ�ü��ݾ�        
    char    FutsPnlAmt          [  16];    // [long  ,   16] �������ͱݾ�            
    char    TotRiskCsgnMgn      [  16];    // [long  ,   16] ��������Ź���ű�        
    char    UndCsgnMgn          [  16];    // [long  ,   16] �μ�����Ź���ű�        
    char    MgnRdctAmt          [  16];    // [long  ,   16] ���űݰ���ݾ�          
} CCEBQ10500OutBlock3, *LPCCEBQ10500OutBlock3;
#define NAME_CCEBQ10500OutBlock3     "CCEBQ10500OutBlock3"

typedef struct _CCEAT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  16];    // [long  ,   16] �׸��ȣ            
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CCEAT00100InBlock1, *LPCCEAT00100InBlock1;

typedef struct _CCEAT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���            
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ�
    char    FnoTrdPtnCode       [   2];    // [string,    2] �����ɼǰŷ������ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����            
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  16];    // [long  ,   16] �׸��ȣ            
    char    OpDrtnNo            [  12];    // [string,   12] ������ù�ȣ        
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CCEAT00100OutBlock1, *LPCCEAT00100OutBlock1;

typedef struct _CCEAT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ            
    char    BrnNm               [  40];    // [string,   40] ������              
    char    AcntNm              [  40];    // [string,   40] ���¸�              
    char    IsuNm               [  50];    // [string,   50] �����              
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�    
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����ű�          
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����ű�      
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���        
} CCEAT00100OutBlock2, *LPCCEAT00100OutBlock2;

typedef struct _CCEAT00200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�         
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ             
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ             
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ     
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ� 
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ� 
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����             
    char    MdfyQty             [  16];    // [long  ,   16] ��������             
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�     
    char    GrpId               [  20];    // [string,   20] �׷�ID               
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ         
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ       
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ           
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ           
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ           
    char    MgempNo             [   9];    // [string,    9] ���������ȣ         
    char    FundId              [  12];    // [string,   12] �ݵ�ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ       
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ         
} CCEAT00200InBlock1, *LPCCEAT00200InBlock1;
  
typedef struct _CCEAT00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�         
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ             
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ             
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ     
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ� 
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] �����ɼ�ȣ�������ڵ� 
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����             
    char    MdfyQty             [  16];    // [long  ,   16] ��������             
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�     
    char    GrpId               [  20];    // [string,   20] �׷�ID               
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ         
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ       
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ           
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ           
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ           
    char    MgempNo             [   9];    // [string,    9] ���������ȣ         
    char    FundId              [  12];    // [string,   12] �ݵ�ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ       
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ         
} CCEAT00200OutBlock1, *LPCCEAT00200OutBlock1;

typedef struct _CCEAT00200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��           
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ             
    char    BrnNm               [  40];    // [string,   40] ������               
    char    AcntNm              [  40];    // [string,   40] ���¸�               
    char    IsuNm               [  50];    // [string,   50] �����               
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�         
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�     
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�         
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�     
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���         
} CCEAT00200OutBlock2, *LPCCEAT00200OutBlock2;

typedef struct _CCEAT00300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ      
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CCEAT00300InBlock1, *LPCCEAT00300InBlock1;

typedef struct _CCEAT00300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdMktCode          [   2];    // [string,    2] �ֹ������ڵ�        
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ            
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ            
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ    
    char    FnoOrdPtnCode       [   2];    // [string,    2] �����ɼ��ֹ������ڵ�
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ          
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���            
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] ���ǸŸſϷ�ð�    
    char    GrpId               [  20];    // [string,   20] �׷�ID              
    char    OrdSeqno            [  10];    // [long  ,   10] �ֹ��Ϸù�ȣ        
    char    PtflNo              [  10];    // [long  ,   10] ��Ʈ��������ȣ      
    char    BskNo               [  10];    // [long  ,   10] �ٽ��Ϲ�ȣ          
    char    TrchNo              [  10];    // [long  ,   10] Ʈ��ġ��ȣ          
    char    ItemNo              [  10];    // [long  ,   10] �����۹�ȣ          
    char    MgempNo             [   9];    // [string,    9] ���������ȣ        
    char    FundId              [  12];    // [string,   12] �ݵ�ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] �ݵ���ֹ���ȣ      
    char    FundOrdNo           [  10];    // [long  ,   10] �ݵ��ֹ���ȣ        
} CCEAT00300OutBlock1, *LPCCEAT00300OutBlock1;

typedef struct _CCEAT00300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��          
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ            
    char    BrnNm               [  40];    // [string,   40] ������              
    char    AcntNm              [  40];    // [string,   40] ���¸�              
    char    IsuNm               [  50];    // [string,   50] �����              
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�    
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�        
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�    
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���        
} CCEAT00300OutBlock2, *LPCCEAT00300OutBlock2;

/* ������ �ż�/�ŵ��ֹ� */
typedef struct _CEXAT11100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���              
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����              
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���          
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11100InBlock1, *LPCEXAT11100InBlock1;
#define NAME_CEXAT11100InBlock1     "CEXAT11100InBlock1"

typedef struct _CEXAT11100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���              
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����              
    char    OrdQty              [  16];    // [long  ,   16] �ֹ�����              
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���          
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11100OutBlock1, *LPCEXAT11100OutBlock1;
#define NAME_CEXAT11100OutBlock1     "CEXAT11100OutBlock1"

typedef struct _CEXAT11100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ              
    char    BrnNm               [  40];    // [string,   40] ������                
    char    AcntNm              [  40];    // [string,   40] ���¸�                
    char    IsuNm               [  50];    // [string,   50] �����                
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�      
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����ű�            
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����ű�        
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���          
} CEXAT11100OutBlock2, *LPCEXAT11100OutBlock2;
#define NAME_CEXAT11100OutBlock2     "CEXAT11100OutBlock2"

/* ������ �����ֹ� */
typedef struct _CEXAT11200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����              
    char    MdfyQty             [  16];    // [long  ,   16] ��������              
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���          
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11200InBlock1, *LPCEXAT11200InBlock1;
#define NAME_CEXAT11200InBlock1     "CEXAT11200InBlock1"

typedef struct _CEXAT11200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű����ڵ�          
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] �������������Ǳ����ڵ�
    char    OrdPrc              [  15];    // [double, 15.2] �ֹ�����              
    char    MdfyQty             [  16];    // [long  ,   16] ��������              
    char    OrdCndiPrc          [  25];    // [double, 25.8] �ֹ����ǰ���          
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11200OutBlock1, *LPCEXAT11200OutBlock1;
#define NAME_CEXAT11200OutBlock1     "CEXAT11200OutBlock1"

typedef struct _CEXAT11200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ              
    char    BrnNm               [  40];    // [string,   40] ������                
    char    AcntNm              [  40];    // [string,   40] ���¸�                
    char    IsuNm               [  50];    // [string,   50] �����                
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�      
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�          
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�      
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���          
} CEXAT11200OutBlock2, *LPCEXAT11200OutBlock2;
#define NAME_CEXAT11200OutBlock2     "CEXAT11200OutBlock2"

/* ������ ����ֹ� */
typedef struct _CEXAT11300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���              
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11300InBlock1, *LPCEXAT11300InBlock1;
#define NAME_CEXAT11300InBlock1     "CEXAT11300InBlock1"

typedef struct _CEXAT11300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrgOrdNo            [  10];    // [long  ,   10] ���ֹ���ȣ            
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ              
    char    Pwd                 [   8];    // [string,    8] ��й�ȣ              
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ      
    char    CancQty             [  16];    // [long  ,   16] ��Ҽ���              
    char    CommdaCode          [   2];    // [string,    2] ��Ÿ�ü�ڵ�          
} CEXAT11300OutBlock1, *LPCEXAT11300OutBlock1;
#define NAME_CEXAT11300OutBlock1     "CEXAT11300OutBlock1"

typedef struct _CEXAT11300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��            
    char    OrdNo               [  10];    // [long  ,   10] �ֹ���ȣ              
    char    BrnNm               [  40];    // [string,   40] ������                
    char    AcntNm              [  40];    // [string,   40] ���¸�                
    char    IsuNm               [  50];    // [string,   50] �����                
    char    OrdAbleAmt          [  16];    // [long  ,   16] �ֹ����ɱݾ�          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�      
    char    OrdMgn              [  16];    // [long  ,   16] �ֹ����űݾ�          
    char    MnyOrdMgn           [  16];    // [long  ,   16] �����ֹ����űݾ�      
    char    OrdAbleQty          [  16];    // [long  ,   16] �ֹ����ɼ���          
} CEXAT11300OutBlock2, *LPCEXAT11300OutBlock2;
#define NAME_CEXAT11300OutBlock2     "CEXAT11300OutBlock2"                         

/* ������ ��Ź�� �� �����ܰ���ȸ */
typedef struct _CEXAQ31200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ        
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ    
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���    
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���
} CEXAQ31200InBlock1, *LPCEXAQ31200InBlock1;

typedef struct _CEXAQ31200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ        
    char    InptPwd             [   8];    // [string,    8] �Էº�й�ȣ    
    char    BalEvalTp           [   1];    // [string,    1] �ܰ��򰡱���    
    char    FutsPrcEvalTp       [   1];    // [string,    1] ���������򰡱���
} CEXAQ31200OutBlock1, *LPCEXAQ31200OutBlock1;

typedef struct _CEXAQ31200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] ���ڵ尹��      
    char    AcntNo              [  20];    // [string,   20] ���¹�ȣ        
    char    AcntNm              [  40];    // [string,   40] ���¸�          
    char    EvalDpsamtTotamt    [  15];    // [long  ,   15] �򰡿�Ź���Ѿ�  
    char    MnyEvalDpstgAmt     [  15];    // [long  ,   15] �����򰡿�Ź�ݾ�
    char    DpsamtTotamt        [  16];    // [long  ,   16] ��Ź���Ѿ�      
    char    DpstgMny            [  16];    // [long  ,   16] ��Ź����        
    char    PsnOutAbleTotAmt    [  15];    // [long  ,   15] ���Ⱑ���ѱݾ�  
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] ���Ⱑ�����ݾ�  
    char    OrdAbleTotAmt       [  15];    // [long  ,   15] �ֹ������ѱݾ�  
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] �����ֹ����ɱݾ�
    char    CsgnMgnTotamt       [  16];    // [long  ,   16] ��Ź���ű��Ѿ�  
    char    MnyCsgnMgn          [  16];    // [long  ,   16] ������Ź���űݾ�
    char    AddMgnTotamt        [  15];    // [long  ,   15] �߰����ű��Ѿ�  
    char    MnyAddMgn           [  16];    // [long  ,   16] �����߰����űݾ�
    char    CmsnAmt             [  16];    // [long  ,   16] ������          
    char    FutsEvalPnlAmt      [  16];    // [long  ,   16] �����򰡼��ͱݾ�
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] �ɼ��򰡼��ͱݾ�
    char    OptEvalAmt          [  16];    // [long  ,   16] �ɼ��򰡱ݾ�    
    char    OptBnsplAmt         [  16];    // [long  ,   16] �ɼǸŸż��ͱݾ�
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] ������������    
    char    TotPnlAmt           [  16];    // [long  ,   16] �Ѽ��ͱݾ�      
    char    NetPnlAmt           [  16];    // [long  ,   16] �����ͱݾ�      
    char    TotEvalAmt          [  16];    // [long  ,   16] ���򰡱ݾ�      
    char    MnyinAmt            [  16];    // [long  ,   16] �Աݱݾ�        
    char    MnyoutAmt           [  16];    // [long  ,   16] ��ݱݾ�        
} CEXAQ31200OutBlock2, *LPCEXAQ31200OutBlock2;

typedef struct _CEXAQ31200OutBlock3
{
    char    FnoIsuNo            [  12];    // [string,   12] �����ɼ������ȣ
    char    IsuNm               [  40];    // [string,   40] �����          
    char    BnsTpCode           [   1];    // [string,    1] �Ÿű���        
    char    BnsTpNm             [  10];    // [string,   10] �Ÿű���        
    char    UnsttQty            [  16];    // [long  ,   16] �̰�������      
    char    FnoAvrPrc           [  19];    // [double, 19.8] ��հ�          
    char    NowPrc              [  13];    // [double, 13.2] ���簡          
    char    CmpPrc              [  13];    // [double, 13.2] ���          
    char    EvalPnl             [  16];    // [long  ,   16] �򰡼���        
    char    PnlRat              [  12];    // [double, 12.6] ���ͷ�          
    char    EvalAmt             [  16];    // [long  ,   16] �򰡱ݾ�        
} CEXAQ31200OutBlock3, *LPCEXAQ31200OutBlock3;

