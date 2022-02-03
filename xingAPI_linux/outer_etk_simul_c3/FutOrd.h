/*-------------------------------------------------------------------------*/
/* Client 통신헤더                                                         */
/*-------------------------------------------------------------------------*/
typedef struct  _SB_NHAP
{
    char MediaETK          [2]; /* 당사매체                                */
    char SessionKey        [6]; /* 세션키                                  */
    char ScreenNo          [5]; /* 화면번호                                */
    char SendSeqNo         [7]; /* 전송TR SeqNo                            */
    char UserID            [8]; /* Login ID                                */
    char IPAddr           [16]; /* IP Address  192004015023                */
    char ServiceCode      [10]; /* Service Code                            */
    char BranchNo          [3]; /* 관리점                                  */
    char FuncCode          [4]; /* 처리구분  1:등록,2:조회,3:정정,4:취소,  */
                                /*         5:확인,6:전화면,7:연속,C:전송   */
    char Cont              [1]; /* 연속구분  Y:연속,N:NONE                 */
    char ContKey          [18]; /* 연속키                                  */
    char Lang              [1]; /* 언어 K:한국,E:영어,C:중국,J:일본        */
    char RqCnt             [4]; /* 요청건수                                */
    char Loan              [1]; /* 론구분 1:파워론,0:사용안함              */
    char MediaComm         [2]; /* 통신매체                                */
    char BussGb            [1]; /* 업무헤서추가여부 1:업무헤더있음,0:NONE  */
    char Filler            [9]; /* Filler                                  */
    char UserData         [26]; /* 유저영역                                */
    char MacAddress       [12]; /* MAC ADDRESS                             */
    char Filler2          [18]; /* Filler2                                 */
} SB_NHAP;

typedef struct _CFOAT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드
    char    FnoTrdPtnCode       [   2];    // [string,    2] 선물옵션거래유형코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  16];    // [long  ,   16] 항목번호            
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CFOAT00100InBlock1, *LPCFOAT00100InBlock1;
#define NAME_CFOAT00100InBlock1     "CFOAT00100InBlock1"

typedef struct _CFOAT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드
    char    FnoTrdPtnCode       [   2];    // [string,    2] 선물옵션거래유형코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  16];    // [long  ,   16] 항목번호            
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CFOAT00100OutBlock1, *LPCFOAT00100OutBlock1;
#define NAME_CFOAT00100OutBlock1     "CFOAT00100OutBlock1"

typedef struct _CFOAT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdNo               [  10];    // [long  ,   10] 주문번호            
    char    BrnNm               [  40];    // [string,   40] 지점명              
    char    AcntNm              [  40];    // [string,   40] 계좌명              
    char    IsuNm               [  50];    // [string,   50] 종목명              
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액    
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금          
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금      
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량        
} CFOAT00100OutBlock2, *LPCFOAT00100OutBlock2;
#define NAME_CFOAT00100OutBlock2     "CFOAT00100OutBlock2"

typedef struct _CFOAT00200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드         
    char    AcntNo              [  20];    // [string,   20] 계좌번호             
    char    Pwd                 [   8];    // [string,    8] 비밀번호             
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호     
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드 
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드 
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격             
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량             
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각     
    char    GrpId               [  20];    // [string,   20] 그룹ID               
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호         
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호       
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호           
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호           
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호           
    char    MgempNo             [   9];    // [string,    9] 관리사원번호         
    char    FundId              [  12];    // [string,   12] 펀드ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호       
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호         
} CFOAT00200InBlock1, *LPCFOAT00200InBlock1;
#define NAME_CFOAT00200InBlock1     "CFOAT00200InBlock1"

  
typedef struct _CFOAT00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드         
    char    AcntNo              [  20];    // [string,   20] 계좌번호             
    char    Pwd                 [   8];    // [string,    8] 비밀번호             
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호     
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드 
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드 
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격             
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량             
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각     
    char    GrpId               [  20];    // [string,   20] 그룹ID               
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호         
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호       
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호           
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호           
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호           
    char    MgempNo             [   9];    // [string,    9] 관리사원번호         
    char    FundId              [  12];    // [string,   12] 펀드ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호       
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호         
} CFOAT00200OutBlock1, *LPCFOAT00200OutBlock1;
#define NAME_CFOAT00200OutBlock1     "CFOAT00200OutBlock1"


