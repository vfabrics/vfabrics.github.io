/* ============================================================================== */
/* 현물 - 주문 접수                                                               */
/* ============================================================================== */                                                                               
typedef struct                                                               
{                                                                                                                    
    char    lineseq             [  10];   /* 라인일련번호                   */
    char    accno               [  11];   /* Push키                         */
    char    user                [   8];   /* 조작자ID                       */
    char    len                 [   6];   /* 헤더길이                       */
    char    gubun               [   1];   /* 헤더구분                       */
    char    compress            [   1];   /* 압축구분                       */
    char    encrypt             [   1];   /* 암호구분                       */
    char    offset              [   3];   /* 공통시작지점                   */
    char    trcode              [   8];   /* TRCODE                         */
    char    compid              [   3];   /* 이용사번호                     */
    char    userid              [  16];   /* 사용자ID                       */
    char    media               [   2];   /* 접속매체                       */
    char    ifid                [   3];   /* I/F일련번호                    */
    char    seq                 [   9];   /* 전문일련번호                   */
    char    trid                [  16];   /* TR추적ID                       */
    char    pubip               [  12];   /* 공인IP                         */
    char    prvip               [  12];   /* 사설IP                         */
    char    pcbpno              [   3];   /* 처리지점번호                   */
    char    bpno                [   3];   /* 지점번호                       */
    char    termno              [   8];   /* 단말번호                       */
    char    lang                [   1];   /* 언어구분                       */
    char    proctm              [   9];   /* AP처리시간                     */
    char    msgcode             [   4];   /* 메세지코드                     */
    char    outgu               [   1];   /* 메세지출력구분                 */
    char    compreq             [   1];   /* 압축요청구분                   */
    char    funckey             [   4];   /* 기능키                         */
    char    reqcnt              [   4];   /* 요청레코드개수                 */
    char    filler              [   6];   /* 예비영역                       */
    char    cont                [   1];   /* 연속구분                       */
    char    contkey             [  18];   /* 연속키값                       */
    char    varlen              [   2];   /* 가변시스템길이                 */
    char    varhdlen            [   2];   /* 가변해더길이                   */
    char    varmsglen           [   2];   /* 가변메시지길이                 */
    char    trsrc               [   1];   /* 조회발원지                     */
    char    eventid             [   4];   /* I/F이벤트ID                    */
    char    ifinfo              [   4];   /* I/F정보                        */
    char    filler1             [  41];   /* 예비영역                       */
    char    ordchegb            [   2];   /* 주문체결구분                   */
    char    marketgb            [   2];   /* 시장구분                       */
    char    ordgb               [   2];   /* 주문구분                       */
    char    orgordno            [  10];   /* 원주문번호                     */
    char    accno1              [  11];   /* 계좌번호                       */
    char    accno2              [   9];   /* 계좌번호                       */
    char    passwd              [   8];   /* 비밀번호                       */
    char    expcode             [  12];   /* 종목번호                       */
    char    shtcode             [   9];   /* 단축종목번호                   */
    char    hname               [  40];   /* 종목명                         */
    char    ordqty              [  16];   /* 주문수량                       */
    char    ordprice            [  13];   /* 주문가격                       */
    char    hogagb              [   1];   /* 주문조건                       */
    char    etfhogagb           [   2];   /* 호가유형코드                   */
    char    pgmtype             [   2];   /* 프로그램호가구분               */
    char    gmhogagb            [   1];   /* 공매도호가구분                 */
    char    gmhogayn            [   1];   /* 공매도가능여부                 */
    char    singb               [   3];   /* 신용구분                       */
    char    loandt              [   8];   /* 대출일                         */
    char    cvrgordtp           [   1];   /* 반대매매주문구분               */
    char    strtgcode           [   6];   /* 전략코드                       */
    char    groupid             [  20];   /* 그룹ID                         */
    char    ordseqno            [  10];   /* 주문회차                       */
    char    prtno               [  10];   /* 포트폴리오번호                 */
    char    basketno            [  10];   /* 바스켓번호                     */
    char    trchno              [  10];   /* 트렌치번호                     */
    char    itemno              [  10];   /* 아아템번호                     */
    char    brwmgmyn            [   1];   /* 차입구분                       */
    char    mbrno               [   3];   /* 회원사번호                     */
    char    procgb              [   1];   /* 처리구분                       */
    char    admbrchno           [   3];   /* 관리지점번호                   */
    char    futaccno            [  20];   /* 선물계좌번호                   */
    char    futmarketgb         [   1];   /* 선물상품구분                   */
    char    tongsingb           [   2];   /* 통신매체구분                   */
    char    lpgb                [   1];   /* 유동성공급자구분               */
    char    dummy               [  20];   /* DUMMY                          */
    char    ordno               [  10];   /* 주문번호                       */
    char    ordtm               [   9];   /* 주문시각                       */
    char    prntordno           [  10];   /* 모주문번호                     */
    char    mgempno             [   9];   /* 관리사원번호                   */
    char    orgordundrqty       [  16];   /* 원주문미체결수량               */
    char    orgordmdfyqty       [  16];   /* 원주문정정수량                 */
    char    ordordcancelqty     [  16];   /* 원주문취소수량                 */
    char    nmcpysndno          [  10];   /* 비회원사송신번호               */
    char    ordamt              [  16];   /* 주문금액                       */
    char    bnstp               [   1];   /* 매매구분                       */
    char    spareordno          [  10];   /* 예비주문번호                   */
    char    cvrgseqno           [  10];   /* 반대매매일련번호               */
    char    rsvordno            [  10];   /* 예약주문번호                   */
    char    mtordseqno          [  10];   /* 복수주문일련번호               */
    char    spareordqty         [  16];   /* 예비주문수량                   */
    char    orduserid           [  16];   /* 주문사원번호                   */
    char    spotordqty          [  16];   /* 실물주문수량                   */
    char    ordruseqty          [  16];   /* 재사용주문수량                 */
    char    mnyordamt           [  16];   /* 현금주문금액                   */
    char    ordsubstamt         [  16];   /* 주문대용금액                   */
    char    ruseordamt          [  16];   /* 재사용주문금액                 */
    char    ordcmsnamt          [  16];   /* 수수료주문금액                 */
    char    crdtuseamt          [  16];   /* 사용신용담보재사용금           */
    char    secbalqty           [  16];   /* 잔고수량                       */
    char    spotordableqty      [  16];   /* 실물가능수량                   */
    char    ordableruseqty      [  16];   /* 재사용가능수량(매도)           */
    char    flctqty             [  16];   /* 변동수량                       */
    char    secbalqtyd2         [  16];   /* 잔고수량(D2)                   */
    char    sellableqty         [  16];   /* 매도주문가능수량               */
    char    unercsellordqty     [  16];   /* 미체결매도주문수량             */
    char    avrpchsprc          [  13];   /* 평균매입가                     */
    char    pchsamt             [  16];   /* 매입금액                       */
    char    deposit             [  16];   /* 예수금                         */
    char    substamt            [  16];   /* 대용금                         */
    char    csgnmnymgn          [  16];   /* 위탁증거금현금                 */
    char    csgnsubstmgn        [  16];   /* 위탁증거금대용                 */
    char    crdtpldgruseamt     [  16];   /* 신용담보재사용금               */
    char    ordablemny          [  16];   /* 주문가능현금                   */
    char    ordablesubstamt     [  16];   /* 주문가능대용                   */
    char    ruseableamt         [  16];   /* 재사용가능금액                 */
} SC0_OutBlock;                                                                                  

