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

/*-------------------------------------------------------------------------*/
/* 해외선물 전문헤더                                                       */
/*-------------------------------------------------------------------------*/
/* 해외선물 체결내역개별 조회 */
typedef struct _CIDBQ01400InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    QryTpCode           [   1];    // [string,    1] 조회구분코드          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
} CIDBQ01400InBlock1, *LPCIDBQ01400InBlock1;

typedef struct _CIDBQ01400OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    QryTpCode           [   1];    // [string,    1] 조회구분코드          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
} CIDBQ01400OutBlock1, *LPCIDBQ01400OutBlock1;

typedef struct _CIDBQ01400OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdAbleQty          [  16];    // [long  ,   16] 주문가능수량          
} CIDBQ01400OutBlock2, *LPCIDBQ01400OutBlock2;

/* 해외선물 미결제 잔고내역 */
typedef struct _CIDBQ01500InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntTpCode          [   1];    // [string,    1] 계좌구분코드          
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    FcmAcntNo           [  20];    // [string,   20] FCM계좌번호           
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    QryDt               [   8];    // [string,    8] 조회일자              
    char    BalTpCode           [   1];    // [string,    1] 잔고구분코드          
} CIDBQ01500InBlock1, *LPCIDBQ01500InBlock1;

typedef struct _CIDBQ01500OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntTpCode          [   1];    // [string,    1] 계좌구분코드          
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    FcmAcntNo           [  20];    // [string,   20] FCM계좌번호           
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    QryDt               [   8];    // [string,    8] 조회일자              
    char    BalTpCode           [   1];    // [string,    1] 잔고구분코드          
} CIDBQ01500OutBlock1, *LPCIDBQ01500OutBlock1;

typedef struct _CIDBQ01500OutBlock2
{
    char    BaseDt              [   8];    // [string,    8] 기준일자              
    char    Dps                 [  16];    // [long  ,   16] 예수금                
    char    LpnlAmt             [  19];    // [double, 19.2] 청산손익금액          
    char    FutsDueBfLpnlAmt    [  23];    // [double, 23.2] 선물만기전청산손익금액
    char    FutsDueBfCmsn       [  23];    // [double, 23.2] 선물만기전수수료      
    char    CsgnMgn             [  16];    // [long  ,   16] 위탁증거금액          
    char    MaintMgn            [  16];    // [long  ,   16] 유지증거금            
    char    CtlmtAmt            [  23];    // [double, 23.2] 신용한도금액          
    char    AddMgn              [  16];    // [long  ,   16] 추가증거금액          
    char    MgnclRat            [  27];    // [double,27.10] 마진콜율              
    char    OrdAbleAmt          [  16];    // [long  ,   16] 주문가능금액          
    char    WthdwAbleAmt        [  16];    // [long  ,   16] 인출가능금액          
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    IsuNm               [  50];    // [string,   50] 종목명                
    char    CrcyCodeVal         [   3];    // [string,    3] 통화코드값            
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] 해외파생상품코드      
    char    OvrsDrvtOptTpCode   [   1];    // [string,    1] 해외파생옵션구분코드  
    char    DueDt               [   8];    // [string,    8] 만기일자              
    char    OvrsDrvtXrcPrc      [  25];    // [double, 25.8] 해외파생행사가격      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    CmnCodeNm           [ 100];    // [string,  100] 공통코드명            
    char    TpCodeNm            [  50];    // [string,   50] 구분코드명            
    char    BalQty              [  16];    // [long  ,   16] 잔고수량              
    char    PchsPrc             [  25];    // [double, 25.8] 매입가격              
    char    OvrsDrvtNowPrc      [  25];    // [double, 25.8] 해외파생현재가        
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] 해외선물평가손익금액  
    char    CsgnCmsn            [  19];    // [double, 19.2] 위탁수수료            
    char    PosNo               [  13];    // [string,   13] 포지션번호            
    char    EufOneCmsnAmt       [  19];    // [double, 19.2] 거래소비용1수수료금액 
    char    EufTwoCmsnAmt       [  19];    // [double, 19.2] 거래소비용2수수료금액 
} CIDBQ01500OutBlock2, *LPCIDBQ01500OutBlock2;