typedef struct _CFOAT00200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdNo               [  10];    // [long  ,   10] 주문번호             
    char    BrnNm               [  40];    // [string,   40] 지점명               
    char    AcntNm              [  40];    // [string,   40] 계좌명               
    char    IsuNm               [  50];    // [string,   50] 종목명               
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액         
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액     
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액         
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액     
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량         
} CFOAT00200OutBlock2, *LPCFOAT00200OutBlock2;
#define NAME_CFOAT00200OutBlock2     "CFOAT00200OutBlock2"



typedef struct _CFOAT00300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    CancQty             [  16];    // [long  ,   16] 취소수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호      
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CFOAT00300InBlock1, *LPCFOAT00300InBlock1;
#define NAME_CFOAT00300InBlock1     "CFOAT00300InBlock1"


typedef struct _CFOAT00300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    CancQty             [  16];    // [long  ,   16] 취소수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호      
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CFOAT00300OutBlock1, *LPCFOAT00300OutBlock1;
#define NAME_CFOAT00300OutBlock1     "CFOAT00300OutBlock1"


typedef struct _CFOAT00300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdNo               [  10];    // [long  ,   10] 주문번호            
    char    BrnNm               [  40];    // [string,   40] 지점명              
    char    AcntNm              [  40];    // [string,   40] 계좌명              
    char    IsuNm               [  50];    // [string,   50] 종목명              
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액    
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액        
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액    
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량        
} CFOAT00300OutBlock2, *LPCFOAT00300OutBlock2;
#define NAME_CFOAT00300OutBlock2     "CFOAT00300OutBlock2"

typedef struct _t9700InBlock{
    char accno[11];
    char jang_gb[1]; //시장구분 1 : 파생 2 : 주식
    char seqno_start[10];
    char seqno_end[10];
    char qry_gb[1]; //조회구분 1 : 구간조회 2 : 전체조회
} t9700InBlock;

typedef struct _t9700OutBlock{
    char seqno[10];
} t9700OutBlock;

typedef struct {
    char   svc_id            [4   ];  /* ID  HO01              X(04)   *
                                       * ID  HO04              X(04)   */
    char   ordr_dt           [8   ];  /* 주문일자              X(08)   */
    char   brn_cd            [3   ];  /* 지점번호              X(03)   */
    char   ordr_no           [10  ];  /* 주문번호              X(10)   */
    char   orgn_ordr_no      [10  ];  /* 원주문번호            X(10)   */
    char   mthr_ordr_no      [10  ];  /* 모주문번호            X(10)   */
    char   ac_no             [11  ];  /* 계좌번호              X(11)   */
    char   is_cd             [30  ];  /* 종목코드              X(30)   */
    char   s_b_ccd           [1   ];  /* 매도매수유형          X(01)   */
    char   ordr_ccd          [1   ];  /* 정정취소유형          X(01)   */
    char   ordr_typ_cd       [1   ];  /* 주문유형코드          X(01)   */
    char   ordr_typ_prd_ccd  [2   ];  /* 주문유형기간구분코드  X(02)   */
    char   ordr_aplc_strt_dt [8   ];  /* 주문적용시작일자      X(08)   */
    char   ordr_aplc_end_dt  [8   ];  /* 주문적용종료일자      X(08)   */
    char   ordr_prc          [15  ];  /* 주문가격              9(15.8) */
    char   cndt_ordr_prc     [15  ];  /* 주문조건가격          9(15.8) */
    char   ordr_q            [12  ];  /* 주문수량              9(12.0) */
    char   ordr_tm           [9   ];  /* 주문시간              X(09)   */
    char   userid            [8   ];  /* 주문자ID              X(08)   */
}hoga_in;

#define SZ_HO01 sizeof(hoga_in)
#define SZ_HO04 sizeof(hoga_in)

