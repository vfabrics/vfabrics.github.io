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

// 주식신규주문
typedef struct _CSPAT00600InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호        
    char    IsuNo               [  12];    // [string,   12] 종목번호            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    OrdPrc              [  13];    // [double, 13.2] 주문가              
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    OrdprcPtnCode       [   2];    // [string,    2] 호가유형코드        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] 프로그램호가유형코드
    char    StslAbleYn          [   1];    // [string,    1] 공매도가능여부      
    char    StslOrdprcTpCode    [   1];    // [string,    1] 공매도호가구분      
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    MgntrnCode          [   3];    // [string,    3] 신용거래코드        
    char    LoanDt              [   8];    // [string,    8] 대출일              
    char    MbrNo               [   3];    // [string,    3] 회원번호            
    char    OrdCndiTpCode       [   1];    // [string,    1] 주문조건구분        
    char    StrtgCode           [   6];    // [string,    6] 전략코드            
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차            
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    LpYn                [   1];    // [string,    1] 유동성공급자여부    
    char    CvrgTpCode          [   1];    // [string,    1] 반대매매구분        
} CSPAT00600InBlock1, *LPCSPAT00600InBlock1;

typedef struct _CSPAT00600OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호        
    char    IsuNo               [  12];    // [string,   12] 종목번호            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    OrdPrc              [  13];    // [double, 13.2] 주문가              
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    OrdprcPtnCode       [   2];    // [string,    2] 호가유형코드        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] 프로그램호가유형코드
    char    StslAbleYn          [   1];    // [string,    1] 공매도가능여부      
    char    StslOrdprcTpCode    [   1];    // [string,    1] 공매도호가구분      
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    MgntrnCode          [   3];    // [string,    3] 신용거래코드        
    char    LoanDt              [   8];    // [string,    8] 대출일              
    char    MbrNo               [   3];    // [string,    3] 회원번호            
    char    OrdCndiTpCode       [   1];    // [string,    1] 주문조건구분        
    char    StrtgCode           [   6];    // [string,    6] 전략코드            
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차            
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호        
    char    LpYn                [   1];    // [string,    1] 유동성공급자여부    
    char    CvrgTpCode          [   1];    // [string,    1] 반대매매구분        
} CSPAT00600OutBlock1, *LPCSPAT00600OutBlock1;

typedef struct _CSPAT00600OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수       
    char    OrdNo               [  10];    // [long  ,   10] 주문번호        
    char    OrdTime             [   9];    // [string,    9] 주문시각        
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드    
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드    
    char    ShtnIsuNo           [   9];    // [string,    9] 단축종목번호    
    char    MgempNo             [   9];    // [string,    9] 관리사원번호    
    char    OrdAmt              [  16];    // [long  ,   16] 주문금액        
    char    SpareOrdNo          [  10];    // [long  ,   10] 예비주문번호    
    char    CvrgSeqno           [  10];    // [long  ,   10] 반대매매일련번호 
    char    RsvOrdNo            [  10];    // [long  ,   10] 예약주문번호     
    char    SpotOrdQty          [  16];    // [long  ,   16] 실물주문수량     
    char    RuseOrdQty          [  16];    // [long  ,   16] 재사용주문수량   
    char    MnyOrdAmt           [  16];    // [long  ,   16] 현금주문금액     
    char    SubstOrdAmt         [  16];    // [long  ,   16] 대용주문금액     
    char    RuseOrdAmt          [  16];    // [long  ,   16] 재사용주문금액   
    char    AcntNm              [  40];    // [string,   40] 계좌명           
    char    IsuNm               [  40];    // [string,   40] 종목명           
} CSPAT00600OutBlock2, *LPCSPAT00600OutBlock2;