/* 해외선물 주문체결내역 조회 */ 
typedef struct _CIDBQ01800InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    ThdayTpCode         [   1];    // [string,    1] 당일구분코드          
    char    OrdStatCode         [   1];    // [string,    1] 주문상태코드          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    QryTpCode           [   1];    // [string,    1] 조회구분코드          
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드          
} CIDBQ01800InBlock1, *LPCIDBQ01800InBlock1;

typedef struct _CIDBQ01800OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    ThdayTpCode         [   1];    // [string,    1] 당일구분코드          
    char    OrdStatCode         [   1];    // [string,    1] 주문상태코드          
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    QryTpCode           [   1];    // [string,    1] 조회구분코드          
    char    OrdPtnCode          [   2];    // [string,    2] 주문유형코드          
} CIDBQ01800OutBlock1, *LPCIDBQ01800OutBlock1;

typedef struct _CIDBQ01800OutBlock2
{
    char    OvrsFutsOrdNo       [  10];    // [string,   10] 해외선물주문번호      
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] 해외선물원주문번호    
    char    FcmOrdNo            [  15];    // [string,   15] FCM주문번호           
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    IsuNm               [  50];    // [string,   50] 종목명                
    char    AbrdFutsXrcPrc      [  29];    // [double,29.10] 해외선물행사가격      
    char    FcmAcntNo           [  20];    // [string,   20] FCM계좌번호           
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    BnsTpNm             [  10];    // [string,   10] 매매구분명            
    char    FutsOrdStatCode     [   1];    // [string,    1] 선물주문상태코드      
    char    TpCodeNm            [  50];    // [string,   50] 구분코드명            
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    TrdTpNm             [  20];    // [string,   20] 거래구분명            
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] 해외선물주문유형코드  
    char    OrdPtnNm            [  40];    // [string,   40] 주문유형명            
    char    OrdPtnTermTpCode    [   2];    // [string,    2] 주문유형기간구분코드  
    char    CmnCodeNm           [ 100];    // [string,  100] 공통코드명            
    char    AppSrtDt            [   8];    // [string,    8] 적용시작일자          
    char    AppEndDt            [   8];    // [string,    8] 적용종료일자          
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] 해외파생주문가격      
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    AbrdFutsExecPrc     [  29];    // [double,29.10] 해외선물체결가격      
    char    ExecQty             [  16];    // [long  ,   16] 체결수량              
    char    OrdCndiPrc          [  25];    // [double, 25.8] 주문조건가격          
    char    OvrsDrvtNowPrc      [  25];    // [double, 25.8] 해외파생현재가        
    char    MdfyQty             [  16];    // [long  ,   16] 정정수량              
    char    CancQty             [  16];    // [long  ,   16] 취소수량              
    char    RjtQty              [  13];    // [long  ,   13] 거부수량              
    char    CnfQty              [  16];    // [long  ,   16] 확인수량              
    char    CvrgYn              [   1];    // [string,    1] 반대매매여부          
    char    RegTmnlNo           [   3];    // [string,    3] 등록단말번호          
    char    RegBrnNo            [   3];    // [string,    3] 등록지점번호          
    char    RegUserId           [  16];    // [string,   16] 등록사용자ID          
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    OrdTime             [   9];    // [string,    9] 주문시각              
} CIDBQ01800OutBlock2, *LPCIDBQ01800OutBlock2;

/* 해외선물 계좌예탁자산조회 */
typedef struct _CIDBQ05300InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OvrsAcntTpCode      [   1];    // [string,    1] 해외계좌구분코드      
    char    FcmAcntNo           [  20];    // [string,   20] FCM계좌번호           
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    AcntPwd             [   8];    // [string,    8] 계좌비밀번호          
    char    CrcyCode            [   3];    // [string,    3] 통화코드              
} CIDBQ05300InBlock1, *LPCIDBQ05300InBlock1;