typedef struct {
    char    svc_id           [4   ];  /* ID HO02:확인, HO03:거부 X(04) */
    char    ordr_dt          [8   ];  /* 주문일자              X(08)   */
    char    brn_cd           [3   ];  /* 지점번호              X(03)   */
    char    ordr_no          [10  ];  /* 주문번호              X(10)   */
    char    orgn_ordr_no     [10  ];  /* 원주문번호            X(10)   */
    char    mthr_ordr_no     [10  ];  /* 모주문번호            X(10)   */
    char    ac_no            [11  ];  /* 계좌번호              X(11)   */
    char    is_cd            [30  ];  /* 종목코드              X(30)   */
    char    s_b_ccd          [1   ];  /* 매도매수유형          X(01)   */
    char    ordr_ccd         [1   ];  /* 정정취소유형          X(01)   */
    char    ordr_typ_cd      [1   ];  /* 주문유형코드          X(01)   */
    char    ordr_typ_prd_ccd [2   ];  /* 주문유형기간구분코드  X(02)   */
    char    ordr_aplc_strt_dt[8   ];  /* 주문적용시작일자      X(08)   */
    char    ordr_aplc_end_dt [8   ];  /* 주문적용종료일자      X(08)   */
    char    ordr_prc         [15  ];  /* 주문가격              9(15.8) */
    char    cndt_ordr_prc    [15  ];  /* 주문조건가격          9(15.8) */
    char    ordr_q           [12  ];  /* 주문수량              9(12.0) */
    char    ordr_tm          [9   ];  /* 주문시간              X(09)   */
    char    cnfr_q           [12  ];  /* 호가확인수량          9(12.0) */
    char    rfsl_cd          [4   ];  /* 호가거부사유코드      X(04)   */
    char    text             [80  ];  /* 호가거부사유코드명    X(300)  */
    char    userid           [8   ];  /* 주문자ID              X(08)   */
}hoga_out;

#define SZ_HO02 sizeof(hoga_out)
#define SZ_HO03 sizeof(hoga_out)

typedef struct {
    char    svc_id           [4   ];   /* ID CH01              X(04)   */
    char    ordr_dt          [8   ];   /* 주문일자             X(08)   */
    char    brn_cd           [3   ];   /* 지점번호             X(03)   */
    char    ordr_no          [10  ];   /* 주문번호             X(10)   */
    char    orgn_ordr_no     [10  ];   /* 원주문번호           X(10)   */
    char    mthr_ordr_no     [10  ];   /* 모주문번호           X(10)   */
    char    ac_no            [11  ];   /* 계좌번호             X(11)   */
    char    is_cd            [30  ];   /* 종목코드             X(30)   */
    char    s_b_ccd          [1   ];   /* 매도매수유형         X(01)   */
    char    ordr_ccd         [1   ];   /* 정정취소유형         X(01)   */
    char    ccls_q           [15  ];   /* 체결수량             9(15.0) */
    char    ccls_prc         [15  ];   /* 체결가격             9(15.8) */
    char    ccls_no          [10  ];   /* 체결번호             9(10)   */
    char    ccls_tm          [9   ];   /* 체결시간             X(09)   */
    char    avg_byng_uprc    [12  ];   /* 매입평균단가         9(12.6) */
    char    byug_amt         [25  ];   /* 매입금액             9(25.8) */
    char    clr_pl_amt       [19  ];   /* 청산손익             9(19.2) */
    char    ent_fee          [19  ];   /* 위탁수수료           9(19.2) */
    char    fcm_fee          [19  ];   /* FCM수수료            9(19.2) */
    char    userid           [8   ];   /* 주문자ID             X(08)   */
    char    now_prc          [15  ];   /* 현재가격             9(15.8) */
    char    crncy_cd         [3   ];   /* 통화코드             X(03)   */
    char    mtrt_dt          [8   ];   /* 만기일자             X(08)   */
}hoga_che;

#define SZ_CH01 sizeof(hoga_che)

/* 선물옵션 증거금조회 */
typedef struct _CFOBQ10500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNo              [  20];    // [string,   20] 계좌번호                
    char    Pwd                 [   8];    // [string,    8] 비밀번호                
} CFOBQ10500InBlock1, *LPCFOBQ10500InBlock1;
#define NAME_CFOBQ10500InBlock1     "CFOBQ10500InBlock1"