/* 주식정정주문 */
typedef struct _CSPAT00700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수    
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호    
    char    AcntNo              [  20];    // [string,   20] 계좌번호      
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호  
    char    IsuNo               [  12];    // [string,   12] 종목번호      
    char    OrdQty              [  16];    // [long  ,   16] 주문수량      
    char    OrdprcPtnCode       [   2];    // [string,    2] 호가유형코드  
    char    OrdCndiTpCode       [   1];    // [string,    1] 주문조건구분  
    char    OrdPrc              [  13];    // [double, 13.2] 주문가        
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드  
    char    StrtgCode           [   6];    // [string,    6] 전략코드      
    char    GrpId               [  20];    // [string,   20] 그룹ID        
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차      
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호    
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호    
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호    
} CSPAT00700InBlock1, *LPCSPAT00700InBlock1;

              
typedef struct _CSPAT00700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수    
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호    
    char    AcntNo              [  20];    // [string,   20] 계좌번호      
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호  
    char    IsuNo               [  12];    // [string,   12] 종목번호      
    char    OrdQty              [  16];    // [long  ,   16] 주문수량      
    char    OrdprcPtnCode       [   2];    // [string,    2] 호가유형코드  
    char    OrdCndiTpCode       [   1];    // [string,    1] 주문조건구분  
    char    OrdPrc              [  13];    // [double, 13.2] 주문가        
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드  
    char    StrtgCode           [   6];    // [string,    6] 전략코드      
    char    GrpId               [  20];    // [string,   20] 그룹ID        
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차      
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호    
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호    
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호    
} CSPAT00700OutBlock1, *LPCSPAT00700OutBlock1;

typedef struct _CSPAT00700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수    
    char    OrdNo               [  10];    // [long  ,   10] 주문번호      
    char    PrntOrdNo           [  10];    // [long  ,   10] 모주문번호    
    char    OrdTime             [   9];    // [string,    9] 주문시각      
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드  
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드  
    char    ShtnIsuNo           [   9];    // [string,    9] 단축종목번호  
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] 프로그램호가유
    char    StslOrdprcTpCode    [   1];    // [string,    1] 공매도호가구분
    char    StslAbleYn          [   1];    // [string,    1] 공매도가능여부
    char    MgntrnCode          [   3];    // [string,    3] 신용거래코드  
    char    LoanDt              [   8];    // [string,    8] 대출일        
    char    CvrgOrdTp           [   1];    // [string,    1] 반대매매주문구
    char    LpYn                [   1];    // [string,    1] 유동성공급자여
    char    MgempNo             [   9];    // [string,    9] 관리사원번호  
    char    OrdAmt              [  16];    // [long  ,   16] 주문금액      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분      
    char    SpareOrdNo          [  10];    // [long  ,   10] 예비주문번호  
    char    CvrgSeqno           [  10];    // [long  ,   10] 반대매매일련번
    char    RsvOrdNo            [  10];    // [long  ,   10] 예약주문번호  
    char    MnyOrdAmt           [  16];    // [long  ,   16] 현금주문금액  
    char    SubstOrdAmt         [  16];    // [long  ,   16] 대용주문금액  
    char    RuseOrdAmt          [  16];    // [long  ,   16] 재사용주문금액
    char    AcntNm              [  40];    // [string,   40] 계좌명        
    char    IsuNm               [  40];    // [string,   40] 종목명        
} CSPAT00700OutBlock2, *LPCSPAT00700OutBlock2;

/* 주식취소주문 */
typedef struct _CSPAT00800InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호        
    char    IsuNo               [  12];    // [string,   12] 종목번호            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    StrtgCode           [   6];    // [string,    6] 전략코드            
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차            
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
} CSPAT00800InBlock1, *LPCSPAT00800InBlock1;

typedef struct _CSPAT00800OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호          
    char    AcntNo              [  20];    // [string,   20] 계좌번호            
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호        
    char    IsuNo               [  12];    // [string,   12] 종목번호            
    char    OrdQty              [  16];    // [long  ,   16] 주문수량            
    char    CommdaCode          [   2];    // [string,    2] 통신매체코드        
    char    GrpId               [  20];    // [string,   20] 그룹ID              
    char    StrtgCode           [   6];    // [string,    6] 전략코드            
    char    OrdSeqNo            [  10];    // [long  ,   10] 주문회차            
    char    PtflNo              [  10];    // [long  ,   10] 포트폴리오번호      
    char    BskNo               [  10];    // [long  ,   10] 바스켓번호          
    char    TrchNo              [  10];    // [long  ,   10] 트렌치번호          
    char    ItemNo              [  10];    // [long  ,   10] 아이템번호          
} CSPAT00800OutBlock1, *LPCSPAT00800OutBlock1;