typedef struct _CIDBQ05300OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OvrsAcntTpCode      [   1];    // [string,    1] 해외계좌구분코드      
    char    FcmAcntNo           [  20];    // [string,   20] FCM계좌번호           
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    AcntPwd             [   8];    // [string,    8] 계좌비밀번호          
    char    CrcyCode            [   3];    // [string,    3] 통화코드              
} CIDBQ05300OutBlock1, *LPCIDBQ05300OutBlock1;

typedef struct _CIDBQ05300OutBlock2
{
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    CrcyCode            [   3];    // [string,    3] 통화코드              
    char    OvrsFutsDps         [  23];    // [double, 23.2] 해외선물예수금        
    char    AbrdFutsCsgnMgn     [  19];    // [double, 19.2] 해외선물위탁증거금액  
    char    OvrsFutsSplmMgn     [  23];    // [double, 23.2] 해외선물추가증거금    
    char    CustmLpnlAmt        [  19];    // [double, 19.2] 고객청산손익금액      
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] 해외선물평가손익금액  
    char    AbrdFutsCmsnAmt     [  19];    // [double, 19.2] 해외선물수수료금액    
    char    AbrdFutsEvalDpstgTotAmt[  19];    // [double, 19.2] 해외선물평가예탁총?
    char    Xchrat              [  15];    // [double, 15.4] 환율                  
    char    FcurrRealMxchgAmt   [  19];    // [double, 19.2] 외화실환전금액        
    char    AbrdFutsWthdwAbleAmt[  19];    // [double, 19.2] 해외선물인출가능금액  
    char    AbrdFutsOrdAbleAmt  [  19];    // [double, 19.2] 해외선물주문가능금액  
    char    FutsDueNarrvLqdtPnlAmt[  19];    // [double, 19.2] 선물만기미도래청산손
    char    FutsDueNarrvCmsn    [  19];    // [double, 19.2] 선물만기미도래수수료  
    char    AbrdFutsLqdtPnlAmt  [  19];    // [double, 19.2] 해외선물청산손익금액  
    char    OvrsFutsDueCmsn     [  19];    // [double, 19.2] 해외선물만기수수료    
    char    OvrsFutsOptBuyAmt   [  23];    // [double, 23.2] 해외선물옵션매수금액  
    char    OvrsFutsOptSellAmt  [  23];    // [double, 23.2] 해외선물옵션매도금액  
    char    OptBuyMktWrthAmt    [  19];    // [double, 19.2] 옵션매수시장가치금액  
    char    OptSellMktWrthAmt   [  19];    // [double, 19.2] 옵션매도시장가치금액  
} CIDBQ05300OutBlock2, *LPCIDBQ05300OutBlock2;