typedef struct _CFOBQ10500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNo              [  20];    // [string,   20] 계좌번호                
    char    Pwd                 [   8];    // [string,    8] 비밀번호                
} CFOBQ10500OutBlock1, *LPCFOBQ10500OutBlock1;
#define NAME_CFOBQ10500OutBlock1     "CFOBQ10500OutBlock1"

typedef struct _CFOBQ10500OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNm              [  40];    // [string,   40] 계좌명                  
    char    DpsamtTotamt        [  16];    // [long  ,   16] 예탁금총액              
    char    Dps                 [  16];    // [long  ,   16] 예수금                  
    char    SubstAmt            [  16];    // [long  ,   16] 대용금액                
    char    FilupDpsamtTotamt   [  16];    // [long  ,   16] 충당예탁금총액          
    char    FilupDps            [  16];    // [long  ,   16] 충당예수금              
    char    FutsPnlAmt          [  16];    // [long  ,   16] 선물손익금액            
    char    WthdwAbleAmt        [  16];    // [long  ,   16] 인출가능금액            
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] 인출가능현금액          
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] 인출가능대용금액        
    char    Mgn                 [  16];    // [long  ,   16] 증거금액                
    char    MnyMgn              [  16];    // [long  ,   16] 현금증거금액            
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액            
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액        
    char    AddMgn              [  16];    // [long  ,   16] 추가증거금액            
    char    MnyAddMgn           [  16];    // [long  ,   16] 현금추가증거금액        
    char    AmtPrdayChckInAmt   [  16];    // [long  ,   16] 금전일수표입금액        
    char    FnoPrdaySubstSellAmt[  16];    // [long  ,   16] 선물옵션전일대용매도금액
    char    FnoCrdaySubstSellAmt[  16];    // [long  ,   16] 선물옵션금일대용매도금액
    char    FnoPrdayFdamt       [  16];    // [long  ,   16] 선물옵션전일가입금액    
    char    FnoCrdayFdamt       [  16];    // [long  ,   16] 선물옵션금일가입금액    
    char    FcurrSubstAmt       [  16];    // [long  ,   16] 외화대용금액            
    char    FnoAcntAfmgnNm      [  20];    // [string,   20] 선물옵션계좌사후증거금명
} CFOBQ10500OutBlock2, *LPCFOBQ10500OutBlock2;
#define NAME_CFOBQ10500OutBlock2     "CFOBQ10500OutBlock2"

typedef struct _CFOBQ10500OutBlock3
{
    char    PdGrpCodeNm         [  20];    // [string,   20] 상품군코드명            
    char    NetRiskMgn          [  16];    // [long  ,   16] 순위험증거금액          
    char    PrcMgn              [  16];    // [long  ,   16] 가격증거금액            
    char    SprdMgn             [  16];    // [long  ,   16] 스프레드증거금액        
    char    PrcFlctMgn          [  16];    // [long  ,   16] 가격변동증거금액        
    char    MinMgn              [  16];    // [long  ,   16] 최소증거금액            
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액            
    char    OptNetBuyAmt        [  16];    // [long  ,   16] 옵션순매수금액          
    char    CsgnMgn             [  16];    // [long  ,   16] 위탁증거금액            
    char    MaintMgn            [  16];    // [long  ,   16] 유지증거금액            
    char    FutsBuyExecAmt      [  16];    // [long  ,   16] 선물매수체결금액        
    char    FutsSellExecAmt     [  16];    // [long  ,   16] 선물매도체결금액        
    char    OptBuyExecAmt       [  16];    // [long  ,   16] 옵션매수체결금액        
    char    OptSellExecAmt      [  16];    // [long  ,   16] 옵션매도체결금액        
    char    FutsPnlAmt          [  16];    // [long  ,   16] 선물손익금액            
    char    TotRiskCsgnMgn      [  16];    // [long  ,   16] 총위험위탁증거금        
    char    UndCsgnMgn          [  16];    // [long  ,   16] 인수도위탁증거금        
    char    MgnRdctAmt          [  16];    // [long  ,   16] 증거금감면금액          
} CFOBQ10500OutBlock3, *LPCFOBQ10500OutBlock3;