typedef struct _CSPAT00800OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수          
    char    OrdNo               [  10];    // [long  ,   10] 주문번호            
    char    PrntOrdNo           [  10];    // [long  ,   10] 모주문번호          
    char    OrdTime             [   9];    // [string,    9] 주문시각            
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드        
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드        
    char    ShtnIsuNo           [   9];    // [string,    9] 단축종목번호        
    char    PrgmOrdprcPtnCode   [   2];    // [string,    2] 프로그램호가유형코드
    char    StslOrdprcTpCode    [   1];    // [string,    1] 공매도호가구분      
    char    StslAbleYn          [   1];    // [string,    1] 공매도가능여부      
    char    MgntrnCode          [   3];    // [string,    3] 신용거래코드        
    char    LoanDt              [   8];    // [string,    8] 대출일              
    char    CvrgOrdTp           [   1];    // [string,    1] 반대매매주문구분    
    char    LpYn                [   1];    // [string,    1] 유동성공급자여부    
    char    MgempNo             [   9];    // [string,    9] 관리사원번호        
    char    BnsTpCode           [   1];    // [string,    1] 매매구분            
    char    SpareOrdNo          [  10];    // [long  ,   10] 예비주문번호        
    char    CvrgSeqno           [  10];    // [long  ,   10] 반대매매일련번호    
    char    RsvOrdNo            [  10];    // [long  ,   10] 예약주문번호        
    char    AcntNm              [  40];    // [string,   40] 계좌명              
    char    IsuNm               [  40];    // [string,   40] 종목명              
} CSPAT00800OutBlock2, *LPCSPAT00800OutBlock2;

/* 현물계좌주문체결내역조회 */
typedef struct _CSPAQ03700InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    AcntNo              [  20];    // [string,   20] 계좌번호        
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호    
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분        
    char    IsuNo               [  12];    // [string,   12] 종목번호        
    char    ExecYn              [   1];    // [string,    1] 체결여부        
    char    OrdDt               [   8];    // [string,    8] 주문일          
    char    SrtOrdNo2           [  10];    // [long  ,   10] 시작주문번호2   
    char    BkseqTpCode         [   1];    // [string,    1] 역순구분        
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드    
} CSPAQ03700InBlock1, *LPCSPAQ03700InBlock1;

typedef struct _CSPAQ03700OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    AcntNo              [  20];    // [string,   20] 계좌번호        
    char    InptPwd             [   8];    // [string,    8] 입력비밀번호    
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드    
    char    BnsTpCode           [   1];    // [string,    1] 매매구분        
    char    IsuNo               [  12];    // [string,   12] 종목번호        
    char    ExecYn              [   1];    // [string,    1] 체결여부        
    char    OrdDt               [   8];    // [string,    8] 주문일          
    char    SrtOrdNo2           [  10];    // [long  ,   10] 시작주문번호2   
    char    BkseqTpCode         [   1];    // [string,    1] 역순구분        
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드    
} CSPAQ03700OutBlock1, *LPCSPAQ03700OutBlock1;

typedef struct _CSPAQ03700OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수      
    char    SellExecAmt         [  16];    // [long  ,   16] 매도체결금액    
    char    BuyExecAmt          [  16];    // [long  ,   16] 매수체결금액    
    char    SellExecQty         [  16];    // [long  ,   16] 매도체결수량    
    char    BuyExecQty          [  16];    // [long  ,   16] 매수체결수량    
    char    SellOrdQty          [  16];    // [long  ,   16] 매도주문수량    
    char    BuyOrdQty           [  16];    // [long  ,   16] 매수주문수량    
} CSPAQ03700OutBlock2, *LPCSPAQ03700OutBlock2;