/* ============================================================================== */
/* 현물 - 주문 체결                                                               */
/* ============================================================================== */
typedef struct 
{
    char    dgubun              [   3];    /* Data 구분 : 'SC1'                   */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호         */
    char    accno               [  11];    /* [string,   11] 계좌번호             */
    char    user                [   8];    /* [string,    8] 조작자ID             */
    char    len                 [   6];    /* [long  ,    6] 헤더길이             */
    char    gubun               [   1];    /* [string,    1] 헤더구분             */
    char    compress            [   1];    /* [string,    1] 압축구분             */
    char    encrypt             [   1];    /* [string,    1] 암호구분             */
    char    offset              [   3];    /* [long  ,    3] 공통시작지점         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] 이용사번호           */
    char    userid              [  16];    /* [string,   16] 사용자ID             */
    char    media               [   2];    /* [string,    2] 접속매체             */
    char    ifid                [   3];    /* [string,    3] I/F일련번호          */
    char    seq                 [   9];    /* [string,    9] 전문일련번호         */
    char    trid                [  16];    /* [string,   16] TR추적ID             */
    char    pubip               [  12];    /* [string,   12] 공인IP               */
    char    prvip               [  12];    /* [string,   12] 사설IP               */
    char    pcbpno              [   3];    /* [string,    3] 처리지점번호         */
    char    bpno                [   3];    /* [string,    3] 지점번호             */
    char    termno              [   8];    /* [string,    8] 단말번호             */
    char    lang                [   1];    /* [string,    1] 언어구분             */
    char    proctm              [   9];    /* [long  ,    9] AP처리시간           */
    char    msgcode             [   4];    /* [string,    4] 메세지코드           */
    char    outgu               [   1];    /* [string,    1] 메세지출력구분       */
    char    compreq             [   1];    /* [string,    1] 압축요청구분         */
    char    funckey             [   4];    /* [string,    4] 기능키               */
    char    reqcnt              [   4];    /* [long  ,    4] 요청레코드개수       */
    char    filler              [   6];    /* [string,    6] 예비영역             */
    char    cont                [   1];    /* [string,    1] 연속구분             */
    char    contkey             [  18];    /* [string,   18] 연속키값             */
    char    varlen              [   2];    /* [long  ,    2] 가변시스템길이       */
    char    varhdlen            [   2];    /* [long  ,    2] 가변해더길이         */
    char    varmsglen           [   2];    /* [long  ,    2] 가변메시지길이       */
    char    trsrc               [   1];    /* [string,    1] 조회발원지           */
    char    eventid             [   4];    /* [string,    4] I/F이벤트ID          */
    char    ifinfo              [   4];    /* [string,    4] I/F정보              */
    char    filler1             [  41];    /* [string,   41] 예비영역             */
    char    ordxctptncode       [   2];    /* [string,    2] 주문체결유형코드     */
    char    ordmktcode          [   2];    /* [string,    2] 주문시장코드         */
    char    ordptncode          [   2];    /* [string,    2] 주문유형코드         */
    char    mgmtbrnno           [   3];    /* [string,    3] 관리지점번호         */
    char    accno1              [  20];    /* [string,   20] 계좌번호             */
    char    acntnm              [  40];    /* [string,   40] 계좌명               */
    char    Isuno               [  12];    /* [string,   12] 종목번호             */
    char    Isunm               [  40];    /* [string,   40] 종목명               */
    char    ordno1              [   5];    /* [long  ,    5] 주문번호             */
    char    ordno               [   5];    /* [long  ,    5] 주문번호             */
    char    orgordno1           [   5];    /* [long  ,    5] 원주문번호           */
    char    orgordno            [   5];    /* [long  ,    5] 원주문번호           */
    char    execno              [  10];    /* [long  ,   10] 체결번호             */
    char    ordqty              [  16];    /* [long  ,   16] 주문수량             */
    char    ordprc              [  13];    /* [long  ,   13] 주문가격             */
    char    execqty             [  16];    /* [long  ,   16] 체결수량             */
    char    execprc             [  13];    /* [long  ,   13] 체결가격             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] 정정확인수량         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] 정정확인가격         */
    char    canccnfqty          [  16];    /* [long  ,   16] 취소확인수량         */
    char    rjtqty              [  16];    /* [long  ,   16] 거부수량             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] 주문처리유형코드     */
    char    mtiordseqno         [  10];    /* [long  ,   10] 복수주문일련번호     */
    char    ordcndi             [   1];    /* [string,    1] 주문조건             */
    char    ordprcptncode       [   2];    /* [string,    2] 호가유형코드         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] 비저축체결수량       */
    char    shtnIsuno           [   9];    /* [string,    9] 단축종목번호         */
    char    opdrtnno            [  12];    /* [string,   12] 운용지시번호         */
    char    cvrgordtp           [   1];    /* [string,    1] 반대매매주문구분     */
    char    unercqty            [  16];    /* [long  ,   16] 미체결수량(주문)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] 원주문미체결수량     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] 원주문정정수량       */
    char    orgordcancqty       [  16];    /* [long  ,   16] 원주문취소수량       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] 주문평균체결가격     */
    char    ordamt              [  16];    /* [long  ,   16] 주문금액             */
    char    stdIsuno            [  12];    /* [string,   12] 표준종목번호         */
    char    bfstdIsuno          [  12];    /* [string,   12] 전표준종목번호       */
    char    bnstp               [   1];    /* [string,    1] 매매구분             */
    char    ordtrdptncode       [   2];    /* [string,    2] 주문거래유형코드     */
    char    mgntrncode          [   3];    /* [string,    3] 신용거래코드         */
    char    adduptp             [   2];    /* [string,    2] 수수료합산코드       */
    char    commdacode          [   2];    /* [string,    2] 통신매체코드         */
    char    Loandt              [   8];    /* [string,    8] 대출일               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] 회원/비회원사번호    */
    char    ordacntno           [  20];    /* [string,   20] 주문계좌번호         */
    char    agrgbrnno           [   3];    /* [string,    3] 집계지점번호         */
    char    mgempno             [   9];    /* [string,    9] 관리사원번호         */
    char    futsLnkbrnno        [   3];    /* [string,    3] 선물연계지점번호     */
    char    futsLnkacntno       [  20];    /* [string,   20] 선물연계계좌번호     */
    char    futsmkttp           [   1];    /* [string,    1] 선물시장구분         */
    char    regmktcode          [   2];    /* [string,    2] 등록시장코드         */
    char    mnymgnrat           [   7];    /* [long  ,    7] 현금증거금률         */
    char    substmgnrat         [   9];    /* [long  ,    9] 대용증거금률         */
    char    mnyexecamt          [  16];    /* [long  ,   16] 현금체결금액         */
    char    ubstexecamt         [  16];    /* [long  ,   16] 대용체결금액         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] 수수료체결금액       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] 신용담보체결금액     */
    char    crdtexecamt         [  16];    /* [long  ,   16] 신용체결금액         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] 전일재사용체결금액   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] 금일재사용체결금액   */
    char    spotexecqty         [  16];    /* [long  ,   16] 실물체결수량         */
    char    stslexecqty         [  16];    /* [long  ,   16] 공매도체결수량       */
    char    strtgcode           [   6];    /* [string,    6] 전략코드             */
    char    grpId               [  20];    /* [string,   20] 그룹Id               */
    char    ordseqno            [  10];    /* [long  ,   10] 주문회차             */
    char    ptflno              [  10];    /* [long  ,   10] 포트폴리오번호       */
    char    bskno               [  10];    /* [long  ,   10] 바스켓번호           */
    char    trchno              [  10];    /* [long  ,   10] 트렌치번호           */
    char    itemno              [  10];    /* [long  ,   10] 아이템번호           */
    char    orduserId           [  16];    /* [string,   16] 주문자Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] 차입관리여부         */
    char    frgrunqno           [   6];    /* [string,    6] 외국인고유번호       */
    char    trtzxLevytp         [   1];    /* [string,    1] 거래세징수구분       */
    char    lptp                [   1];    /* [string,    1] 유동성공급자구분     */
    char    exectime            [   9];    /* [string,    9] 체결시각             */
    char    rcptexectime        [   9];    /* [string,    9] 거래소수신체결시각   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] 잔여대출금액         */
    char    secbalqty           [  16];    /* [long  ,   16] 잔고수량             */
    char    spotordableqty      [  16];    /* [long  ,   16] 실물가능수량         */
    char    ordableruseqty      [  16];    /* [long  ,   16] 재사용가능수량(매도) */
    char    flctqty             [  16];    /* [long  ,   16] 변동수량             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] 잔고수량(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] 매도주문가능수량     */
    char    unercsellordqty     [  16];    /* [long  ,   16] 미체결매도주문수량   */
    char    avrpchsprc          [  13];    /* [long  ,   13] 평균매입가           */
    char    pchsant             [  16];    /* [long  ,   16] 매입금액             */
    char    deposit             [  16];    /* [long  ,   16] 예수금               */
    char    substamt            [  16];    /* [long  ,   16] 대용금               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] 위탁증거금현금       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] 위탁증거금대용       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] 신용담보재사용금     */
    char    ordablemny          [  16];    /* [long  ,   16] 주문가능현금         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] 주문가능대용         */
    char    ruseableamt         [  16];    /* [long  ,   16] 재사용가능금액       */
} SC1_OutBlock;		