/* 선물옵션 CME 예탁금증거금조회 */
typedef struct _CCEBQ10500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNo              [  20];    // [string,   20] 계좌번호                
    char    Pwd                 [   8];    // [string,    8] 비밀번호                
} CCEBQ10500InBlock1, *LPCCEBQ10500InBlock1;
#define NAME_CCEBQ10500InBlock1     "CCEBQ10500InBlock1"

typedef struct _CCEBQ10500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNo              [  20];    // [string,   20] 계좌번호                
    char    Pwd                 [   8];    // [string,    8] 비밀번호                
} CCEBQ10500OutBlock1, *LPCCEBQ10500OutBlock1;
#define NAME_CCEBQ10500OutBlock1     "CCEBQ10500OutBlock1"

typedef struct _CCEBQ10500OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수              
    char    AcntNm              [  40];    // [string,   40] 계좌명                  
    char    DpsamtTotamt        [  16];    // [long  ,   16] 예탁금총액              
    char    Dps                 [  16];    // [long  ,   16] 예수금                  
    char    SubstAmt            [  16];    // [long  ,   16] 대용금액                
    char    FilupDpsamtTotamt   [  16];    // [long  ,   16] 충당예탁금총액          
    char    FilupDps            [  16];    // [long  ,   16] 충당예수금              
    char    FutsPnlAmt          [  16];    // [long  ,   16] 선물손익금액            
    char    WthdwAbleAmt        [  16];    // [long  ,   16] 인출가능금액            
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] 인출가능현금액          
    char    PsnOutAbleSubstAmt  [  16];    // [long  ,   16] 인출가능대용금액        
    char    Mgn                 [  16];    // [long  ,   16] 증거금액                
    char    MnyMgn              [  16];    // [long  ,   16] 현금증거금액            
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액            
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액        
    char    AddMgn              [  16];    // [long  ,   16] 추가증거금액            
    char    MnyAddMgn           [  16];    // [long  ,   16] 현금추가증거금액        
    char    AmtPrdayChckInAmt   [  16];    // [long  ,   16] 금전일수표입금액        
    char    FnoPrdaySubstSellAmt[  16];    // [long  ,   16] 선물옵션전일대용매도금액
    char    FnoCrdaySubstSellAmt[  16];    // [long  ,   16] 선물옵션금일대용매도금액
    char    FnoPrdayFdamt       [  16];    // [long  ,   16] 선물옵션전일가입금액    
    char    FnoCrdayFdamt       [  16];    // [long  ,   16] 선물옵션금일가입금액    
    char    FcurrSubstAmt       [  16];    // [long  ,   16] 외화대용금액            
    char    FnoAcntAfmgnNm      [  20];    // [string,   20] 선물옵션계좌사후증거금명
} CCEBQ10500OutBlock2, *LPCCEBQ10500OutBlock2;
#define NAME_CCEBQ10500OutBlock2     "CCEBQ10500OutBlock2"

typedef struct _CCEBQ10500OutBlock3
{
    char    PdGrpCodeNm         [  20];    // [string,   20] 상품군코드명            
    char    NetRiskMgn          [  16];    // [long  ,   16] 순위험증거금액          
    char    PrcMgn              [  16];    // [long  ,   16] 가격증거금액            
    char    SprdMgn             [  16];    // [long  ,   16] 스프레드증거금액        
    char    PrcFlctMgn          [  16];    // [long  ,   16] 가격변동증거금액        
    char    MinMgn              [  16];    // [long  ,   16] 최소증거금액            
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액            
    char    OptNetBuyAmt        [  16];    // [long  ,   16] 옵션순매수금액          
    char    CsgnMgn             [  16];    // [long  ,   16] 위탁증거금액            
    char    MaintMgn            [  16];    // [long  ,   16] 유지증거금액            
    char    FutsBuyExecAmt      [  16];    // [long  ,   16] 선물매수체결금액        
    char    FutsSellExecAmt     [  16];    // [long  ,   16] 선물매도체결금액        
    char    OptBuyExecAmt       [  16];    // [long  ,   16] 옵션매수체결금액        
    char    OptSellExecAmt      [  16];    // [long  ,   16] 옵션매도체결금액        
    char    FutsPnlAmt          [  16];    // [long  ,   16] 선물손익금액            
    char    TotRiskCsgnMgn      [  16];    // [long  ,   16] 총위험위탁증거금        
    char    UndCsgnMgn          [  16];    // [long  ,   16] 인수도위탁증거금        
    char    MgnRdctAmt          [  16];    // [long  ,   16] 증거금감면금액          
} CCEBQ10500OutBlock3, *LPCCEBQ10500OutBlock3;
#define NAME_CCEBQ10500OutBlock3     "CCEBQ10500OutBlock3"