typedef struct _CSPAQ03700OutBlock3
{
    char    OrdDt               [   8];    // [string,    8] 주문일          
    char    MgmtBrnNo           [   3];    // [string,    3] 관리지점번호    
    char    OrdMktCode          [   2];    // [string,    2] 주문시장코드    
    char    OrdNo               [  10];    // [long  ,   10] 주문번호        
    char    OrgOrdNo            [  10];    // [long  ,   10] 원주문번호      
    char    IsuNo               [  12];    // [string,   12] 종목번호        
    char    IsuNm               [  40];    // [string,   40] 종목명          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분        
    char    BnsTpNm             [  10];    // [string,   10] 매매구분        
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드    
    char    OrdPtnNm            [  40];    // [string,   40] 주문유형명      
    char    OrdTrxPtnCode       [   9];    // [long  ,    9] 주문처리유형코드
    char    OrdTrxPtnNm         [  50];    // [string,   50] 주문처리유형명  
    char    MrcTpCode           [   1];    // [string,    1] 정정취소구분    
    char    MrcTpNm             [  10];    // [string,   10] 정정취소구분명  
    char    MrcQty              [  16];    // [long  ,   16] 정정취소수량    
    char    MrcAbleQty          [  16];    // [long  ,   16] 정정취소가능수량
    char    OrdQty              [  16];    // [long  ,   16] 주문수량        
    char    OrdPrc              [  15];    // [double, 15.2] 주문가격        
    char    ExecQty             [  16];    // [long  ,   16] 체결수량        
    char    ExecPrc             [  15];    // [double, 15.2] 체결가          
    char    ExecTrxTime         [   9];    // [string,    9] 체결처리시각    
    char    LastExecTime        [   9];    // [string,    9] 최종체결시각    
    char    OrdprcPtnCode       [   2];    // [string,    2] 호가유형코드    
    char    OrdprcPtnNm         [  40];    // [string,   40] 호가유형명      
    char    OrdCndiTpCode       [   1];    // [string,    1] 주문조건구분    
    char    AllExecQty          [  16];    // [long  ,   16] 전체체결수량    
    char    RegCommdaCode       [   2];    // [string,    2] 통신매체코드    
    char    CommdaNm            [  40];    // [string,   40] 통신매체명      
    char    MbrNo               [   3];    // [string,    3] 회원번호        
    char    RsvOrdYn            [   1];    // [string,    1] 예약주문여부    
    char    LoanDt              [   8];    // [string,    8] 대출일          
    char    OrdTime             [   9];    // [string,    9] 주문시각        
    char    OpDrtnNo            [  12];    // [string,   12] 운용지시번호    
    char    OdrrId              [  16];    // [string,   16] 주문자ID        
} CSPAQ03700OutBlock3, *LPCSPAQ03700OutBlock3;

/* 현물계좌예수금 주문가능금액 총평가조회 */
typedef struct _CSPAQ02200InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수                  
    char    MgmtBrnNo           [   3];    // [string,    3] 관리지점번호                
    char    AcntNo              [  20];    // [string,   20] 계좌번호                    
    char    Pwd                 [   8];    // [string,    8] 비밀번호                    
    char    BalCreTp            [   1];    // [string,    1] 잔고생성구분                
} CSPAQ02200InBlock1, *LPCSPAQ02200InBlock1;

typedef struct _CSPAQ02200OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수                  
    char    MgmtBrnNo           [   3];    // [string,    3] 관리지점번호                
    char    AcntNo              [  20];    // [string,   20] 계좌번호                    
    char    Pwd                 [   8];    // [string,    8] 비밀번호                    
    char    BalCreTp            [   1];    // [string,    1] 잔고생성구분                
} CSPAQ02200OutBlock1, *LPCSPAQ02200OutBlock1;