/* ============================================================================== */
/* 현물 - 주문 정정                                                               */
/* ============================================================================== */
typedef struct 
{					   
    char    dgubun              [   3];    /* Data 구분 : 'SC2'                   */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호         */
    char    accno               [  11];    /* [string,   11] 계좌번호             */
    char    user                [   8];    /* [string,    8] 조작자ID             */
    char    len                 [   6];    /* [long  ,    6] 헤더길이             */
    char    gubun               [   1];    /* [string,    1] 헤더구분             */
    char    compress            [   1];    /* [string,    1] 압축구분             */
    char    encrypt             [   1];    /* [string,    1] 암호구분             */
    char    offset              [   3];    /* [long  ,    3] 공통시작지점         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] 이용사번호           */
    char    userid              [  16];    /* [string,   16] 사용자ID             */
    char    media               [   2];    /* [string,    2] 접속매체             */
    char    ifid                [   3];    /* [string,    3] I/F일련번호          */
    char    seq                 [   9];    /* [string,    9] 전문일련번호         */
    char    trid                [  16];    /* [string,   16] TR추적ID             */
    char    pubip               [  12];    /* [string,   12] 공인IP               */
    char    prvip               [  12];    /* [string,   12] 사설IP               */
    char    pcbpno              [   3];    /* [string,    3] 처리지점번호         */
    char    bpno                [   3];    /* [string,    3] 지점번호             */
    char    termno              [   8];    /* [string,    8] 단말번호             */
    char    lang                [   1];    /* [string,    1] 언어구분             */
    char    proctm              [   9];    /* [long  ,    9] AP처리시간           */
    char    msgcode             [   4];    /* [string,    4] 메세지코드           */
    char    outgu               [   1];    /* [string,    1] 메세지출력구분       */
    char    compreq             [   1];    /* [string,    1] 압축요청구분         */
    char    funckey             [   4];    /* [string,    4] 기능키               */
    char    reqcnt              [   4];    /* [long  ,    4] 요청레코드개수       */
    char    filler              [   6];    /* [string,    6] 예비영역             */
    char    cont                [   1];    /* [string,    1] 연속구분             */
    char    contkey             [  18];    /* [string,   18] 연속키값             */
    char    varlen              [   2];    /* [long  ,    2] 가변시스템길이       */
    char    varhdlen            [   2];    /* [long  ,    2] 가변해더길이         */
    char    varmsglen           [   2];    /* [long  ,    2] 가변메시지길이       */
    char    trsrc               [   1];    /* [string,    1] 조회발원지           */
    char    eventid             [   4];    /* [string,    4] I/F이벤트ID          */
    char    ifinfo              [   4];    /* [string,    4] I/F정보              */
    char    filler1             [  41];    /* [string,   41] 예비영역             */
    char    ordxctptncode       [   2];    /* [string,    2] 주문체결유형코드     */
    char    ordmktcode          [   2];    /* [string,    2] 주문시장코드         */
    char    ordptncode          [   2];    /* [string,    2] 주문유형코드         */
    char    mgmtbrnno           [   3];    /* [string,    3] 관리지점번호         */
    char    accno1              [  20];    /* [string,   20] 계좌번호             */
    char    acntnm              [  40];    /* [string,   40] 계좌명               */
    char    Isuno               [  12];    /* [string,   12] 종목번호             */
    char    Isunm               [  40];    /* [string,   40] 종목명               */
    char    ordno1              [   5];    /* [long  ,    5] 주문번호             */
    char    ordno               [   5];    /* [long  ,    5] 주문번호             */
    char    orgordno1           [   5];    /* [long  ,    5] 원주문번호           */
    char    orgordno            [   5];    /* [long  ,    5] 원주문번호           */
    char    execno              [  10];    /* [long  ,   10] 체결번호             */
    char    ordqty              [  16];    /* [long  ,   16] 주문수량             */
    char    ordprc              [  13];    /* [long  ,   13] 주문가격             */
    char    execqty             [  16];    /* [long  ,   16] 체결수량             */
    char    execprc             [  13];    /* [long  ,   13] 체결가격             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] 정정확인수량         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] 정정확인가격         */
    char    canccnfqty          [  16];    /* [long  ,   16] 취소확인수량         */
    char    rjtqty              [  16];    /* [long  ,   16] 거부수량             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] 주문처리유형코드     */
    char    mtiordseqno         [  10];    /* [long  ,   10] 복수주문일련번호     */
    char    ordcndi             [   1];    /* [string,    1] 주문조건             */
    char    ordprcptncode       [   2];    /* [string,    2] 호가유형코드         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] 비저축체결수량       */
    char    shtnIsuno           [   9];    /* [string,    9] 단축종목번호         */
    char    opdrtnno            [  12];    /* [string,   12] 운용지시번호         */
    char    cvrgordtp           [   1];    /* [string,    1] 반대매매주문구분     */
    char    unercqty            [  16];    /* [long  ,   16] 미체결수량(주문)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] 원주문미체결수량     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] 원주문정정수량       */
    char    orgordcancqty       [  16];    /* [long  ,   16] 원주문취소수량       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] 주문평균체결가격     */
    char    ordamt              [  16];    /* [long  ,   16] 주문금액             */
    char    stdIsuno            [  12];    /* [string,   12] 표준종목번호         */
    char    bfstdIsuno          [  12];    /* [string,   12] 전표준종목번호       */
    char    bnstp               [   1];    /* [string,    1] 매매구분             */
    char    ordtrdptncode       [   2];    /* [string,    2] 주문거래유형코드     */
    char    mgntrncode          [   3];    /* [string,    3] 신용거래코드         */
    char    adduptp             [   2];    /* [string,    2] 수수료합산코드       */
    char    commdacode          [   2];    /* [string,    2] 통신매체코드         */
    char    Loandt              [   8];    /* [string,    8] 대출일               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] 회원/비회원사번호    */
    char    ordacntno           [  20];    /* [string,   20] 주문계좌번호         */
    char    agrgbrnno           [   3];    /* [string,    3] 집계지점번호         */
    char    mgempno             [   9];    /* [string,    9] 관리사원번호         */
    char    futsLnkbrnno        [   3];    /* [string,    3] 선물연계지점번호     */
    char    futsLnkacntno       [  20];    /* [string,   20] 선물연계계좌번호     */
    char    futsmkttp           [   1];    /* [string,    1] 선물시장구분         */
    char    regmktcode          [   2];    /* [string,    2] 등록시장코드         */
    char    mnymgnrat           [   7];    /* [long  ,    7] 현금증거금률         */
    char    substmgnrat         [   9];    /* [long  ,    9] 대용증거금률         */
    char    mnyexecamt          [  16];    /* [long  ,   16] 현금체결금액         */
    char    ubstexecamt         [  16];    /* [long  ,   16] 대용체결금액         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] 수수료체결금액       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] 신용담보체결금액     */
    char    crdtexecamt         [  16];    /* [long  ,   16] 신용체결금액         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] 전일재사용체결금액   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] 금일재사용체결금액   */
    char    spotexecqty         [  16];    /* [long  ,   16] 실물체결수량         */
    char    stslexecqty         [  16];    /* [long  ,   16] 공매도체결수량       */
    char    strtgcode           [   6];    /* [string,    6] 전략코드             */
    char    grpId               [  20];    /* [string,   20] 그룹Id               */
    char    ordseqno            [  10];    /* [long  ,   10] 주문회차             */
    char    ptflno              [  10];    /* [long  ,   10] 포트폴리오번호       */
    char    bskno               [  10];    /* [long  ,   10] 바스켓번호           */
    char    trchno              [  10];    /* [long  ,   10] 트렌치번호           */
    char    itemno              [  10];    /* [long  ,   10] 아이템번호           */
    char    orduserId           [  16];    /* [string,   16] 주문자Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] 차입관리여부         */
    char    frgrunqno           [   6];    /* [string,    6] 외국인고유번호       */
    char    trtzxLevytp         [   1];    /* [string,    1] 거래세징수구분       */
    char    lptp                [   1];    /* [string,    1] 유동성공급자구분     */
    char    exectime            [   9];    /* [string,    9] 체결시각             */
    char    rcptexectime        [   9];    /* [string,    9] 거래소수신체결시각   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] 잔여대출금액         */
    char    secbalqty           [  16];    /* [long  ,   16] 잔고수량             */
    char    spotordableqty      [  16];    /* [long  ,   16] 실물가능수량         */
    char    ordableruseqty      [  16];    /* [long  ,   16] 재사용가능수량(매도) */
    char    flctqty             [  16];    /* [long  ,   16] 변동수량             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] 잔고수량(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] 매도주문가능수량     */
    char    unercsellordqty     [  16];    /* [long  ,   16] 미체결매도주문수량   */
    char    avrpchsprc          [  13];    /* [long  ,   13] 평균매입가           */
    char    pchsant             [  16];    /* [long  ,   16] 매입금액             */
    char    deposit             [  16];    /* [long  ,   16] 예수금               */
    char    substamt            [  16];    /* [long  ,   16] 대용금               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] 위탁증거금현금       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] 위탁증거금대용       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] 신용담보재사용금     */
    char    ordablemny          [  16];    /* [long  ,   16] 주문가능현금         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] 주문가능대용         */
    char    ruseableamt         [  16];    /* [long  ,   16] 재사용가능금액       */
} SC2_OutBlock;