typedef struct _CCEAT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드
    char    FnoTrdPtnCode       [   2];    // [string,    2] 선물옵션거래유형코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  16];    // [long  ,   16] 항목번호            
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CCEAT00100InBlock1, *LPCCEAT00100InBlock1;

typedef struct _CCEAT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드
    char    FnoTrdPtnCode       [   2];    // [string,    2] 선물옵션거래유형코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  16];    // [long  ,   16] 항목번호            
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CCEAT00100OutBlock1, *LPCCEAT00100OutBlock1;

typedef struct _CCEAT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdNo               [  10];    // [long  ,   10] 주문번호            
    char    BrnNm               [  40];    // [string,   40] 지점명              
    char    AcntNm              [  40];    // [string,   40] 계좌명              
    char    IsuNm               [  50];    // [string,   50] 종목명              
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액    
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금          
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금      
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량        
} CCEAT00100OutBlock2, *LPCCEAT00100OutBlock2;

typedef struct _CCEAT00200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드         
    char    AcntNo              [  20];    // [string,   20] 계좌번호             
    char    Pwd                 [   8];    // [string,    8] 비밀번호             
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호     
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드 
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드 
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격             
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량             
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각     
    char    GrpId               [  20];    // [string,   20] 그룹ID               
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호         
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호       
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호           
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호           
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호           
    char    MgempNo             [   9];    // [string,    9] 관리사원번호         
    char    FundId              [  12];    // [string,   12] 펀드ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호       
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호         
} CCEAT00200InBlock1, *LPCCEAT00200InBlock1;
  
typedef struct _CCEAT00200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드         
    char    AcntNo              [  20];    // [string,   20] 계좌번호             
    char    Pwd                 [   8];    // [string,    8] 비밀번호             
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호     
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드 
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호           
    char    FnoOrdprcPtnCode    [   2];    // [string,    2] 선물옵션호가유형코드 
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격             
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량             
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드         
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각     
    char    GrpId               [  20];    // [string,   20] 그룹ID               
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호         
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호       
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호           
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호           
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호           
    char    MgempNo             [   9];    // [string,    9] 관리사원번호         
    char    FundId              [  12];    // [string,   12] 펀드ID               
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호       
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호         
} CCEAT00200OutBlock1, *LPCCEAT00200OutBlock1;

typedef struct _CCEAT00200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수           
    char    OrdNo               [  10];    // [long  ,   10] 주문번호             
    char    BrnNm               [  40];    // [string,   40] 지점명               
    char    AcntNm              [  40];    // [string,   40] 계좌명               
    char    IsuNm               [  50];    // [string,   50] 종목명               
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액         
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액     
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액         
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액     
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량         
} CCEAT00200OutBlock2, *LPCCEAT00200OutBlock2;

typedef struct _CCEAT00300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    CancQty             [  16];    // [long  ,   16] 취소수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호      
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CCEAT00300InBlock1, *LPCCEAT00300InBlock1;

typedef struct _CCEAT00300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    Pwd                 [   8];    // [string,    8] 비밀번호            
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호    
    char    FnoOrdPtnCode       [   2];    // [string,    2] 선물옵션주문유형코드
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    CancQty             [  16];    // [long  ,   16] 취소수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    DscusBnsCmpltTime   [   9];    // [string,    9] 협의매매완료시각    
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqno            [  10];    // [long  ,   10] 주문일련번호        
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    FundId              [  12];    // [string,   12] 펀드ID              
    char    FundOrgOrdNo        [  10];    // [long  ,   10] 펀드원주문번호      
    char    FundOrdNo           [  10];    // [long  ,   10] 펀드주문번호        
} CCEAT00300OutBlock1, *LPCCEAT00300OutBlock1;