typedef struct _CSPAQ02200OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수             
    char    BrnNm               [  40];    // [string,   40] 지점명                
    char    AcntNm              [  40];    // [string,   40] 계좌명               
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액    
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] 출금가능금액       
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] 거래소금액        
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] 코스닥금액            
    char    BalEvalAmt          [  16];    // [long  ,   16] 잔고평가금액           
    char    RcvblAmt            [  16];    // [long  ,   16] 미수금액                
    char    DpsastTotamt        [  16];    // [long  ,   16] 예탁자산총액   
    char    PnlRat              [  18];    // [double, 18.6] 손익율         
    char    InvstOrgAmt         [  20];    // [long  ,   20] 투자원금        
    char    InvstPlAmt          [  16];    // [long  ,   16] 투자손익금액     
    char    CrdtPldgOrdAmt      [  16];    // [long  ,   16] 신용담보주문금액  
    char    Dps                 [  16];    // [long  ,   16] 예수금         
    char    SubstAmt            [  16];    // [long  ,   16] 대용금액        
    char    D1Dps               [  16];    // [long  ,   16] D1예수금         
    char    D2Dps               [  16];    // [long  ,   16] D2예수금          
    char    MnyrclAmt           [  16];    // [long  ,   16] 현금미수금액       
    char    MgnMny              [  16];    // [long  ,   16] 증거금현금          
    char    MgnSubst            [  16];    // [long  ,   16] 증거금대용           
    char    ChckAmt             [  16];    // [long  ,   16] 수표금액              
    char    SubstOrdAbleAmt     [  16];    // [long  ,   16] 대용주문가능금액       
    char    MgnRat100pctOrdAbleAmt[  16];  // [long  ,   16] 증거금100퍼센트주문가능금액
    char    MgnRat35ordAbleAmt  [  16];    // [long  ,   16] 증거금률35%주문가능금액 
    char    MgnRat50ordAbleAmt  [  16];    // [long  ,   16] 증거금률50%주문가능금액 
    char    PrdaySellAdjstAmt   [  16];    // [long  ,   16] 전일매도정산금액 
    char    PrdayBuyAdjstAmt    [  16];    // [long  ,   16] 전일매수정산금액 
    char    CrdaySellAdjstAmt   [  16];    // [long  ,   16] 금일매도정산금액 
    char    CrdayBuyAdjstAmt    [  16];    // [long  ,   16] 금일매수정산금액 
    char    D1ovdRepayRqrdAmt   [  16];    // [long  ,   16] D1연체변제소요금액
    char    D2ovdRepayRqrdAmt   [  16];    // [long  ,   16] D2연체변제소요금액 
    char    D1PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D1추정인출가능금액  
    char    D2PrsmptWthdwAbleAmt[  16];    // [long  ,   16] D2추정인출가능금액   
    char    DpspdgLoanAmt       [  16];    // [long  ,   16] 예탁담보대출금액      
    char    Imreq               [  16];    // [long  ,   16] 신용설정보증금    
    char    MloanAmt            [  16];    // [long  ,   16] 융자금액           
    char    ChgAfPldgRat        [   9];    // [double,  9.3] 변경후담보비율  
    char    OrgPldgAmt          [  16];    // [long  ,   16] 원담보금액    
    char    SubPldgAmt          [  16];    // [long  ,   16] 부담보금액     
    char    RqrdPldgAmt         [  16];    // [long  ,   16] 소요담보금액    
    char    OrgPdlckAmt         [  16];    // [long  ,   16] 원담보부족금액   
    char    PdlckAmt            [  16];    // [long  ,   16] 담보부족금액      
    char    AddPldgMny          [  16];    // [long  ,   16] 추가담보현금       
    char    D1OrdAbleAmt        [  16];    // [long  ,   16] D1주문가능금액      
    char    CrdtIntdltAmt       [  16];    // [long  ,   16] 신용이자미납금액     
    char    EtclndAmt           [  16];    // [long  ,   16] 기타대여금액         
    char    NtdayPrsmptCvrgAmt  [  16];    // [long  ,   16] 익일추정반대매매금액 
    char    OrgPldgSumAmt       [  16];    // [long  ,   16] 원담보합계금액    
    char    CrdtOrdAbleAmt      [  16];    // [long  ,   16] 신용주문가능금액  
    char    SubPldgSumAmt       [  16];    // [long  ,   16] 부담보합계금액    
    char    CrdtPldgAmtMny      [  16];    // [long  ,   16] 신용담보금현금    
    char    CrdtPldgSubstAmt    [  16];    // [long  ,   16] 신용담보대용금액    
    char    AddCrdtPldgMny      [  16];    // [long  ,   16] 추가신용담보현금     
    char    CrdtPldgRuseAmt     [  16];    // [long  ,   16] 신용담보재사용금액    
    char    AddCrdtPldgSubst    [  16];    // [long  ,   16] 추가신용담보대용       
    char    CslLoanAmtdt1       [  16];    // [long  ,   16] 매도대금담보대출금액    
    char    DpslRestrcAmt       [  16];    // [long  ,   16] 처분제한금액             
} CSPAQ02200OutBlock2, *LPCSPAQ02200OutBlock2;