typedef struct _CIDBQ05300OutBlock3
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OvrsFutsDps         [  23];    // [double, 23.2] 해외선물예수금        
    char    AbrdFutsLqdtPnlAmt  [  19];    // [double, 19.2] 해외선물청산손익금액  
    char    FutsDueNarrvLqdtPnlAmt[  19];    // [double, 19.2] 선물만기미도래청산손
    char    AbrdFutsEvalPnlAmt  [  19];    // [double, 19.2] 해외선물평가손익금액  
    char    AbrdFutsEvalDpstgTotAmt[  19];    // [double, 19.2] 해외선물평가예탁총?
    char    CustmLpnlAmt        [  19];    // [double, 19.2] 고객청산손익금액      
    char    OvrsFutsDueCmsn     [  19];    // [double, 19.2] 해외선물만기수수료    
    char    FcurrRealMxchgAmt   [  19];    // [double, 19.2] 외화실환전금액        
    char    AbrdFutsCmsnAmt     [  19];    // [double, 19.2] 해외선물수수료금액    
    char    FutsDueNarrvCmsn    [  19];    // [double, 19.2] 선물만기미도래수수료  
    char    AbrdFutsCsgnMgn     [  19];    // [double, 19.2] 해외선물위탁증거금액  
    char    OvrsFutsMaintMgn    [  19];    // [double, 19.2] 해외선물유지증거금    
    char    OvrsFutsOptBuyAmt   [  23];    // [double, 23.2] 해외선물옵션매수금액  
    char    OvrsFutsOptSellAmt  [  23];    // [double, 23.2] 해외선물옵션매도금액  
    char    CtlmtAmt            [  23];    // [double, 23.2] 신용한도금액          
    char    OvrsFutsSplmMgn     [  23];    // [double, 23.2] 해외선물추가증거금    
    char    MgnclRat            [  27];    // [double,27.10] 마진콜율              
    char    AbrdFutsOrdAbleAmt  [  19];    // [double, 19.2] 해외선물주문가능금액  
    char    AbrdFutsWthdwAbleAmt[  19];    // [double, 19.2] 해외선물인출가능금액  
    char    OptBuyMktWrthAmt    [  19];    // [double, 19.2] 옵션매수시장가치금액  
    char    OptSellMktWrthAmt   [  19];    // [double, 19.2] 옵션매도시장가치금액  
} CIDBQ05300OutBlock3, *LPCIDBQ05300OutBlock3;

/* 해외선물신규주문 */
typedef struct _CIDBT00100InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    BrnCode             [   7];    // [string,    7] 지점코드              
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] 해외선물주문유형코드  
    char    CrcyCode            [   3];    // [string,    3] 통화코드              
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] 해외파생주문가격      
    char    CndiOrdPrc          [  25];    // [double, 25.8] 조건주문가격          
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    PrdtCode            [   6];    // [string,    6] 상품코드              
    char    DueYymm             [   6];    // [string,    6] 만기년월              
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT00100InBlock1, *LPCIDBT00100InBlock1;


typedef struct _CIDBT00100OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    BrnCode             [   7];    // [string,    7] 지점코드              
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    AbrdFutsOrdPtnCode  [   1];    // [string,    1] 해외선물주문유형코드  
    char    CrcyCode            [   3];    // [string,    3] 통화코드              
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] 해외파생주문가격      
    char    CndiOrdPrc          [  25];    // [double, 25.8] 조건주문가격          
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    PrdtCode            [   6];    // [string,    6] 상품코드              
    char    DueYymm             [   6];    // [string,    6] 만기년월              
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT00100OutBlock1, *LPCIDBT00100OutBlock1;


typedef struct _CIDBT00100OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] 해외선물주문번호      
} CIDBT00100OutBlock2, *LPCIDBT00100OutBlock2;


/* 해외선물정정주문 */
typedef struct _CIDBT00900InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    RegBrnNo            [   3];    // [string,    3] 등록지점번호          
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] 해외선물원주문번호    
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    FutsOrdPtnCode      [   1];    // [string,    1] 선물주문유형코드      
    char    CrcyCodeVal         [   3];    // [string,    3] 통화코드값            
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] 해외파생주문가격      
    char    CndiOrdPrc          [  25];    // [double, 25.8] 조건주문가격          
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] 해외파생상품코드      
    char    DueYymm             [   6];    // [string,    6] 만기년월              
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT00900InBlock1, *LPCIDBT00900InBlock1;


typedef struct _CIDBT00900OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    RegBrnNo            [   3];    // [string,    3] 등록지점번호          
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] 해외선물원주문번호    
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    BnsTpCode           [   1];    // [string,    1] 매매구분코드          
    char    FutsOrdPtnCode      [   1];    // [string,    1] 선물주문유형코드      
    char    CrcyCodeVal         [   3];    // [string,    3] 통화코드값            
    char    OvrsDrvtOrdPrc      [  25];    // [double, 25.8] 해외파생주문가격      
    char    CndiOrdPrc          [  25];    // [double, 25.8] 조건주문가격          
    char    OrdQty              [  16];    // [long  ,   16] 주문수량              
    char    OvrsDrvtPrdtCode    [  10];    // [string,   10] 해외파생상품코드      
    char    DueYymm             [   6];    // [string,    6] 만기년월              
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT00900OutBlock1, *LPCIDBT00900OutBlock1;