/* ============================================================================== */
/* 현물 - 주문 취소                                                               */
/* ============================================================================== */
typedef struct 
{			
    char    dgubun              [   3];    /* Data 구분 : 'SC3'                   */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호         */
    char    accno               [  11];    /* [string,   11] 계좌번호             */
    char    user                [   8];    /* [string,    8] 조작자ID             */
    char    len                 [   6];    /* [long  ,    6] 헤더길이             */
    char    gubun               [   1];    /* [string,    1] 헤더구분             */
    char    compress            [   1];    /* [string,    1] 압축구분             */
    char    encrypt             [   1];    /* [string,    1] 암호구분             */
    char    offset              [   3];    /* [long  ,    3] 공통시작지점         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] 이용사번호           */
    char    userid              [  16];    /* [string,   16] 사용자ID             */
    char    media               [   2];    /* [string,    2] 접속매체             */
    char    ifid                [   3];    /* [string,    3] I/F일련번호          */
    char    seq                 [   9];    /* [string,    9] 전문일련번호         */
    char    trid                [  16];    /* [string,   16] TR추적ID             */
    char    pubip               [  12];    /* [string,   12] 공인IP               */
    char    prvip               [  12];    /* [string,   12] 사설IP               */
    char    pcbpno              [   3];    /* [string,    3] 처리지점번호         */
    char    bpno                [   3];    /* [string,    3] 지점번호             */
    char    termno              [   8];    /* [string,    8] 단말번호             */
    char    lang                [   1];    /* [string,    1] 언어구분             */
    char    proctm              [   9];    /* [long  ,    9] AP처리시간           */
    char    msgcode             [   4];    /* [string,    4] 메세지코드           */
    char    outgu               [   1];    /* [string,    1] 메세지출력구분       */
    char    compreq             [   1];    /* [string,    1] 압축요청구분         */
    char    funckey             [   4];    /* [string,    4] 기능키               */
    char    reqcnt              [   4];    /* [long  ,    4] 요청레코드개수       */
    char    filler              [   6];    /* [string,    6] 예비영역             */
    char    cont                [   1];    /* [string,    1] 연속구분             */
    char    contkey             [  18];    /* [string,   18] 연속키값             */
    char    varlen              [   2];    /* [long  ,    2] 가변시스템길이       */
    char    varhdlen            [   2];    /* [long  ,    2] 가변해더길이         */
    char    varmsglen           [   2];    /* [long  ,    2] 가변메시지길이       */
    char    trsrc               [   1];    /* [string,    1] 조회발원지           */
    char    eventid             [   4];    /* [string,    4] I/F이벤트ID          */
    char    ifinfo              [   4];    /* [string,    4] I/F정보              */
    char    filler1             [  41];    /* [string,   41] 예비영역             */
    char    ordxctptncode       [   2];    /* [string,    2] 주문체결유형코드     */
    char    ordmktcode          [   2];    /* [string,    2] 주문시장코드         */
    char    ordptncode          [   2];    /* [string,    2] 주문유형코드         */
    char    mgmtbrnno           [   3];    /* [string,    3] 관리지점번호         */
    char    accno1              [  20];    /* [string,   20] 계좌번호             */
    char    acntnm              [  40];    /* [string,   40] 계좌명               */
    char    Isuno               [  12];    /* [string,   12] 종목번호             */
    char    Isunm               [  40];    /* [string,   40] 종목명               */
    char    ordno1              [   5];    /* [long  ,    5] 주문번호             */
    char    ordno               [   5];    /* [long  ,    5] 주문번호             */
    char    orgordno1           [   5];    /* [long  ,    5] 원주문번호           */
    char    orgordno            [   5];    /* [long  ,    5] 원주문번호           */
    char    execno              [  10];    /* [long  ,   10] 체결번호             */
    char    ordqty              [  16];    /* [long  ,   16] 주문수량             */
    char    ordprc              [  13];    /* [long  ,   13] 주문가격             */
    char    execqty             [  16];    /* [long  ,   16] 체결수량             */
    char    execprc             [  13];    /* [long  ,   13] 체결가격             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] 정정확인수량         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] 정정확인가격         */
    char    canccnfqty          [  16];    /* [long  ,   16] 취소확인수량         */
    char    rjtqty              [  16];    /* [long  ,   16] 거부수량             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] 주문처리유형코드     */
    char    mtiordseqno         [  10];    /* [long  ,   10] 복수주문일련번호     */
    char    ordcndi             [   1];    /* [string,    1] 주문조건             */
    char    ordprcptncode       [   2];    /* [string,    2] 호가유형코드         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] 비저축체결수량       */
    char    shtnIsuno           [   9];    /* [string,    9] 단축종목번호         */
    char    opdrtnno            [  12];    /* [string,   12] 운용지시번호         */
    char    cvrgordtp           [   1];    /* [string,    1] 반대매매주문구분     */
    char    unercqty            [  16];    /* [long  ,   16] 미체결수량(주문)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] 원주문미체결수량     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] 원주문정정수량       */
    char    orgordcancqty       [  16];    /* [long  ,   16] 원주문취소수량       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] 주문평균체결가격     */
    char    ordamt              [  16];    /* [long  ,   16] 주문금액             */
    char    stdIsuno            [  12];    /* [string,   12] 표준종목번호         */
    char    bfstdIsuno          [  12];    /* [string,   12] 전표준종목번호       */
    char    bnstp               [   1];    /* [string,    1] 매매구분             */
    char    ordtrdptncode       [   2];    /* [string,    2] 주문거래유형코드     */
    char    mgntrncode          [   3];    /* [string,    3] 신용거래코드         */
    char    adduptp             [   2];    /* [string,    2] 수수료합산코드       */
    char    commdacode          [   2];    /* [string,    2] 통신매체코드         */
    char    Loandt              [   8];    /* [string,    8] 대출일               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] 회원/비회원사번호    */
    char    ordacntno           [  20];    /* [string,   20] 주문계좌번호         */
    char    agrgbrnno           [   3];    /* [string,    3] 집계지점번호         */
    char    mgempno             [   9];    /* [string,    9] 관리사원번호         */
    char    futsLnkbrnno        [   3];    /* [string,    3] 선물연계지점번호     */
    char    futsLnkacntno       [  20];    /* [string,   20] 선물연계계좌번호     */
    char    futsmkttp           [   1];    /* [string,    1] 선물시장구분         */
    char    regmktcode          [   2];    /* [string,    2] 등록시장코드         */
    char    mnymgnrat           [   7];    /* [long  ,    7] 현금증거금률         */
    char    substmgnrat         [   9];    /* [long  ,    9] 대용증거금률         */
    char    mnyexecamt          [  16];    /* [long  ,   16] 현금체결금액         */
    char    ubstexecamt         [  16];    /* [long  ,   16] 대용체결금액         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] 수수료체결금액       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] 신용담보체결금액     */
    char    crdtexecamt         [  16];    /* [long  ,   16] 신용체결금액         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] 전일재사용체결금액   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] 금일재사용체결금액   */
    char    spotexecqty         [  16];    /* [long  ,   16] 실물체결수량         */
    char    stslexecqty         [  16];    /* [long  ,   16] 공매도체결수량       */
    char    strtgcode           [   6];    /* [string,    6] 전략코드             */
    char    grpId               [  20];    /* [string,   20] 그룹Id               */
    char    ordseqno            [  10];    /* [long  ,   10] 주문회차             */
    char    ptflno              [  10];    /* [long  ,   10] 포트폴리오번호       */
    char    bskno               [  10];    /* [long  ,   10] 바스켓번호           */
    char    trchno              [  10];    /* [long  ,   10] 트렌치번호           */
    char    itemno              [  10];    /* [long  ,   10] 아이템번호           */
    char    orduserId           [  16];    /* [string,   16] 주문자Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] 차입관리여부         */
    char    frgrunqno           [   6];    /* [string,    6] 외국인고유번호       */
    char    trtzxLevytp         [   1];    /* [string,    1] 거래세징수구분       */
    char    lptp                [   1];    /* [string,    1] 유동성공급자구분     */
    char    exectime            [   9];    /* [string,    9] 체결시각             */
    char    rcptexectime        [   9];    /* [string,    9] 거래소수신체결시각   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] 잔여대출금액         */
    char    secbalqty           [  16];    /* [long  ,   16] 잔고수량             */
    char    spotordableqty      [  16];    /* [long  ,   16] 실물가능수량         */
    char    ordableruseqty      [  16];    /* [long  ,   16] 재사용가능수량(매도) */
    char    flctqty             [  16];    /* [long  ,   16] 변동수량             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] 잔고수량(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] 매도주문가능수량     */
    char    unercsellordqty     [  16];    /* [long  ,   16] 미체결매도주문수량   */
    char    avrpchsprc          [  13];    /* [long  ,   13] 평균매입가           */
    char    pchsant             [  16];    /* [long  ,   16] 매입금액             */
    char    deposit             [  16];    /* [long  ,   16] 예수금               */
    char    substamt            [  16];    /* [long  ,   16] 대용금               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] 위탁증거금현금       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] 위탁증거금대용       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] 신용담보재사용금     */
    char    ordablemny          [  16];    /* [long  ,   16] 주문가능현금         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] 주문가능대용         */
    char    ruseableamt         [  16];    /* [long  ,   16] 재사용가능금액       */
} SC3_OutBlock;