typedef struct _CCEAT00300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdNo               [  10];    // [long  ,   10] 주문번호            
    char    BrnNm               [  40];    // [string,   40] 지점명              
    char    AcntNm              [  40];    // [string,   40] 계좌명              
    char    IsuNm               [  50];    // [string,   50] 종목명              
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액        
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액    
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액        
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액    
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량        
} CCEAT00300OutBlock2, *LPCCEAT00300OutBlock2;

/* 유렉스 매수/매도주문 */
typedef struct _CEXAT11100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분              
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] 유렉스가격조건구분코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격              
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    OrdCndiPrc          [  25];    // [double, 25.8] 주문조건가격          
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11100InBlock1, *LPCEXAT11100InBlock1;
#define NAME_CEXAT11100InBlock1     "CEXAT11100InBlock1"

typedef struct _CEXAT11100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분              
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] 유렉스가격조건구분코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격              
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    OrdCndiPrc          [  25];    // [double, 25.8] 주문조건가격          
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11100OutBlock1, *LPCEXAT11100OutBlock1;
#define NAME_CEXAT11100OutBlock1     "CEXAT11100OutBlock1"

typedef struct _CEXAT11100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdNo               [  10];    // [long  ,   10] 주문번호              
    char    BrnNm               [  40];    // [string,   40] 지점명                
    char    AcntNm              [  40];    // [string,   40] 계좌명                
    char    IsuNm               [  50];    // [string,   50] 종목명                
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액      
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금            
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금        
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량          
} CEXAT11100OutBlock2, *LPCEXAT11100OutBlock2;
#define NAME_CEXAT11100OutBlock2     "CEXAT11100OutBlock2"

/* 유렉스 정정주문 */
typedef struct _CEXAT11200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] 유렉스가격조건구분코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격              
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량              
    char    OrdCndiPrc          [  25];    // [double, 25.8] 주문조건가격          
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11200InBlock1, *LPCEXAT11200InBlock1;
#define NAME_CEXAT11200InBlock1     "CEXAT11200InBlock1"

typedef struct _CEXAT11200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    ErxPrcCndiTpCode    [   1];    // [string,    1] 유렉스가격조건구분코드
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격              
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량              
    char    OrdCndiPrc          [  25];    // [double, 25.8] 주문조건가격          
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11200OutBlock1, *LPCEXAT11200OutBlock1;
#define NAME_CEXAT11200OutBlock1     "CEXAT11200OutBlock1"

typedef struct _CEXAT11200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdNo               [  10];    // [long  ,   10] 주문번호              
    char    BrnNm               [  40];    // [string,   40] 지점명                
    char    AcntNm              [  40];    // [string,   40] 계좌명                
    char    IsuNm               [  50];    // [string,   50] 종목명                
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액      
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액          
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액      
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량          
} CEXAT11200OutBlock2, *LPCEXAT11200OutBlock2;
#define NAME_CEXAT11200OutBlock2     "CEXAT11200OutBlock2"

/* 유렉스 취소주문 */
typedef struct _CEXAT11300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    CancQty             [  16];    // [long  ,   16] 취소수량              
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11300InBlock1, *LPCEXAT11300InBlock1;
#define NAME_CEXAT11300InBlock1     "CEXAT11300InBlock1"

typedef struct _CEXAT11300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호      
    char    CancQty             [  16];    // [long  ,   16] 취소수량              
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드          
} CEXAT11300OutBlock1, *LPCEXAT11300OutBlock1;
#define NAME_CEXAT11300OutBlock1     "CEXAT11300OutBlock1"

typedef struct _CEXAT11300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdNo               [  10];    // [long  ,   10] 주문번호              
    char    BrnNm               [  40];    // [string,   40] 지점명                
    char    AcntNm              [  40];    // [string,   40] 계좌명                
    char    IsuNm               [  50];    // [string,   50] 종목명                
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액      
    char    OrdMgn              [  16];    // [long  ,   16] 주문증거금액          
    char    MnyOrdMgn           [  16];    // [long  ,   16] 현금주문증거금액      
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량          
} CEXAT11300OutBlock2, *LPCEXAT11300OutBlock2;
#define NAME_CEXAT11300OutBlock2     "CEXAT11300OutBlock2"                         