/* 잔고, BEP단가조회 */
typedef struct _CSPAQ02300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수         
    char    AcntNo              [  20];    // [string,   20] 계좌번호         
    char    Pwd                 [   8];    // [string,    8] 비밀번호        
    char    BalCreTp            [   1];    // [string,    1] 잔고생성구분    
    char    CmsnAppTpCode       [   1];    // [string,    1] 수수료적용구분  
    char    D2balBaseQryTp      [   1];    // [string,    1] D2잔고기준조회구분     
    char    UprcTpCode          [   1];    // [string,    1] 단가구분              
} CSPAQ02300InBlock1, *LPCSPAQ02300InBlock1;

typedef struct _CSPAQ02300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수               
    char    AcntNo              [  20];    // [string,   20] 계좌번호                 
    char    Pwd                 [   8];    // [string,    8] 비밀번호                
    char    BalCreTp            [   1];    // [string,    1] 잔고생성구분           
    char    CmsnAppTpCode       [   1];    // [string,    1] 수수료적용구분        
    char    D2balBaseQryTp      [   1];    // [string,    1] D2잔고기준조회구분   
    char    UprcTpCode          [   1];    // [string,    1] 단가구분            
} CSPAQ02300OutBlock1, *LPCSPAQ02300OutBlock1;