typedef struct _CIDBT00900OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] 해외선물주문번호      
    char    InnerMsgCnts        [  80];    // [string,   80] 내부메시지내용        
} CIDBT00900OutBlock2, *LPCIDBT00900OutBlock2;


/* 해외선물취소주문 */
typedef struct _CIDBT01000InBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    BrnNo               [   3];    // [string,    3] 지점번호              
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] 해외선물원주문번호    
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    PrdtTpCode          [   2];    // [string,    2] 상품구분코드          
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT01000InBlock1, *LPCIDBT01000InBlock1;


typedef struct _CIDBT01000OutBlock1
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    OrdDt               [   8];    // [string,    8] 주문일자              
    char    BrnNo               [   3];    // [string,    3] 지점번호              
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    Pwd                 [   8];    // [string,    8] 비밀번호              
    char    IsuCodeVal          [  18];    // [string,   18] 종목코드값            
    char    OvrsFutsOrgOrdNo    [  10];    // [string,   10] 해외선물원주문번호    
    char    FutsOrdTpCode       [   1];    // [string,    1] 선물주문구분코드      
    char    PrdtTpCode          [   2];    // [string,    2] 상품구분코드          
    char    ExchCode            [  10];    // [string,   10] 거래소코드            
} CIDBT01000OutBlock1, *LPCIDBT01000OutBlock1;


typedef struct _CIDBT01000OutBlock2
{
    char    RecCnt              [   5];    // [long  ,    5] 레코드갯수            
    char    AcntNo              [  20];    // [string,   20] 계좌번호              
    char    OvrsFutsOrdNo       [  10];    // [string,   10] 해외선물주문번호      
    char    InnerMsgCnts        [  80];    // [string,   80] 내부메시지내용        
} CIDBT01000OutBlock2, *LPCIDBT01000OutBlock2;


/*-------------------------------------------------------------------------*/
/* 해외선물 체결RD헤더                                                     */
/*-------------------------------------------------------------------------*/
/* 해외선물주문접수 */
typedef struct _TC1_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] 라인일련번호      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] 조작자ID          
    char    svc_id              [   4];    // [string,    4] 서비스ID          
    char    ordr_dt             [   8];    // [string,    8] 주문일자          
    char    brn_cd              [   3];    // [string,    3] 지점번호          
    char    ordr_no             [  10];    // [long  ,   10] 주문번호          
    char    orgn_ordr_no        [  10];    // [long  ,   10] 원주문번호        
    char    mthr_ordr_no        [  10];    // [long  ,   10] 모주문번호        
    char    ac_no               [  11];    // [string,   11] 계좌번호          
    char    is_cd               [  30];    // [string,   30] 종목코드          
    char    s_b_ccd             [   1];    // [string,    1] 매도매수유형      
    char    ordr_ccd            [   1];    // [string,    1] 정정취소유형      
    char    ordr_typ_cd         [   1];    // [string,    1] 주문유형코드      
    char    ordr_typ_prd_ccd    [   2];    // [string,    2] 주문기간코드      
    char    ordr_aplc_strt_dt   [   8];    // [string,    8] 주문적용시작일자  
    char    ordr_aplc_end_dt    [   8];    // [string,    8] 주문적용종료일자  
    char    ordr_prc            [  15];    // [double, 15.8] 주문가격          
    char    cndt_ordr_prc       [  15];    // [double, 15.8] 주문조건가격      
    char    ordr_q              [  12];    // [long  ,   12] 주문수량          
    char    ordr_tm             [   9];    // [string,    9] 주문시간          
    char    userid              [   8];    // [string,    8] 사용자ID          
} TC1_OutBlock, *LPTC1_OutBlock;