/* ============================================================================== */
/* 현물 - 주문 거부                                                               */
/* ============================================================================== */		  
typedef struct 
{			
    char    dgubun              [   3];    /* Data 구분 : 'SC4'                   */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호         */
    char    accno               [  11];    /* [string,   11] 계좌번호             */
    char    user                [   8];    /* [string,    8] 조작자ID             */
    char    len                 [   6];    /* [long  ,    6] 헤더길이             */
    char    gubun               [   1];    /* [string,    1] 헤더구분             */
    char    compress            [   1];    /* [string,    1] 압축구분             */
    char    encrypt             [   1];    /* [string,    1] 암호구분             */
    char    offset              [   3];    /* [long  ,    3] 공통시작지점         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] 이용사번호           */
    char    userid              [  16];    /* [string,   16] 사용자ID             */
    char    media               [   2];    /* [string,    2] 접속매체             */
    char    ifid                [   3];    /* [string,    3] I/F일련번호          */
    char    seq                 [   9];    /* [string,    9] 전문일련번호         */
    char    trid                [  16];    /* [string,   16] TR추적ID             */
    char    pubip               [  12];    /* [string,   12] 공인IP               */
    char    prvip               [  12];    /* [string,   12] 사설IP               */
    char    pcbpno              [   3];    /* [string,    3] 처리지점번호         */
    char    bpno                [   3];    /* [string,    3] 지점번호             */
    char    termno              [   8];    /* [string,    8] 단말번호             */
    char    lang                [   1];    /* [string,    1] 언어구분             */
    char    proctm              [   9];    /* [long  ,    9] AP처리시간           */
    char    msgcode             [   4];    /* [string,    4] 메세지코드           */
    char    outgu               [   1];    /* [string,    1] 메세지출력구분       */
    char    compreq             [   1];    /* [string,    1] 압축요청구분         */
    char    funckey             [   4];    /* [string,    4] 기능키               */
    char    reqcnt              [   4];    /* [long  ,    4] 요청레코드개수       */
    char    filler              [   6];    /* [string,    6] 예비영역             */
    char    cont                [   1];    /* [string,    1] 연속구분             */
    char    contkey             [  18];    /* [string,   18] 연속키값             */
    char    varlen              [   2];    /* [long  ,    2] 가변시스템길이       */
    char    varhdlen            [   2];    /* [long  ,    2] 가변해더길이         */
    char    varmsglen           [   2];    /* [long  ,    2] 가변메시지길이       */
    char    trsrc               [   1];    /* [string,    1] 조회발원지           */
    char    eventid             [   4];    /* [string,    4] I/F이벤트ID          */
    char    ifinfo              [   4];    /* [string,    4] I/F정보              */
    char    filler1             [  41];    /* [string,   41] 예비영역             */
    char    ordxctptncode       [   2];    /* [string,    2] 주문체결유형코드     */
    char    ordmktcode          [   2];    /* [string,    2] 주문시장코드         */
    char    ordptncode          [   2];    /* [string,    2] 주문유형코드         */
    char    mgmtbrnno           [   3];    /* [string,    3] 관리지점번호         */
    char    accno1              [  20];    /* [string,   20] 계좌번호             */
    char    acntnm              [  40];    /* [string,   40] 계좌명               */
    char    Isuno               [  12];    /* [string,   12] 종목번호             */
    char    Isunm               [  40];    /* [string,   40] 종목명               */
    char    ordno1              [   5];    /* [long  ,    5] 주문번호             */
    char    ordno               [   5];    /* [long  ,    5] 주문번호             */
    char    orgordno1           [   5];    /* [long  ,    5] 원주문번호           */
    char    orgordno            [   5];    /* [long  ,    5] 원주문번호           */
    char    execno              [  10];    /* [long  ,   10] 체결번호             */
    char    ordqty              [  16];    /* [long  ,   16] 주문수량             */
    char    ordprc              [  13];    /* [long  ,   13] 주문가격             */
    char    execqty             [  16];    /* [long  ,   16] 체결수량             */
    char    execprc             [  13];    /* [long  ,   13] 체결가격             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] 정정확인수량         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] 정정확인가격         */
    char    canccnfqty          [  16];    /* [long  ,   16] 취소확인수량         */
    char    rjtqty              [  16];    /* [long  ,   16] 거부수량             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] 주문처리유형코드     */
    char    mtiordseqno         [  10];    /* [long  ,   10] 복수주문일련번호     */
    char    ordcndi             [   1];    /* [string,    1] 주문조건             */
    char    ordprcptncode       [   2];    /* [string,    2] 호가유형코드         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] 비저축체결수량       */
    char    shtnIsuno           [   9];    /* [string,    9] 단축종목번호         */
    char    opdrtnno            [  12];    /* [string,   12] 운용지시번호         */
    char    cvrgordtp           [   1];    /* [string,    1] 반대매매주문구분     */
    char    unercqty            [  16];    /* [long  ,   16] 미체결수량(주문)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] 원주문미체결수량     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] 원주문정정수량       */
    char    orgordcancqty       [  16];    /* [long  ,   16] 원주문취소수량       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] 주문평균체결가격     */
    char    ordamt              [  16];    /* [long  ,   16] 주문금액             */
    char    stdIsuno            [  12];    /* [string,   12] 표준종목번호         */
    char    bfstdIsuno          [  12];    /* [string,   12] 전표준종목번호       */
    char    bnstp               [   1];    /* [string,    1] 매매구분             */
    char    ordtrdptncode       [   2];    /* [string,    2] 주문거래유형코드     */
    char    mgntrncode          [   3];    /* [string,    3] 신용거래코드         */
    char    adduptp             [   2];    /* [string,    2] 수수료합산코드       */
    char    commdacode          [   2];    /* [string,    2] 통신매체코드         */
    char    Loandt              [   8];    /* [string,    8] 대출일               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] 회원/비회원사번호    */
    char    ordacntno           [  20];    /* [string,   20] 주문계좌번호         */
    char    agrgbrnno           [   3];    /* [string,    3] 집계지점번호         */
    char    mgempno             [   9];    /* [string,    9] 관리사원번호         */
    char    futsLnkbrnno        [   3];    /* [string,    3] 선물연계지점번호     */
    char    futsLnkacntno       [  20];    /* [string,   20] 선물연계계좌번호     */
    char    futsmkttp           [   1];    /* [string,    1] 선물시장구분         */
    char    regmktcode          [   2];    /* [string,    2] 등록시장코드         */
    char    mnymgnrat           [   7];    /* [long  ,    7] 현금증거금률         */
    char    substmgnrat         [   9];    /* [long  ,    9] 대용증거금률         */
    char    mnyexecamt          [  16];    /* [long  ,   16] 현금체결금액         */
    char    ubstexecamt         [  16];    /* [long  ,   16] 대용체결금액         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] 수수료체결금액       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] 신용담보체결금액     */
    char    crdtexecamt         [  16];    /* [long  ,   16] 신용체결금액         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] 전일재사용체결금액   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] 금일재사용체결금액   */
    char    spotexecqty         [  16];    /* [long  ,   16] 실물체결수량         */
    char    stslexecqty         [  16];    /* [long  ,   16] 공매도체결수량       */
    char    strtgcode           [   6];    /* [string,    6] 전략코드             */
    char    grpId               [  20];    /* [string,   20] 그룹Id               */
    char    ordseqno            [  10];    /* [long  ,   10] 주문회차             */
    char    ptflno              [  10];    /* [long  ,   10] 포트폴리오번호       */
    char    bskno               [  10];    /* [long  ,   10] 바스켓번호           */
    char    trchno              [  10];    /* [long  ,   10] 트렌치번호           */
    char    itemno              [  10];    /* [long  ,   10] 아이템번호           */
    char    orduserId           [  16];    /* [string,   16] 주문자Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] 차입관리여부         */
    char    frgrunqno           [   6];    /* [string,    6] 외국인고유번호       */
    char    trtzxLevytp         [   1];    /* [string,    1] 거래세징수구분       */
    char    lptp                [   1];    /* [string,    1] 유동성공급자구분     */
    char    exectime            [   9];    /* [string,    9] 체결시각             */
    char    rcptexectime        [   9];    /* [string,    9] 거래소수신체결시각   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] 잔여대출금액         */
    char    secbalqty           [  16];    /* [long  ,   16] 잔고수량             */
    char    spotordableqty      [  16];    /* [long  ,   16] 실물가능수량         */
    char    ordableruseqty      [  16];    /* [long  ,   16] 재사용가능수량(매도) */
    char    flctqty             [  16];    /* [long  ,   16] 변동수량             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] 잔고수량(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] 매도주문가능수량     */
    char    unercsellordqty     [  16];    /* [long  ,   16] 미체결매도주문수량   */
    char    avrpchsprc          [  13];    /* [long  ,   13] 평균매입가           */
    char    pchsant             [  16];    /* [long  ,   16] 매입금액             */
    char    deposit             [  16];    /* [long  ,   16] 예수금               */
    char    substamt            [  16];    /* [long  ,   16] 대용금               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] 위탁증거금현금       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] 위탁증거금대용       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] 신용담보재사용금     */
    char    ordablemny          [  16];    /* [long  ,   16] 주문가능현금         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] 주문가능대용         */
    char    ruseableamt         [  16];    /* [long  ,   16] 재사용가능금액       */
} SC4_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data 구분 : 'O01'                    */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호          */
    char    accno               [  11];    /* [string,   11] 계좌번호              */
    char    user                [   8];    /* [string,    8] 조작자ID              */
    char    len                 [   6];    /* [long  ,    6] 헤더길이              */
    char    gubun               [   1];    /* [string,    1] 헤더구분              */
    char    compress            [   1];    /* [string,    1] 압축구분              */
    char    encrypt             [   1];    /* [string,    1] 암호구분              */
    char    offset              [   3];    /* [long  ,    3] 공통시작지점          */
    char    trcode              [   8];    /* [string,    8] TRCODE                */
    char    compid              [   3];    /* [string,    3] 이용사번호            */
    char    userid              [  16];    /* [string,   16] 사용자ID              */
    char    media               [   2];    /* [string,    2] 접속매체              */
    char    ifid                [   3];    /* [string,    3] I/F일련번호           */
    char    seq                 [   9];    /* [string,    9] 전문일련번호          */
    char    trid                [  16];    /* [string,   16] TR추적ID              */
    char    pubip               [  12];    /* [string,   12] 공인IP                */
    char    prvip               [  12];    /* [string,   12] 사설IP                */
    char    pcbpno              [   3];    /* [string,    3] 처리지점번호          */
    char    bpno                [   3];    /* [string,    3] 지점번호              */
    char    termno              [   8];    /* [string,    8] 단말번호              */
    char    lang                [   1];    /* [string,    1] 언어구분              */
    char    proctm              [   9];    /* [long  ,    9] AP처리시간            */
    char    msgcode             [   4];    /* [string,    4] 메세지코드            */
    char    outgu               [   1];    /* [string,    1] 메세지출력구분        */
    char    compreq             [   1];    /* [string,    1] 압축요청구분          */
    char    funckey             [   4];    /* [string,    4] 기능키                */
    char    reqcnt              [   4];    /* [long  ,    4] 요청레코드개수        */
    char    filler              [   6];    /* [string,    6] 예비영역              */
    char    cont                [   1];    /* [string,    1] 연속구분              */
    char    contkey             [  18];    /* [string,   18] 연속키값              */
    char    varlen              [   2];    /* [long  ,    2] 가변시스템길이        */
    char    varhdlen            [   2];    /* [long  ,    2] 가변해더길이          */
    char    varmsglen           [   2];    /* [long  ,    2] 가변메시지길이        */
    char    trsrc               [   1];    /* [string,    1] 조회발원지            */
    char    eventid             [   4];    /* [string,    4] I/F이벤트ID           */
    char    ifinfo              [   4];    /* [string,    4] I/F정보               */
    char    filler1             [  41];    /* [string,   41] 예비영역              */
    char    trcode1             [   4];    /* [string,    4] tr코드                */
    char    firmno              [   3];    /* [string,    3] 회사번호              */
    char    acntno              [  11];    /* [string,   11] 계좌번호              */
    char    acntno1             [   9];    /* [string,    9] 계좌번호              */
    char    acntnm              [  40];    /* [string,   40] 계좌명                */
    char    brnno               [   3];    /* [string,    3] 지점번호              */
    char    ordmktcode          [   2];    /* [string,    2] 주문시장코드          */
    char    ordno1              [   3];    /* [string,    3] 주문번호              */
    char    ordno               [   7];    /* [long  ,    7] 주문번호              */
    char    orgordno1           [   3];    /* [string,    3] 원주문번호            */
    char    orgordno            [   7];    /* [long  ,    7] 원주문번호            */
    char    prntordno           [   3];    /* [string,    3] 모주문번호            */
    char    prntordno1          [   7];    /* [long  ,    7] 모주문번호            */
    char    isuno               [  12];    /* [string,   12] 종목번호              */
    char    fnoIsuno            [   8];    /* [string,    8] 선물옵션종목번호      */
    char    fnoIsunm            [  40];    /* [string,   40] 선물옵션종목명        */
    char    pdgrpcode           [   2];    /* [string,    2] 상품군분류코드        */
    char    fnoIsuptntp         [   1];    /* [string,    1] 선물옵션종목유형구분  */
    char    bnstp               [   1];    /* [string,    1] 매매구분              */
    char    mrctp               [   1];    /* [string,    1] 정정취소구분          */
    char    ordqty              [  16];    /* [long  ,   16] 주문수량              */
    char    hogatype            [   2];    /* [string,    2] 호가유형코드          */
    char    mmgb                [   2];    /* [string,    2] 거래유형코드          */
    char    ordprc              [  13];    /* [double, 13.2] 주문가격              */
    char    unercqty            [  16];    /* [long  ,   16] 미체결수량            */
    char    commdacode          [   2];    /* [string,    2] 통신매체              */
    char    peeamtcode          [   2];    /* [string,    2] 수수료합산코드        */
    char    mgempno             [   9];    /* [string,    9] 관리사원              */
    char    fnotrdunitamt       [  19];    /* [double, 19.8] 선물옵션거래단위금액  */
    char    trxtime             [   9];    /* [string,    9] 처리시각              */
    char    strtgcode           [   6];    /* [string,    6] 전략코드              */
    char    grpId               [  20];    /* [string,   20] 그룹Id                */
    char    ordseqno            [  10];    /* [string,   10] 주문회차              */
    char    ptflno              [  10];    /* [string,   10] 포트폴리오 번호       */
    char    bskno               [  10];    /* [string,   10] 바스켓번호            */
    char    trchno              [  10];    /* [string,   10] 트렌치번호            */
    char    Itemno              [  10];    /* [string,   10] 아이템번호            */
    char    userId              [  16];    /* [string,   16] 주문자Id              */
    char    opdrtnno            [  12];    /* [string,   12] 운영지시번호          */
    char    rjtcode             [   3];    /* [string,    3] 부적격코드            */
    char    mrccnfqty           [  16];    /* [long  ,   16] 정정취소확인수량      */
    char    orgordunercqty      [  16];    /* [long  ,   16] 원주문미체결수량      */
    char    orgordmrcqty        [  16];    /* [long  ,   16] 원주문정정취소수량    */
    char    ctrcttime           [   8];    /* [string,    8] 약정시각(체결시각)    */
    char    ctrctno             [  10];    /* [string,   10] 약정번호              */
    char    execprc             [  13];    /* [double, 13.2] 체결가격              */
    char    execqty             [  16];    /* [long  ,   16] 체결수량              */
    char    newqty              [  16];    /* [long  ,   16] 신규체결수량          */
    char    qdtqty              [  16];    /* [long  ,   16] 청산체결수량          */
    char    lastqty             [  16];    /* [long  ,   16] 최종결제수량          */
    char    lallexecqty         [  16];    /* [long  ,   16] 전체체결수량          */
    char    allexecamt          [  16];    /* [long  ,   16] 전체체결금액          */
    char    fnobalevaltp        [   1];    /* [string,    1] 잔고평가구분          */
    char    bnsplamt            [  16];    /* [long  ,   16] 매매손익금액          */
    char    fnoIsuno1           [   8];    /* [string,    8] 선물옵션종목번호1     */
    char    bnstp1              [   1];    /* [string,    1] 매매구분1             */
    char    execprc1            [  13];    /* [double, 13.2] 체결가1               */
    char    newqty1             [  16];    /* [long  ,   16] 신규체결수량1         */
    char    qdtqty1             [  16];    /* [long  ,   16] 청산체결수량1         */
    char    allexecamt1         [  16];    /* [long  ,   16] 전체체결금액1         */
    char    fnoIsuno2           [   8];    /* [string,    8] 선물옵션종목번호2     */
    char    bnstp2              [   1];    /* [string,    1] 매매구분2             */
    char    execprc2            [  13];    /* [double, 13.2] 체결가2               */
    char    newqty2             [  16];    /* [long  ,   16] 신규체결수량2         */
    char    lqdtqty2            [  16];    /* [long  ,   16] 청산체결수량2         */
    char    allexecamt2         [  16];    /* [long  ,   16] 전체체결금액2         */
    char    dps                 [  16];    /* [long  ,   16] 예수금                */
    char    ftsubtdsgnamt       [  16];    /* [long  ,   16] 선물대용지정금액      */
    char    mgn                 [  16];    /* [long  ,   16] 증거금                */
    char    mnymgn              [  16];    /* [long  ,   16] 증거금현금            */
    char    ordableamt          [  16];    /* [long  ,   16] 주문가능금액          */
    char    mnyordableamt       [  16];    /* [long  ,   16] 주문가능현금액        */
    char    fnoIsuno_1          [   8];    /* [string,    8] 잔고 종목번호1        */
    char    bnstp_1             [   1];    /* [string,    1] 잔고 매매구분1        */
    char    unsttqty_1          [  16];    /* [long  ,   16] 미결제수량1           */
    char    lqdtableqty_1       [  16];    /* [long  ,   16] 주문가능수량1         */
    char    avrprc_1            [  13];    /* [double, 13.2] 평균가1               */
    char    fnoIsuno_2          [   8];    /* [string,    8] 잔고 종목번호2        */
    char    bnstp_2             [   1];    /* [string,    1] 잔고 매매구분2        */
    char    unsttqty_2          [  16];    /* [long  ,   16] 미결제수량2           */
    char    lqdtableqty_2       [  16];    /* [long  ,   16] 주문가능수량2         */
    char    avrprc_2            [  13];    /* [double, 13.2] 평균가2               */
} O01_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data 구분 : 'H01'                 */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호       */
    char    accno               [  11];    /* [string,   11] 계좌번호           */
    char    user                [   8];    /* [string,    8] 조작자ID           */
    char    seq                 [  11];    /* [long  ,   11] 일련번호           */
    char    trcode              [  11];    /* [string,   11] trcode             */
    char    megrpno             [   2];    /* [string,    2] 매칭그룹번호       */
    char    boardid             [   2];    /* [string,    2] 보드ID             */
    char    memberno            [   5];    /* [string,    5] 회원번호           */
    char    bpno                [   5];    /* [string,    5] 지점번호           */
    char    ordno               [  10];    /* [string,   10] 주문번호           */
    char    orgordno            [  10];    /* [string,   10] 원주문번호         */
    char    expcode             [  12];    /* [string,   12] 종목코드           */
    char    dosugb              [   1];    /* [string,    1] 매도수구분         */
    char    mocagb              [   1];    /* [string,    1] 정정취소구분       */
    char    accno1              [  12];    /* [string,   12] 계좌번호1          */
    char    qty2                [  10];    /* [long  ,   10] 호가수량           */
    char    price               [  11];    /* [float , 11.2] 호가가격           */
    char    ordgb               [   1];    /* [string,    1] 주문유형           */
    char    hogagb              [   1];    /* [string,    1] 호가구분           */
    char    sihogagb            [  11];    /* [string,   11] 시장조성호가구분   */
    char    tradid              [   5];    /* [string,    5] 자사주신고서ID     */
    char    treacode            [   1];    /* [string,    1] 자사주매매방법     */
    char    askcode             [   2];    /* [string,    2] 매도유형코드       */
    char    creditcode          [   2];    /* [string,    2] 신용구분코드       */
    char    jakigb              [   2];    /* [string,    2] 위탁자기구분       */
    char    trustnum            [   5];    /* [string,    5] 위탁사번호         */
    char    ptgb                [   2];    /* [string,    2] 프로그램구분       */
    char    substonum           [  12];    /* [string,   12] 대용주권계좌번호   */
    char    accgb               [   2];    /* [string,    2] 계좌구분코드       */
    char    accmarggb           [   2];    /* [string,    2] 계좌증거금코드     */
    char    nationcode          [   3];    /* [string,    3] 국가코드           */
    char    investgb            [   4];    /* [string,    4] 투자자구분         */
    char    forecode            [   2];    /* [string,    2] 외국인코드         */
    char    medcode             [   1];    /* [string,    1] 주문매체구분       */
    char    ordid               [  12];    /* [string,   12] 주문식별자번호     */
    char    macid               [  12];    /* [string,   12] MAC주소            */
    char    orddate             [   8];    /* [string,    8] 호가일자           */
    char    rcvtime             [   9];    /* [string,    9] 회원사주문시각     */
    char    mem_filler          [   7];    /* [string,    7] mem_filler         */
    char    mem_accno           [  11];    /* [string,   11] mem_accno          */
    char    mem_filler1         [  42];    /* [string,   42] mem_filler1        */
    char    ordacpttm           [   9];    /* [string,    9] 매칭접수시간       */
    char    qty                 [  10];    /* [long  ,   10] 실정정취소수량     */
    char    autogb              [   1];    /* [string,    1] 자동취소구분       */
    char    rejcode             [   4];    /* [string,    4] 거부사유           */
    char    prgordde            [   1];    /* [string,    1] 프로그램호가신고   */
} H01_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data 구분 : 'C01'                 */
    char    lineseq             [  10];    /* [long  ,   10] 라인일련번호       */
    char    accno               [  11];    /* [string,   11] 계좌번호           */
    char    user                [   8];    /* [string,    8] 조작자ID           */
    char    seq                 [  11];    /* [long  ,   11] 일련번호           */
    char    trcode              [  11];    /* [string,   11] trcode             */
    char    megrpno             [   2];    /* [string,    2] 매칭그룹번호       */
    char    boardid             [   2];    /* [string,    2] 보드ID             */
    char    memberno            [   5];    /* [string,    5] 회원번호           */
    char    bpno                [   5];    /* [string,    5] 지점번호           */
    char    ordno               [  10];    /* [string,   10] 주문번호           */
    char    orgordno            [  10];    /* [string,   10] 원주문번호         */
    char    expcode             [  12];    /* [string,   12] 종목코드           */
    char    yakseq              [  11];    /* [string,   11] 약정번호           */
    char    cheprice            [  11];    /* [float , 11.2] 체결가격           */
    char    chevol              [  10];    /* [long  ,   10] 체결수량           */
    char    sessionid           [   2];    /* [string,    2] 세션ID             */
    char    chedate             [   8];    /* [string,    8] 체결일자           */
    char    chetime             [   9];    /* [string,    9] 체결시각           */
    char    spdprc1             [  11];    /* [float , 11.2] 최근월체결가격     */
    char    spdprc2             [  11];    /* [float , 11.2] 차근월체결가격     */
    char    dosugb              [   1];    /* [string,    1] 매도수구분         */
    char    accno1              [  12];    /* [string,   12] 계좌번호1          */
    char    sihogagb            [  11];    /* [string,   11] 시장조성호가구분   */
    char    jakino              [   5];    /* [string,    5] 위탁사번호         */
    char    daeyong             [  12];    /* [string,   12] 대용주권계좌번호   */
    char    mem_filler          [   7];    /* [string,    7] mem_filler         */
    char    mem_accno           [  11];    /* [string,   11] mem_accno          */
    char    mem_filler1         [  42];    /* [string,   42] mem_filler1        */
} C01_OutBlock;