typedef struct _CSPAQ02300OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수                 
    char    BrnNm               [  40];    // [string,   40] 지점명                    
    char    AcntNm              [  40];    // [string,   40] 계좌명                   
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액        
    char    MnyoutAbleAmt       [  16];    // [long  ,   16] 출금가능금액           
    char    SeOrdAbleAmt        [  16];    // [long  ,   16] 거래소금액            
    char    KdqOrdAbleAmt       [  16];    // [long  ,   16] 코스닥금액           
    char    HtsOrdAbleAmt       [  16];    // [long  ,   16] HTS주문가능금액     
    char    MgnRat100pctOrdAbleAmt[  16];  // [long  ,   16] 증거금률100주문가능금액
    char    BalEvalAmt          [  16];    // [long  ,   16] 잔고평가금액   
    char    PchsAmt             [  16];    // [long  ,   16] 매입금액      
    char    RcvblAmt            [  16];    // [long  ,   16] 미수금액     
    char    PnlRat              [  18];    // [double, 18.6] 손익율      
    char    InvstOrgAmt         [  20];    // [long  ,   20] 투자원금  
    char    InvstPlAmt          [  16];    // [long  ,   16] 투자손익금액        
    char    CrdtPldgOrdAmt      [  16];    // [long  ,   16] 신용담보주문금액   
    char    Dps                 [  16];    // [long  ,   16] 예수금            
    char    D1Dps               [  16];    // [long  ,   16] D1예수금         
    char    D2Dps               [  16];    // [long  ,   16] D2예수금        
    char    OrdDt               [   8];    // [string,    8] 주문일         
    char    MnyMgn              [  16];    // [long  ,   16] 현금증거금액  
    char    SubstMgn            [  16];    // [long  ,   16] 대용증거금액 
    char    SubstAmt            [  16];    // [long  ,   16] 대용금액    
    char    PrdayBuyExecAmt     [  16];    // [long  ,   16] 전일매수체결금액        
    char    PrdaySellExecAmt    [  16];    // [long  ,   16] 전일매도체결금액       
    char    CrdayBuyExecAmt     [  16];    // [long  ,   16] 금일매수체결금액      
    char    CrdaySellExecAmt    [  16];    // [long  ,   16] 금일매도체결금액     
    char    EvalPnlSum          [  15];    // [long  ,   15] 평가손익합계        
    char    DpsastTotamt        [  16];    // [long  ,   16] 예탁자산총액       
    char    Evrprc              [  19];    // [long  ,   19] 제비용            
    char    RuseAmt             [  16];    // [long  ,   16] 재사용금액       
    char    EtclndAmt           [  16];    // [long  ,   16] 기타대여금액    
    char    PrcAdjstAmt         [  16];    // [long  ,   16] 가정산금액     
    char    D1CmsnAmt           [  16];    // [long  ,   16] D1수수료      
    char    D2CmsnAmt           [  16];    // [long  ,   16] D2수수료     
    char    D1EvrTax            [  16];    // [long  ,   16] D1제세금    
    char    D2EvrTax            [  16];    // [long  ,   16] D2제세금   
    char    D1SettPrergAmt      [  16];    // [long  ,   16] D1결제예정금액            
    char    D2SettPrergAmt      [  16];    // [long  ,   16] D2결제예정금액            
    char    PrdayKseMnyMgn      [  16];    // [long  ,   16] 전일KSE현금증거금         
    char    PrdayKseSubstMgn    [  16];    // [long  ,   16] 전일KSE대용증거금         
    char    PrdayKseCrdtMnyMgn  [  16];    // [long  ,   16] 전일KSE신용현금증거금     
    char    PrdayKseCrdtSubstMgn[  16];    // [long  ,   16] 전일KSE신용대용증거금     
    char    CrdayKseMnyMgn      [  16];    // [long  ,   16] 금일KSE현금증거금         
    char    CrdayKseSubstMgn    [  16];    // [long  ,   16] 금일KSE대용증거금         
    char    CrdayKseCrdtMnyMgn  [  16];    // [long  ,   16] 금일KSE신용현금증거금     
    char    CrdayKseCrdtSubstMgn[  16];    // [long  ,   16] 금일KSE신용대용증거금     
    char    PrdayKdqMnyMgn      [  16];    // [long  ,   16] 전일코스닥현금증거금      
    char    PrdayKdqSubstMgn    [  16];    // [long  ,   16] 전일코스닥대용증거금      
    char    PrdayKdqCrdtMnyMgn  [  16];    // [long  ,   16] 전일코스닥신용현금증거금  
    char    PrdayKdqCrdtSubstMgn[  16];    // [long  ,   16] 전일코스닥신용대용증거금  
    char    CrdayKdqMnyMgn      [  16];    // [long  ,   16] 금일코스닥현금증거금      
    char    CrdayKdqSubstMgn    [  16];    // [long  ,   16] 금일코스닥대용증거금      
    char    CrdayKdqCrdtMnyMgn  [  16];    // [long  ,   16] 금일코스닥신용현금증거금  
    char    CrdayKdqCrdtSubstMgn[  16];    // [long  ,   16] 금일코스닥신용대용증거금  
    char    PrdayFrbrdMnyMgn    [  16];    // [long  ,   16] 전일프리보드현금증거금    
    char    PrdayFrbrdSubstMgn  [  16];    // [long  ,   16] 전일프리보드대용증거금    
    char    CrdayFrbrdMnyMgn    [  16];    // [long  ,   16] 금일프리보드현금증거금    
    char    CrdayFrbrdSubstMgn  [  16];    // [long  ,   16] 금일프리보드대용증거금    
    char    PrdayCrbmkMnyMgn    [  16];    // [long  ,   16] 전일장외현금증거금        
    char    PrdayCrbmkSubstMgn  [  16];    // [long  ,   16] 전일장외대용증거금        
    char    CrdayCrbmkMnyMgn    [  16];    // [long  ,   16] 금일장외현금증거금        
    char    CrdayCrbmkSubstMgn  [  16];    // [long  ,   16] 금일장외대용증거금        
    char    DpspdgQty           [  16];    // [long  ,   16] 예탁담보수량              
    char    BuyAdjstAmtD2       [  16];    // [long  ,   16] 매수정산금(D+2)           
    char    SellAdjstAmtD2      [  16];    // [long  ,   16] 매도정산금(D+2)           
    char    RepayRqrdAmtD1      [  16];    // [long  ,   16] 변제소요금(D+1)         
    char    RepayRqrdAmtD2      [  16];    // [long  ,   16] 변제소요금(D+2)          
    char    LoanAmt             [  16];    // [long  ,   16] 대출금액               
} CSPAQ02300OutBlock2, *LPCSPAQ02300OutBlock2;