/* 유렉스 예탁금 및 통합잔고조회 */
typedef struct _CEXAQ31200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    AcntNo              [  20];    // [string,   20] 계좌번호        
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호    
    char    BalEvalTp           [   1];    // [string,    1] 잔고평가구분    
    char    FutsPrcEvalTp       [   1];    // [string,    1] 선물가격평가구분
} CEXAQ31200InBlock1, *LPCEXAQ31200InBlock1;

typedef struct _CEXAQ31200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    AcntNo              [  20];    // [string,   20] 계좌번호        
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호    
    char    BalEvalTp           [   1];    // [string,    1] 잔고평가구분    
    char    FutsPrcEvalTp       [   1];    // [string,    1] 선물가격평가구분
} CEXAQ31200OutBlock1, *LPCEXAQ31200OutBlock1;

typedef struct _CEXAQ31200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    AcntNo              [  20];    // [string,   20] 계좌번호        
    char    AcntNm              [  40];    // [string,   40] 계좌명          
    char    EvalDpsamtTotamt    [  15];    // [long  ,   15] 평가예탁금총액  
    char    MnyEvalDpstgAmt     [  15];    // [long  ,   15] 현금평가예탁금액
    char    DpsamtTotamt        [  16];    // [long  ,   16] 예탁금총액      
    char    DpstgMny            [  16];    // [long  ,   16] 예탁현금        
    char    PsnOutAbleTotAmt    [  15];    // [long  ,   15] 인출가능총금액  
    char    PsnOutAbleCurAmt    [  16];    // [long  ,   16] 인출가능현금액  
    char    OrdAbleTotAmt       [  15];    // [long  ,   15] 주문가능총금액  
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액
    char    CsgnMgnTotamt       [  16];    // [long  ,   16] 위탁증거금총액  
    char    MnyCsgnMgn          [  16];    // [long  ,   16] 현금위탁증거금액
    char    AddMgnTotamt        [  15];    // [long  ,   15] 추가증거금총액  
    char    MnyAddMgn           [  16];    // [long  ,   16] 현금추가증거금액
    char    CmsnAmt             [  16];    // [long  ,   16] 수수료          
    char    FutsEvalPnlAmt      [  16];    // [long  ,   16] 선물평가손익금액
    char    OptEvalPnlAmt       [  16];    // [long  ,   16] 옵션평가손익금액
    char    OptEvalAmt          [  16];    // [long  ,   16] 옵션평가금액    
    char    OptBnsplAmt         [  16];    // [long  ,   16] 옵션매매손익금액
    char    FutsAdjstDfamt      [  16];    // [long  ,   16] 선물정산차금    
    char    TotPnlAmt           [  16];    // [long  ,   16] 총손익금액      
    char    NetPnlAmt           [  16];    // [long  ,   16] 순손익금액      
    char    TotEvalAmt          [  16];    // [long  ,   16] 총평가금액      
    char    MnyinAmt            [  16];    // [long  ,   16] 입금금액        
    char    MnyoutAmt           [  16];    // [long  ,   16] 출금금액        
} CEXAQ31200OutBlock2, *LPCEXAQ31200OutBlock2;

typedef struct _CEXAQ31200OutBlock3
{
    char    FnoIsuNo            [  12];    // [string,   12] 선물옵션종목번호
    char    IsuNm               [  40];    // [string,   40] 종목명          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분        
    char    BnsTpNm             [  10];    // [string,   10] 매매구분        
    char    UnsttQty            [  16];    // [long  ,   16] 미결제수량      
    char    FnoAvrPrc           [  19];    // [double, 19.8] 평균가          
    char    NowPrc              [  13];    // [double, 13.2] 현재가          
    char    CmpPrc              [  13];    // [double, 13.2] 대비가          
    char    EvalPnl             [  16];    // [long  ,   16] 평가손익        
    char    PnlRat              [  12];    // [double, 12.6] 손익률          
    char    EvalAmt             [  16];    // [long  ,   16] 평가금액        
} CEXAQ31200OutBlock3, *LPCEXAQ31200OutBlock3;