/* 해외선물주문응답 */
typedef struct _TC2_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] 라인일련번호      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] 조작자ID          
    char    svc_id              [   4];    // [string,    4] 서비스ID          
    char    ordr_dt             [   8];    // [string,    8] 주문일자          
    char    brn_cd              [   3];    // [string,    3] 지점번호          
    char    ordr_no             [  10];    // [long  ,   10] 주문번호          
    char    orgn_ordr_no        [  10];    // [long  ,   10] 원주문번호        
    char    mthr_ordr_no        [  10];    // [long  ,   10] 모주문번호        
    char    ac_no               [  11];    // [string,   11] 계좌번호          
    char    is_cd               [  30];    // [string,   30] 종목코드          
    char    s_b_ccd             [   1];    // [string,    1] 매도매수유형      
    char    ordr_ccd            [   1];    // [string,    1] 정정취소유형      
    char    ordr_typ_cd         [   1];    // [string,    1] 주문유형코드      
    char    ordr_typ_prd_ccd    [   2];    // [string,    2] 주문기간코드      
    char    ordr_aplc_strt_dt   [   8];    // [string,    8] 주문적용시작일자  
    char    ordr_aplc_end_dt    [   8];    // [string,    8] 주문적용종료일자  
    char    ordr_prc            [  15];    // [double, 15.8] 주문가격          
    char    cndt_ordr_prc       [  15];    // [double, 15.8] 주문조건가격      
    char    ordr_q              [  12];    // [long  ,   12] 주문수량          
    char    ordr_tm             [   9];    // [string,    9] 주문시간          
    char    cnfr_q              [  12];    // [long  ,   12] 호가확인수량      
    char    rfsl_cd             [   4];    // [string,    4] 호가거부사유코드  
    char    text                [ 300];    // [string,  300] 호가거부사유코드명
} TC2_OutBlock, *LPTC2_OutBlock;

/* 해외선물체결 */
typedef struct _TC3_OutBlock
{
    char    lineseq             [  10];    // [long  ,   10] 라인일련번호      
    char    key                 [  11];    // [string,   11] KEY               
    char    user                [   8];    // [string,    8] 조작자ID          
    char    svc_id              [   4];    // [string,    4] 서비스ID          
    char    ordr_dt             [   8];    // [string,    8] 주문일자          
    char    brn_cd              [   3];    // [string,    3] 지점번호          
    char    ordr_no             [  10];    // [long  ,   10] 주문번호          
    char    orgn_ordr_no        [  10];    // [long  ,   10] 원주문번호        
    char    mthr_ordr_no        [  10];    // [long  ,   10] 모주문번호        
    char    ac_no               [  11];    // [string,   11] 계좌번호          
    char    is_cd               [  30];    // [string,   30] 종목코드          
    char    s_b_ccd             [   1];    // [string,    1] 매도매수유형      
    char    ordr_ccd            [   1];    // [string,    1] 정정취소유형      
    char    ccls_q              [  15];    // [long  ,   15] 체결수량          
    char    ccls_prc            [  15];    // [double, 15.8] 체결가격          
    char    ccls_no             [  10];    // [string,   10] 체결번호          
    char    ccls_tm             [   9];    // [string,    9] 체결시간          
    char    avg_byng_uprc       [  12];    // [double, 12.6] 매입평균단가      
    char    byug_amt            [  25];    // [double, 25.8] 매입금액          
    char    clr_pl_amt          [  19];    // [double, 19.2] 청산손익          
    char    ent_fee             [  19];    // [double, 19.2] 위탁수수료        
    char    fcm_fee             [  19];    // [double, 19.2] FCM수수료         
    char    userid              [   8];    // [string,    8] 사용자ID          
    char    now_prc             [  15];    // [double, 15.8] 현재가격          
    char    crncy_cd            [   3];    // [string,    3] 통화코드          
    char    mtrt_dt             [   8];    // [string,    8] 만기일자          
} TC3_OutBlock, *LPTC3_OutBlock;