typedef struct _CSPAQ02300OutBlock3
{
    char    IsuNo               [  12];    // [string,   12] 종목번호              
    char    IsuNm               [  40];    // [string,   40] 종목명               
    char    SecBalPtnCode       [   2];    // [string,    2] 유가증권잔고유형코드
    char    SecBalPtnNm         [  40];    // [string,   40] 유가증권잔고유형명 
    char    BalQty              [  16];    // [long  ,   16] 잔고수량           
    char    BnsBaseBalQty       [  16];    // [long  ,   16] 매매기준잔고수량   
    char    CrdayBuyExecQty     [  16];    // [long  ,   16] 금일매수체결수량   
    char    CrdaySellExecQty    [  16];    // [long  ,   16] 금일매도체결수량   
    char    SellPrc             [  21];    // [double, 21.4] 매도가             
    char    BuyPrc              [  21];    // [double, 21.4] 매수가             
    char    SellPnlAmt          [  16];    // [long  ,   16] 매도손익금액       
    char    PnlRat              [  18];    // [double, 18.6] 손익율             
    char    NowPrc              [  15];    // [double, 15.2] 현재가             
    char    CrdtAmt             [  16];    // [long  ,   16] 신용금액           
    char    DueDt               [   8];    // [string,    8] 만기일            
    char    PrdaySellExecPrc    [  13];    // [double, 13.2] 전일매도체결가   
    char    PrdaySellQty        [  16];    // [long  ,   16] 전일매도수량    
    char    PrdayBuyExecPrc     [  13];    // [double, 13.2] 전일매수체결가 
    char    PrdayBuyQty         [  16];    // [long  ,   16] 전일매수수량  
    char    LoanDt              [   8];    // [string,    8] 대출일       
    char    AvrUprc             [  13];    // [double, 13.2] 평균단가              
    char    SellAbleQty         [  16];    // [long  ,   16] 매도가능수량         
    char    SellOrdQty          [  16];    // [long  ,   16] 매도주문수량        
    char    CrdayBuyExecAmt     [  16];    // [long  ,   16] 금일매수체결금액   
    char    CrdaySellExecAmt    [  16];    // [long  ,   16] 금일매도체결금액  
    char    PrdayBuyExecAmt     [  16];    // [long  ,   16] 전일매수체결금액  
    char    PrdaySellExecAmt    [  16];    // [long  ,   16] 전일매도체결금액  
    char    BalEvalAmt          [  16];    // [long  ,   16] 잔고평가금액      
    char    EvalPnl             [  16];    // [long  ,   16] 평가손익          
    char    MnyOrdAbleAmt       [  16];    // [long  ,   16] 현금주문가능금액  
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액      
    char    SellUnercQty        [  16];    // [long  ,   16] 매도미체결수량    
    char    SellUnsttQty        [  16];    // [long  ,   16] 매도미결제수량    
    char    BuyUnercQty         [  16];    // [long  ,   16] 매수미체결수량    
    char    BuyUnsttQty         [  16];    // [long  ,   16] 매수미결제수량    
    char    UnsttQty            [  16];    // [long  ,   16] 미결제수량        
    char    UnercQty            [  16];    // [long  ,   16] 미체결수량        
    char    PrdayCprc           [  15];    // [double, 15.2] 전일종가          
    char    PchsAmt             [  16];    // [long  ,   16] 매입금액          
    char    RegMktCode          [   2];    // [string,    2] 등록시장코드      
    char    LoanDtlClssCode     [   2];    // [string,    2] 대출상세분류코드  
    char    DpspdgLoanQty       [  16];    // [long  ,   16] 예탁담보대출수량  
} CSPAQ02300OutBlock3, *LPCSPAQ02300OutBlock3;

