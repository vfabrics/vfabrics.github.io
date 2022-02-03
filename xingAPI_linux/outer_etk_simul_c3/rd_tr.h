/* ============================================================================== */
/* ���� - �ֹ� ����                                                               */
/* ============================================================================== */                                                                               
typedef struct                                                               
{                                                                                                                    
    char    lineseq             [  10];   /* �����Ϸù�ȣ                   */
    char    accno               [  11];   /* PushŰ                         */
    char    user                [   8];   /* ������ID                       */
    char    len                 [   6];   /* �������                       */
    char    gubun               [   1];   /* �������                       */
    char    compress            [   1];   /* ���౸��                       */
    char    encrypt             [   1];   /* ��ȣ����                       */
    char    offset              [   3];   /* �����������                   */
    char    trcode              [   8];   /* TRCODE                         */
    char    compid              [   3];   /* �̿���ȣ                     */
    char    userid              [  16];   /* �����ID                       */
    char    media               [   2];   /* ���Ӹ�ü                       */
    char    ifid                [   3];   /* I/F�Ϸù�ȣ                    */
    char    seq                 [   9];   /* �����Ϸù�ȣ                   */
    char    trid                [  16];   /* TR����ID                       */
    char    pubip               [  12];   /* ����IP                         */
    char    prvip               [  12];   /* �缳IP                         */
    char    pcbpno              [   3];   /* ó��������ȣ                   */
    char    bpno                [   3];   /* ������ȣ                       */
    char    termno              [   8];   /* �ܸ���ȣ                       */
    char    lang                [   1];   /* ����                       */
    char    proctm              [   9];   /* APó���ð�                     */
    char    msgcode             [   4];   /* �޼����ڵ�                     */
    char    outgu               [   1];   /* �޼�����±���                 */
    char    compreq             [   1];   /* �����û����                   */
    char    funckey             [   4];   /* ���Ű                         */
    char    reqcnt              [   4];   /* ��û���ڵ尳��                 */
    char    filler              [   6];   /* ���񿵿�                       */
    char    cont                [   1];   /* ���ӱ���                       */
    char    contkey             [  18];   /* ����Ű��                       */
    char    varlen              [   2];   /* �����ý��۱���                 */
    char    varhdlen            [   2];   /* �����ش�����                   */
    char    varmsglen           [   2];   /* �����޽�������                 */
    char    trsrc               [   1];   /* ��ȸ�߿���                     */
    char    eventid             [   4];   /* I/F�̺�ƮID                    */
    char    ifinfo              [   4];   /* I/F����                        */
    char    filler1             [  41];   /* ���񿵿�                       */
    char    ordchegb            [   2];   /* �ֹ�ü�ᱸ��                   */
    char    marketgb            [   2];   /* ���屸��                       */
    char    ordgb               [   2];   /* �ֹ�����                       */
    char    orgordno            [  10];   /* ���ֹ���ȣ                     */
    char    accno1              [  11];   /* ���¹�ȣ                       */
    char    accno2              [   9];   /* ���¹�ȣ                       */
    char    passwd              [   8];   /* ��й�ȣ                       */
    char    expcode             [  12];   /* �����ȣ                       */
    char    shtcode             [   9];   /* ���������ȣ                   */
    char    hname               [  40];   /* �����                         */
    char    ordqty              [  16];   /* �ֹ�����                       */
    char    ordprice            [  13];   /* �ֹ�����                       */
    char    hogagb              [   1];   /* �ֹ�����                       */
    char    etfhogagb           [   2];   /* ȣ�������ڵ�                   */
    char    pgmtype             [   2];   /* ���α׷�ȣ������               */
    char    gmhogagb            [   1];   /* ���ŵ�ȣ������                 */
    char    gmhogayn            [   1];   /* ���ŵ����ɿ���                 */
    char    singb               [   3];   /* �ſ뱸��                       */
    char    loandt              [   8];   /* ������                         */
    char    cvrgordtp           [   1];   /* �ݴ�Ÿ��ֹ�����               */
    char    strtgcode           [   6];   /* �����ڵ�                       */
    char    groupid             [  20];   /* �׷�ID                         */
    char    ordseqno            [  10];   /* �ֹ�ȸ��                       */
    char    prtno               [  10];   /* ��Ʈ��������ȣ                 */
    char    basketno            [  10];   /* �ٽ��Ϲ�ȣ                     */
    char    trchno              [  10];   /* Ʈ��ġ��ȣ                     */
    char    itemno              [  10];   /* �ƾ��۹�ȣ                     */
    char    brwmgmyn            [   1];   /* ���Ա���                       */
    char    mbrno               [   3];   /* ȸ�����ȣ                     */
    char    procgb              [   1];   /* ó������                       */
    char    admbrchno           [   3];   /* ����������ȣ                   */
    char    futaccno            [  20];   /* �������¹�ȣ                   */
    char    futmarketgb         [   1];   /* ������ǰ����                   */
    char    tongsingb           [   2];   /* ��Ÿ�ü����                   */
    char    lpgb                [   1];   /* �����������ڱ���               */
    char    dummy               [  20];   /* DUMMY                          */
    char    ordno               [  10];   /* �ֹ���ȣ                       */
    char    ordtm               [   9];   /* �ֹ��ð�                       */
    char    prntordno           [  10];   /* ���ֹ���ȣ                     */
    char    mgempno             [   9];   /* ���������ȣ                   */
    char    orgordundrqty       [  16];   /* ���ֹ���ü�����               */
    char    orgordmdfyqty       [  16];   /* ���ֹ���������                 */
    char    ordordcancelqty     [  16];   /* ���ֹ���Ҽ���                 */
    char    nmcpysndno          [  10];   /* ��ȸ����۽Ź�ȣ               */
    char    ordamt              [  16];   /* �ֹ��ݾ�                       */
    char    bnstp               [   1];   /* �Ÿű���                       */
    char    spareordno          [  10];   /* �����ֹ���ȣ                   */
    char    cvrgseqno           [  10];   /* �ݴ�Ÿ��Ϸù�ȣ               */
    char    rsvordno            [  10];   /* �����ֹ���ȣ                   */
    char    mtordseqno          [  10];   /* �����ֹ��Ϸù�ȣ               */
    char    spareordqty         [  16];   /* �����ֹ�����                   */
    char    orduserid           [  16];   /* �ֹ������ȣ                   */
    char    spotordqty          [  16];   /* �ǹ��ֹ�����                   */
    char    ordruseqty          [  16];   /* �����ֹ�����                 */
    char    mnyordamt           [  16];   /* �����ֹ��ݾ�                   */
    char    ordsubstamt         [  16];   /* �ֹ����ݾ�                   */
    char    ruseordamt          [  16];   /* �����ֹ��ݾ�                 */
    char    ordcmsnamt          [  16];   /* �������ֹ��ݾ�                 */
    char    crdtuseamt          [  16];   /* ���ſ�㺸�����           */
    char    secbalqty           [  16];   /* �ܰ����                       */
    char    spotordableqty      [  16];   /* �ǹ����ɼ���                   */
    char    ordableruseqty      [  16];   /* ���밡�ɼ���(�ŵ�)           */
    char    flctqty             [  16];   /* ��������                       */
    char    secbalqtyd2         [  16];   /* �ܰ����(D2)                   */
    char    sellableqty         [  16];   /* �ŵ��ֹ����ɼ���               */
    char    unercsellordqty     [  16];   /* ��ü��ŵ��ֹ�����             */
    char    avrpchsprc          [  13];   /* ��ո��԰�                     */
    char    pchsamt             [  16];   /* ���Աݾ�                       */
    char    deposit             [  16];   /* ������                         */
    char    substamt            [  16];   /* ����                         */
    char    csgnmnymgn          [  16];   /* ��Ź���ű�����                 */
    char    csgnsubstmgn        [  16];   /* ��Ź���űݴ��                 */
    char    crdtpldgruseamt     [  16];   /* �ſ�㺸�����               */
    char    ordablemny          [  16];   /* �ֹ���������                   */
    char    ordablesubstamt     [  16];   /* �ֹ����ɴ��                   */
    char    ruseableamt         [  16];   /* ���밡�ɱݾ�                 */
} SC0_OutBlock;                                                                                  

/* ============================================================================== */
/* ���� - �ֹ� ü��                                                               */
/* ============================================================================== */
typedef struct 
{
    char    dgubun              [   3];    /* Data ���� : 'SC1'                   */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ         */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ             */
    char    user                [   8];    /* [string,    8] ������ID             */
    char    len                 [   6];    /* [long  ,    6] �������             */
    char    gubun               [   1];    /* [string,    1] �������             */
    char    compress            [   1];    /* [string,    1] ���౸��             */
    char    encrypt             [   1];    /* [string,    1] ��ȣ����             */
    char    offset              [   3];    /* [long  ,    3] �����������         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] �̿���ȣ           */
    char    userid              [  16];    /* [string,   16] �����ID             */
    char    media               [   2];    /* [string,    2] ���Ӹ�ü             */
    char    ifid                [   3];    /* [string,    3] I/F�Ϸù�ȣ          */
    char    seq                 [   9];    /* [string,    9] �����Ϸù�ȣ         */
    char    trid                [  16];    /* [string,   16] TR����ID             */
    char    pubip               [  12];    /* [string,   12] ����IP               */
    char    prvip               [  12];    /* [string,   12] �缳IP               */
    char    pcbpno              [   3];    /* [string,    3] ó��������ȣ         */
    char    bpno                [   3];    /* [string,    3] ������ȣ             */
    char    termno              [   8];    /* [string,    8] �ܸ���ȣ             */
    char    lang                [   1];    /* [string,    1] ����             */
    char    proctm              [   9];    /* [long  ,    9] APó���ð�           */
    char    msgcode             [   4];    /* [string,    4] �޼����ڵ�           */
    char    outgu               [   1];    /* [string,    1] �޼�����±���       */
    char    compreq             [   1];    /* [string,    1] �����û����         */
    char    funckey             [   4];    /* [string,    4] ���Ű               */
    char    reqcnt              [   4];    /* [long  ,    4] ��û���ڵ尳��       */
    char    filler              [   6];    /* [string,    6] ���񿵿�             */
    char    cont                [   1];    /* [string,    1] ���ӱ���             */
    char    contkey             [  18];    /* [string,   18] ����Ű��             */
    char    varlen              [   2];    /* [long  ,    2] �����ý��۱���       */
    char    varhdlen            [   2];    /* [long  ,    2] �����ش�����         */
    char    varmsglen           [   2];    /* [long  ,    2] �����޽�������       */
    char    trsrc               [   1];    /* [string,    1] ��ȸ�߿���           */
    char    eventid             [   4];    /* [string,    4] I/F�̺�ƮID          */
    char    ifinfo              [   4];    /* [string,    4] I/F����              */
    char    filler1             [  41];    /* [string,   41] ���񿵿�             */
    char    ordxctptncode       [   2];    /* [string,    2] �ֹ�ü�������ڵ�     */
    char    ordmktcode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    ordptncode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    mgmtbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    accno1              [  20];    /* [string,   20] ���¹�ȣ             */
    char    acntnm              [  40];    /* [string,   40] ���¸�               */
    char    Isuno               [  12];    /* [string,   12] �����ȣ             */
    char    Isunm               [  40];    /* [string,   40] �����               */
    char    ordno1              [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    ordno               [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    orgordno1           [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    orgordno            [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    execno              [  10];    /* [long  ,   10] ü���ȣ             */
    char    ordqty              [  16];    /* [long  ,   16] �ֹ�����             */
    char    ordprc              [  13];    /* [long  ,   13] �ֹ�����             */
    char    execqty             [  16];    /* [long  ,   16] ü�����             */
    char    execprc             [  13];    /* [long  ,   13] ü�ᰡ��             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] ����Ȯ�μ���         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] ����Ȯ�ΰ���         */
    char    canccnfqty          [  16];    /* [long  ,   16] ���Ȯ�μ���         */
    char    rjtqty              [  16];    /* [long  ,   16] �źμ���             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] �ֹ�ó�������ڵ�     */
    char    mtiordseqno         [  10];    /* [long  ,   10] �����ֹ��Ϸù�ȣ     */
    char    ordcndi             [   1];    /* [string,    1] �ֹ�����             */
    char    ordprcptncode       [   2];    /* [string,    2] ȣ�������ڵ�         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] ������ü�����       */
    char    shtnIsuno           [   9];    /* [string,    9] ���������ȣ         */
    char    opdrtnno            [  12];    /* [string,   12] ������ù�ȣ         */
    char    cvrgordtp           [   1];    /* [string,    1] �ݴ�Ÿ��ֹ�����     */
    char    unercqty            [  16];    /* [long  ,   16] ��ü�����(�ֹ�)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] ���ֹ���ü�����     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] ���ֹ���������       */
    char    orgordcancqty       [  16];    /* [long  ,   16] ���ֹ���Ҽ���       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] �ֹ����ü�ᰡ��     */
    char    ordamt              [  16];    /* [long  ,   16] �ֹ��ݾ�             */
    char    stdIsuno            [  12];    /* [string,   12] ǥ�������ȣ         */
    char    bfstdIsuno          [  12];    /* [string,   12] ��ǥ�������ȣ       */
    char    bnstp               [   1];    /* [string,    1] �Ÿű���             */
    char    ordtrdptncode       [   2];    /* [string,    2] �ֹ��ŷ������ڵ�     */
    char    mgntrncode          [   3];    /* [string,    3] �ſ�ŷ��ڵ�         */
    char    adduptp             [   2];    /* [string,    2] �������ջ��ڵ�       */
    char    commdacode          [   2];    /* [string,    2] ��Ÿ�ü�ڵ�         */
    char    Loandt              [   8];    /* [string,    8] ������               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] ȸ��/��ȸ�����ȣ    */
    char    ordacntno           [  20];    /* [string,   20] �ֹ����¹�ȣ         */
    char    agrgbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    mgempno             [   9];    /* [string,    9] ���������ȣ         */
    char    futsLnkbrnno        [   3];    /* [string,    3] ��������������ȣ     */
    char    futsLnkacntno       [  20];    /* [string,   20] ����������¹�ȣ     */
    char    futsmkttp           [   1];    /* [string,    1] �������屸��         */
    char    regmktcode          [   2];    /* [string,    2] ��Ͻ����ڵ�         */
    char    mnymgnrat           [   7];    /* [long  ,    7] �������űݷ�         */
    char    substmgnrat         [   9];    /* [long  ,    9] ������űݷ�         */
    char    mnyexecamt          [  16];    /* [long  ,   16] ����ü��ݾ�         */
    char    ubstexecamt         [  16];    /* [long  ,   16] ���ü��ݾ�         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] ������ü��ݾ�       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] �ſ�㺸ü��ݾ�     */
    char    crdtexecamt         [  16];    /* [long  ,   16] �ſ�ü��ݾ�         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    spotexecqty         [  16];    /* [long  ,   16] �ǹ�ü�����         */
    char    stslexecqty         [  16];    /* [long  ,   16] ���ŵ�ü�����       */
    char    strtgcode           [   6];    /* [string,    6] �����ڵ�             */
    char    grpId               [  20];    /* [string,   20] �׷�Id               */
    char    ordseqno            [  10];    /* [long  ,   10] �ֹ�ȸ��             */
    char    ptflno              [  10];    /* [long  ,   10] ��Ʈ��������ȣ       */
    char    bskno               [  10];    /* [long  ,   10] �ٽ��Ϲ�ȣ           */
    char    trchno              [  10];    /* [long  ,   10] Ʈ��ġ��ȣ           */
    char    itemno              [  10];    /* [long  ,   10] �����۹�ȣ           */
    char    orduserId           [  16];    /* [string,   16] �ֹ���Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] ���԰�������         */
    char    frgrunqno           [   6];    /* [string,    6] �ܱ��ΰ�����ȣ       */
    char    trtzxLevytp         [   1];    /* [string,    1] �ŷ���¡������       */
    char    lptp                [   1];    /* [string,    1] �����������ڱ���     */
    char    exectime            [   9];    /* [string,    9] ü��ð�             */
    char    rcptexectime        [   9];    /* [string,    9] �ŷ��Ҽ���ü��ð�   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] �ܿ�����ݾ�         */
    char    secbalqty           [  16];    /* [long  ,   16] �ܰ����             */
    char    spotordableqty      [  16];    /* [long  ,   16] �ǹ����ɼ���         */
    char    ordableruseqty      [  16];    /* [long  ,   16] ���밡�ɼ���(�ŵ�) */
    char    flctqty             [  16];    /* [long  ,   16] ��������             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] �ܰ����(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] �ŵ��ֹ����ɼ���     */
    char    unercsellordqty     [  16];    /* [long  ,   16] ��ü��ŵ��ֹ�����   */
    char    avrpchsprc          [  13];    /* [long  ,   13] ��ո��԰�           */
    char    pchsant             [  16];    /* [long  ,   16] ���Աݾ�             */
    char    deposit             [  16];    /* [long  ,   16] ������               */
    char    substamt            [  16];    /* [long  ,   16] ����               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] ��Ź���ű�����       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] ��Ź���űݴ��       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] �ſ�㺸�����     */
    char    ordablemny          [  16];    /* [long  ,   16] �ֹ���������         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] �ֹ����ɴ��         */
    char    ruseableamt         [  16];    /* [long  ,   16] ���밡�ɱݾ�       */
} SC1_OutBlock;		


/* ============================================================================== */
/* ���� - �ֹ� ����                                                               */
/* ============================================================================== */
typedef struct 
{					   
    char    dgubun              [   3];    /* Data ���� : 'SC2'                   */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ         */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ             */
    char    user                [   8];    /* [string,    8] ������ID             */
    char    len                 [   6];    /* [long  ,    6] �������             */
    char    gubun               [   1];    /* [string,    1] �������             */
    char    compress            [   1];    /* [string,    1] ���౸��             */
    char    encrypt             [   1];    /* [string,    1] ��ȣ����             */
    char    offset              [   3];    /* [long  ,    3] �����������         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] �̿���ȣ           */
    char    userid              [  16];    /* [string,   16] �����ID             */
    char    media               [   2];    /* [string,    2] ���Ӹ�ü             */
    char    ifid                [   3];    /* [string,    3] I/F�Ϸù�ȣ          */
    char    seq                 [   9];    /* [string,    9] �����Ϸù�ȣ         */
    char    trid                [  16];    /* [string,   16] TR����ID             */
    char    pubip               [  12];    /* [string,   12] ����IP               */
    char    prvip               [  12];    /* [string,   12] �缳IP               */
    char    pcbpno              [   3];    /* [string,    3] ó��������ȣ         */
    char    bpno                [   3];    /* [string,    3] ������ȣ             */
    char    termno              [   8];    /* [string,    8] �ܸ���ȣ             */
    char    lang                [   1];    /* [string,    1] ����             */
    char    proctm              [   9];    /* [long  ,    9] APó���ð�           */
    char    msgcode             [   4];    /* [string,    4] �޼����ڵ�           */
    char    outgu               [   1];    /* [string,    1] �޼�����±���       */
    char    compreq             [   1];    /* [string,    1] �����û����         */
    char    funckey             [   4];    /* [string,    4] ���Ű               */
    char    reqcnt              [   4];    /* [long  ,    4] ��û���ڵ尳��       */
    char    filler              [   6];    /* [string,    6] ���񿵿�             */
    char    cont                [   1];    /* [string,    1] ���ӱ���             */
    char    contkey             [  18];    /* [string,   18] ����Ű��             */
    char    varlen              [   2];    /* [long  ,    2] �����ý��۱���       */
    char    varhdlen            [   2];    /* [long  ,    2] �����ش�����         */
    char    varmsglen           [   2];    /* [long  ,    2] �����޽�������       */
    char    trsrc               [   1];    /* [string,    1] ��ȸ�߿���           */
    char    eventid             [   4];    /* [string,    4] I/F�̺�ƮID          */
    char    ifinfo              [   4];    /* [string,    4] I/F����              */
    char    filler1             [  41];    /* [string,   41] ���񿵿�             */
    char    ordxctptncode       [   2];    /* [string,    2] �ֹ�ü�������ڵ�     */
    char    ordmktcode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    ordptncode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    mgmtbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    accno1              [  20];    /* [string,   20] ���¹�ȣ             */
    char    acntnm              [  40];    /* [string,   40] ���¸�               */
    char    Isuno               [  12];    /* [string,   12] �����ȣ             */
    char    Isunm               [  40];    /* [string,   40] �����               */
    char    ordno1              [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    ordno               [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    orgordno1           [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    orgordno            [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    execno              [  10];    /* [long  ,   10] ü���ȣ             */
    char    ordqty              [  16];    /* [long  ,   16] �ֹ�����             */
    char    ordprc              [  13];    /* [long  ,   13] �ֹ�����             */
    char    execqty             [  16];    /* [long  ,   16] ü�����             */
    char    execprc             [  13];    /* [long  ,   13] ü�ᰡ��             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] ����Ȯ�μ���         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] ����Ȯ�ΰ���         */
    char    canccnfqty          [  16];    /* [long  ,   16] ���Ȯ�μ���         */
    char    rjtqty              [  16];    /* [long  ,   16] �źμ���             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] �ֹ�ó�������ڵ�     */
    char    mtiordseqno         [  10];    /* [long  ,   10] �����ֹ��Ϸù�ȣ     */
    char    ordcndi             [   1];    /* [string,    1] �ֹ�����             */
    char    ordprcptncode       [   2];    /* [string,    2] ȣ�������ڵ�         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] ������ü�����       */
    char    shtnIsuno           [   9];    /* [string,    9] ���������ȣ         */
    char    opdrtnno            [  12];    /* [string,   12] ������ù�ȣ         */
    char    cvrgordtp           [   1];    /* [string,    1] �ݴ�Ÿ��ֹ�����     */
    char    unercqty            [  16];    /* [long  ,   16] ��ü�����(�ֹ�)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] ���ֹ���ü�����     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] ���ֹ���������       */
    char    orgordcancqty       [  16];    /* [long  ,   16] ���ֹ���Ҽ���       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] �ֹ����ü�ᰡ��     */
    char    ordamt              [  16];    /* [long  ,   16] �ֹ��ݾ�             */
    char    stdIsuno            [  12];    /* [string,   12] ǥ�������ȣ         */
    char    bfstdIsuno          [  12];    /* [string,   12] ��ǥ�������ȣ       */
    char    bnstp               [   1];    /* [string,    1] �Ÿű���             */
    char    ordtrdptncode       [   2];    /* [string,    2] �ֹ��ŷ������ڵ�     */
    char    mgntrncode          [   3];    /* [string,    3] �ſ�ŷ��ڵ�         */
    char    adduptp             [   2];    /* [string,    2] �������ջ��ڵ�       */
    char    commdacode          [   2];    /* [string,    2] ��Ÿ�ü�ڵ�         */
    char    Loandt              [   8];    /* [string,    8] ������               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] ȸ��/��ȸ�����ȣ    */
    char    ordacntno           [  20];    /* [string,   20] �ֹ����¹�ȣ         */
    char    agrgbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    mgempno             [   9];    /* [string,    9] ���������ȣ         */
    char    futsLnkbrnno        [   3];    /* [string,    3] ��������������ȣ     */
    char    futsLnkacntno       [  20];    /* [string,   20] ����������¹�ȣ     */
    char    futsmkttp           [   1];    /* [string,    1] �������屸��         */
    char    regmktcode          [   2];    /* [string,    2] ��Ͻ����ڵ�         */
    char    mnymgnrat           [   7];    /* [long  ,    7] �������űݷ�         */
    char    substmgnrat         [   9];    /* [long  ,    9] ������űݷ�         */
    char    mnyexecamt          [  16];    /* [long  ,   16] ����ü��ݾ�         */
    char    ubstexecamt         [  16];    /* [long  ,   16] ���ü��ݾ�         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] ������ü��ݾ�       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] �ſ�㺸ü��ݾ�     */
    char    crdtexecamt         [  16];    /* [long  ,   16] �ſ�ü��ݾ�         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    spotexecqty         [  16];    /* [long  ,   16] �ǹ�ü�����         */
    char    stslexecqty         [  16];    /* [long  ,   16] ���ŵ�ü�����       */
    char    strtgcode           [   6];    /* [string,    6] �����ڵ�             */
    char    grpId               [  20];    /* [string,   20] �׷�Id               */
    char    ordseqno            [  10];    /* [long  ,   10] �ֹ�ȸ��             */
    char    ptflno              [  10];    /* [long  ,   10] ��Ʈ��������ȣ       */
    char    bskno               [  10];    /* [long  ,   10] �ٽ��Ϲ�ȣ           */
    char    trchno              [  10];    /* [long  ,   10] Ʈ��ġ��ȣ           */
    char    itemno              [  10];    /* [long  ,   10] �����۹�ȣ           */
    char    orduserId           [  16];    /* [string,   16] �ֹ���Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] ���԰�������         */
    char    frgrunqno           [   6];    /* [string,    6] �ܱ��ΰ�����ȣ       */
    char    trtzxLevytp         [   1];    /* [string,    1] �ŷ���¡������       */
    char    lptp                [   1];    /* [string,    1] �����������ڱ���     */
    char    exectime            [   9];    /* [string,    9] ü��ð�             */
    char    rcptexectime        [   9];    /* [string,    9] �ŷ��Ҽ���ü��ð�   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] �ܿ�����ݾ�         */
    char    secbalqty           [  16];    /* [long  ,   16] �ܰ����             */
    char    spotordableqty      [  16];    /* [long  ,   16] �ǹ����ɼ���         */
    char    ordableruseqty      [  16];    /* [long  ,   16] ���밡�ɼ���(�ŵ�) */
    char    flctqty             [  16];    /* [long  ,   16] ��������             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] �ܰ����(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] �ŵ��ֹ����ɼ���     */
    char    unercsellordqty     [  16];    /* [long  ,   16] ��ü��ŵ��ֹ�����   */
    char    avrpchsprc          [  13];    /* [long  ,   13] ��ո��԰�           */
    char    pchsant             [  16];    /* [long  ,   16] ���Աݾ�             */
    char    deposit             [  16];    /* [long  ,   16] ������               */
    char    substamt            [  16];    /* [long  ,   16] ����               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] ��Ź���ű�����       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] ��Ź���űݴ��       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] �ſ�㺸�����     */
    char    ordablemny          [  16];    /* [long  ,   16] �ֹ���������         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] �ֹ����ɴ��         */
    char    ruseableamt         [  16];    /* [long  ,   16] ���밡�ɱݾ�       */
} SC2_OutBlock;

/* ============================================================================== */
/* ���� - �ֹ� ���                                                               */
/* ============================================================================== */
typedef struct 
{			
    char    dgubun              [   3];    /* Data ���� : 'SC3'                   */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ         */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ             */
    char    user                [   8];    /* [string,    8] ������ID             */
    char    len                 [   6];    /* [long  ,    6] �������             */
    char    gubun               [   1];    /* [string,    1] �������             */
    char    compress            [   1];    /* [string,    1] ���౸��             */
    char    encrypt             [   1];    /* [string,    1] ��ȣ����             */
    char    offset              [   3];    /* [long  ,    3] �����������         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] �̿���ȣ           */
    char    userid              [  16];    /* [string,   16] �����ID             */
    char    media               [   2];    /* [string,    2] ���Ӹ�ü             */
    char    ifid                [   3];    /* [string,    3] I/F�Ϸù�ȣ          */
    char    seq                 [   9];    /* [string,    9] �����Ϸù�ȣ         */
    char    trid                [  16];    /* [string,   16] TR����ID             */
    char    pubip               [  12];    /* [string,   12] ����IP               */
    char    prvip               [  12];    /* [string,   12] �缳IP               */
    char    pcbpno              [   3];    /* [string,    3] ó��������ȣ         */
    char    bpno                [   3];    /* [string,    3] ������ȣ             */
    char    termno              [   8];    /* [string,    8] �ܸ���ȣ             */
    char    lang                [   1];    /* [string,    1] ����             */
    char    proctm              [   9];    /* [long  ,    9] APó���ð�           */
    char    msgcode             [   4];    /* [string,    4] �޼����ڵ�           */
    char    outgu               [   1];    /* [string,    1] �޼�����±���       */
    char    compreq             [   1];    /* [string,    1] �����û����         */
    char    funckey             [   4];    /* [string,    4] ���Ű               */
    char    reqcnt              [   4];    /* [long  ,    4] ��û���ڵ尳��       */
    char    filler              [   6];    /* [string,    6] ���񿵿�             */
    char    cont                [   1];    /* [string,    1] ���ӱ���             */
    char    contkey             [  18];    /* [string,   18] ����Ű��             */
    char    varlen              [   2];    /* [long  ,    2] �����ý��۱���       */
    char    varhdlen            [   2];    /* [long  ,    2] �����ش�����         */
    char    varmsglen           [   2];    /* [long  ,    2] �����޽�������       */
    char    trsrc               [   1];    /* [string,    1] ��ȸ�߿���           */
    char    eventid             [   4];    /* [string,    4] I/F�̺�ƮID          */
    char    ifinfo              [   4];    /* [string,    4] I/F����              */
    char    filler1             [  41];    /* [string,   41] ���񿵿�             */
    char    ordxctptncode       [   2];    /* [string,    2] �ֹ�ü�������ڵ�     */
    char    ordmktcode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    ordptncode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    mgmtbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    accno1              [  20];    /* [string,   20] ���¹�ȣ             */
    char    acntnm              [  40];    /* [string,   40] ���¸�               */
    char    Isuno               [  12];    /* [string,   12] �����ȣ             */
    char    Isunm               [  40];    /* [string,   40] �����               */
    char    ordno1              [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    ordno               [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    orgordno1           [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    orgordno            [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    execno              [  10];    /* [long  ,   10] ü���ȣ             */
    char    ordqty              [  16];    /* [long  ,   16] �ֹ�����             */
    char    ordprc              [  13];    /* [long  ,   13] �ֹ�����             */
    char    execqty             [  16];    /* [long  ,   16] ü�����             */
    char    execprc             [  13];    /* [long  ,   13] ü�ᰡ��             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] ����Ȯ�μ���         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] ����Ȯ�ΰ���         */
    char    canccnfqty          [  16];    /* [long  ,   16] ���Ȯ�μ���         */
    char    rjtqty              [  16];    /* [long  ,   16] �źμ���             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] �ֹ�ó�������ڵ�     */
    char    mtiordseqno         [  10];    /* [long  ,   10] �����ֹ��Ϸù�ȣ     */
    char    ordcndi             [   1];    /* [string,    1] �ֹ�����             */
    char    ordprcptncode       [   2];    /* [string,    2] ȣ�������ڵ�         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] ������ü�����       */
    char    shtnIsuno           [   9];    /* [string,    9] ���������ȣ         */
    char    opdrtnno            [  12];    /* [string,   12] ������ù�ȣ         */
    char    cvrgordtp           [   1];    /* [string,    1] �ݴ�Ÿ��ֹ�����     */
    char    unercqty            [  16];    /* [long  ,   16] ��ü�����(�ֹ�)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] ���ֹ���ü�����     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] ���ֹ���������       */
    char    orgordcancqty       [  16];    /* [long  ,   16] ���ֹ���Ҽ���       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] �ֹ����ü�ᰡ��     */
    char    ordamt              [  16];    /* [long  ,   16] �ֹ��ݾ�             */
    char    stdIsuno            [  12];    /* [string,   12] ǥ�������ȣ         */
    char    bfstdIsuno          [  12];    /* [string,   12] ��ǥ�������ȣ       */
    char    bnstp               [   1];    /* [string,    1] �Ÿű���             */
    char    ordtrdptncode       [   2];    /* [string,    2] �ֹ��ŷ������ڵ�     */
    char    mgntrncode          [   3];    /* [string,    3] �ſ�ŷ��ڵ�         */
    char    adduptp             [   2];    /* [string,    2] �������ջ��ڵ�       */
    char    commdacode          [   2];    /* [string,    2] ��Ÿ�ü�ڵ�         */
    char    Loandt              [   8];    /* [string,    8] ������               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] ȸ��/��ȸ�����ȣ    */
    char    ordacntno           [  20];    /* [string,   20] �ֹ����¹�ȣ         */
    char    agrgbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    mgempno             [   9];    /* [string,    9] ���������ȣ         */
    char    futsLnkbrnno        [   3];    /* [string,    3] ��������������ȣ     */
    char    futsLnkacntno       [  20];    /* [string,   20] ����������¹�ȣ     */
    char    futsmkttp           [   1];    /* [string,    1] �������屸��         */
    char    regmktcode          [   2];    /* [string,    2] ��Ͻ����ڵ�         */
    char    mnymgnrat           [   7];    /* [long  ,    7] �������űݷ�         */
    char    substmgnrat         [   9];    /* [long  ,    9] ������űݷ�         */
    char    mnyexecamt          [  16];    /* [long  ,   16] ����ü��ݾ�         */
    char    ubstexecamt         [  16];    /* [long  ,   16] ���ü��ݾ�         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] ������ü��ݾ�       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] �ſ�㺸ü��ݾ�     */
    char    crdtexecamt         [  16];    /* [long  ,   16] �ſ�ü��ݾ�         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    spotexecqty         [  16];    /* [long  ,   16] �ǹ�ü�����         */
    char    stslexecqty         [  16];    /* [long  ,   16] ���ŵ�ü�����       */
    char    strtgcode           [   6];    /* [string,    6] �����ڵ�             */
    char    grpId               [  20];    /* [string,   20] �׷�Id               */
    char    ordseqno            [  10];    /* [long  ,   10] �ֹ�ȸ��             */
    char    ptflno              [  10];    /* [long  ,   10] ��Ʈ��������ȣ       */
    char    bskno               [  10];    /* [long  ,   10] �ٽ��Ϲ�ȣ           */
    char    trchno              [  10];    /* [long  ,   10] Ʈ��ġ��ȣ           */
    char    itemno              [  10];    /* [long  ,   10] �����۹�ȣ           */
    char    orduserId           [  16];    /* [string,   16] �ֹ���Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] ���԰�������         */
    char    frgrunqno           [   6];    /* [string,    6] �ܱ��ΰ�����ȣ       */
    char    trtzxLevytp         [   1];    /* [string,    1] �ŷ���¡������       */
    char    lptp                [   1];    /* [string,    1] �����������ڱ���     */
    char    exectime            [   9];    /* [string,    9] ü��ð�             */
    char    rcptexectime        [   9];    /* [string,    9] �ŷ��Ҽ���ü��ð�   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] �ܿ�����ݾ�         */
    char    secbalqty           [  16];    /* [long  ,   16] �ܰ����             */
    char    spotordableqty      [  16];    /* [long  ,   16] �ǹ����ɼ���         */
    char    ordableruseqty      [  16];    /* [long  ,   16] ���밡�ɼ���(�ŵ�) */
    char    flctqty             [  16];    /* [long  ,   16] ��������             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] �ܰ����(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] �ŵ��ֹ����ɼ���     */
    char    unercsellordqty     [  16];    /* [long  ,   16] ��ü��ŵ��ֹ�����   */
    char    avrpchsprc          [  13];    /* [long  ,   13] ��ո��԰�           */
    char    pchsant             [  16];    /* [long  ,   16] ���Աݾ�             */
    char    deposit             [  16];    /* [long  ,   16] ������               */
    char    substamt            [  16];    /* [long  ,   16] ����               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] ��Ź���ű�����       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] ��Ź���űݴ��       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] �ſ�㺸�����     */
    char    ordablemny          [  16];    /* [long  ,   16] �ֹ���������         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] �ֹ����ɴ��         */
    char    ruseableamt         [  16];    /* [long  ,   16] ���밡�ɱݾ�       */
} SC3_OutBlock;

/* ============================================================================== */
/* ���� - �ֹ� �ź�                                                               */
/* ============================================================================== */		  
typedef struct 
{			
    char    dgubun              [   3];    /* Data ���� : 'SC4'                   */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ         */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ             */
    char    user                [   8];    /* [string,    8] ������ID             */
    char    len                 [   6];    /* [long  ,    6] �������             */
    char    gubun               [   1];    /* [string,    1] �������             */
    char    compress            [   1];    /* [string,    1] ���౸��             */
    char    encrypt             [   1];    /* [string,    1] ��ȣ����             */
    char    offset              [   3];    /* [long  ,    3] �����������         */
    char    trcode              [   8];    /* [string,    8] TRCODE               */
    char    compid              [   3];    /* [string,    3] �̿���ȣ           */
    char    userid              [  16];    /* [string,   16] �����ID             */
    char    media               [   2];    /* [string,    2] ���Ӹ�ü             */
    char    ifid                [   3];    /* [string,    3] I/F�Ϸù�ȣ          */
    char    seq                 [   9];    /* [string,    9] �����Ϸù�ȣ         */
    char    trid                [  16];    /* [string,   16] TR����ID             */
    char    pubip               [  12];    /* [string,   12] ����IP               */
    char    prvip               [  12];    /* [string,   12] �缳IP               */
    char    pcbpno              [   3];    /* [string,    3] ó��������ȣ         */
    char    bpno                [   3];    /* [string,    3] ������ȣ             */
    char    termno              [   8];    /* [string,    8] �ܸ���ȣ             */
    char    lang                [   1];    /* [string,    1] ����             */
    char    proctm              [   9];    /* [long  ,    9] APó���ð�           */
    char    msgcode             [   4];    /* [string,    4] �޼����ڵ�           */
    char    outgu               [   1];    /* [string,    1] �޼�����±���       */
    char    compreq             [   1];    /* [string,    1] �����û����         */
    char    funckey             [   4];    /* [string,    4] ���Ű               */
    char    reqcnt              [   4];    /* [long  ,    4] ��û���ڵ尳��       */
    char    filler              [   6];    /* [string,    6] ���񿵿�             */
    char    cont                [   1];    /* [string,    1] ���ӱ���             */
    char    contkey             [  18];    /* [string,   18] ����Ű��             */
    char    varlen              [   2];    /* [long  ,    2] �����ý��۱���       */
    char    varhdlen            [   2];    /* [long  ,    2] �����ش�����         */
    char    varmsglen           [   2];    /* [long  ,    2] �����޽�������       */
    char    trsrc               [   1];    /* [string,    1] ��ȸ�߿���           */
    char    eventid             [   4];    /* [string,    4] I/F�̺�ƮID          */
    char    ifinfo              [   4];    /* [string,    4] I/F����              */
    char    filler1             [  41];    /* [string,   41] ���񿵿�             */
    char    ordxctptncode       [   2];    /* [string,    2] �ֹ�ü�������ڵ�     */
    char    ordmktcode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    ordptncode          [   2];    /* [string,    2] �ֹ������ڵ�         */
    char    mgmtbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    accno1              [  20];    /* [string,   20] ���¹�ȣ             */
    char    acntnm              [  40];    /* [string,   40] ���¸�               */
    char    Isuno               [  12];    /* [string,   12] �����ȣ             */
    char    Isunm               [  40];    /* [string,   40] �����               */
    char    ordno1              [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    ordno               [   5];    /* [long  ,    5] �ֹ���ȣ             */
    char    orgordno1           [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    orgordno            [   5];    /* [long  ,    5] ���ֹ���ȣ           */
    char    execno              [  10];    /* [long  ,   10] ü���ȣ             */
    char    ordqty              [  16];    /* [long  ,   16] �ֹ�����             */
    char    ordprc              [  13];    /* [long  ,   13] �ֹ�����             */
    char    execqty             [  16];    /* [long  ,   16] ü�����             */
    char    execprc             [  13];    /* [long  ,   13] ü�ᰡ��             */
    char    mdfycnfqty          [  16];    /* [long  ,   16] ����Ȯ�μ���         */
    char    mdfycnfprc          [  16];    /* [long  ,   16] ����Ȯ�ΰ���         */
    char    canccnfqty          [  16];    /* [long  ,   16] ���Ȯ�μ���         */
    char    rjtqty              [  16];    /* [long  ,   16] �źμ���             */
    char    ordtrxptncode       [   4];    /* [long  ,    4] �ֹ�ó�������ڵ�     */
    char    mtiordseqno         [  10];    /* [long  ,   10] �����ֹ��Ϸù�ȣ     */
    char    ordcndi             [   1];    /* [string,    1] �ֹ�����             */
    char    ordprcptncode       [   2];    /* [string,    2] ȣ�������ڵ�         */
    char    nsavtrdqty          [  16];    /* [long  ,   16] ������ü�����       */
    char    shtnIsuno           [   9];    /* [string,    9] ���������ȣ         */
    char    opdrtnno            [  12];    /* [string,   12] ������ù�ȣ         */
    char    cvrgordtp           [   1];    /* [string,    1] �ݴ�Ÿ��ֹ�����     */
    char    unercqty            [  16];    /* [long  ,   16] ��ü�����(�ֹ�)     */
    char    orgordunercqty      [  16];    /* [long  ,   16] ���ֹ���ü�����     */
    char    orgordmdfyqty       [  16];    /* [long  ,   16] ���ֹ���������       */
    char    orgordcancqty       [  16];    /* [long  ,   16] ���ֹ���Ҽ���       */
    char    ordavrexecprc       [  13];    /* [long  ,   13] �ֹ����ü�ᰡ��     */
    char    ordamt              [  16];    /* [long  ,   16] �ֹ��ݾ�             */
    char    stdIsuno            [  12];    /* [string,   12] ǥ�������ȣ         */
    char    bfstdIsuno          [  12];    /* [string,   12] ��ǥ�������ȣ       */
    char    bnstp               [   1];    /* [string,    1] �Ÿű���             */
    char    ordtrdptncode       [   2];    /* [string,    2] �ֹ��ŷ������ڵ�     */
    char    mgntrncode          [   3];    /* [string,    3] �ſ�ŷ��ڵ�         */
    char    adduptp             [   2];    /* [string,    2] �������ջ��ڵ�       */
    char    commdacode          [   2];    /* [string,    2] ��Ÿ�ü�ڵ�         */
    char    Loandt              [   8];    /* [string,    8] ������               */
    char    mbrnmbrno           [   3];    /* [long  ,    3] ȸ��/��ȸ�����ȣ    */
    char    ordacntno           [  20];    /* [string,   20] �ֹ����¹�ȣ         */
    char    agrgbrnno           [   3];    /* [string,    3] ����������ȣ         */
    char    mgempno             [   9];    /* [string,    9] ���������ȣ         */
    char    futsLnkbrnno        [   3];    /* [string,    3] ��������������ȣ     */
    char    futsLnkacntno       [  20];    /* [string,   20] ����������¹�ȣ     */
    char    futsmkttp           [   1];    /* [string,    1] �������屸��         */
    char    regmktcode          [   2];    /* [string,    2] ��Ͻ����ڵ�         */
    char    mnymgnrat           [   7];    /* [long  ,    7] �������űݷ�         */
    char    substmgnrat         [   9];    /* [long  ,    9] ������űݷ�         */
    char    mnyexecamt          [  16];    /* [long  ,   16] ����ü��ݾ�         */
    char    ubstexecamt         [  16];    /* [long  ,   16] ���ü��ݾ�         */
    char    cmsnamtexecamt      [  16];    /* [long  ,   16] ������ü��ݾ�       */
    char    crdtpldgexecamt     [  16];    /* [long  ,   16] �ſ�㺸ü��ݾ�     */
    char    crdtexecamt         [  16];    /* [long  ,   16] �ſ�ü��ݾ�         */
    char    prdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    crdayruseexecval    [  16];    /* [long  ,   16] ��������ü��ݾ�   */
    char    spotexecqty         [  16];    /* [long  ,   16] �ǹ�ü�����         */
    char    stslexecqty         [  16];    /* [long  ,   16] ���ŵ�ü�����       */
    char    strtgcode           [   6];    /* [string,    6] �����ڵ�             */
    char    grpId               [  20];    /* [string,   20] �׷�Id               */
    char    ordseqno            [  10];    /* [long  ,   10] �ֹ�ȸ��             */
    char    ptflno              [  10];    /* [long  ,   10] ��Ʈ��������ȣ       */
    char    bskno               [  10];    /* [long  ,   10] �ٽ��Ϲ�ȣ           */
    char    trchno              [  10];    /* [long  ,   10] Ʈ��ġ��ȣ           */
    char    itemno              [  10];    /* [long  ,   10] �����۹�ȣ           */
    char    orduserId           [  16];    /* [string,   16] �ֹ���Id             */
    char    brwmgmtYn           [   1];    /* [long  ,    1] ���԰�������         */
    char    frgrunqno           [   6];    /* [string,    6] �ܱ��ΰ�����ȣ       */
    char    trtzxLevytp         [   1];    /* [string,    1] �ŷ���¡������       */
    char    lptp                [   1];    /* [string,    1] �����������ڱ���     */
    char    exectime            [   9];    /* [string,    9] ü��ð�             */
    char    rcptexectime        [   9];    /* [string,    9] �ŷ��Ҽ���ü��ð�   */
    char    rmndLoanamt         [  16];    /* [long  ,   16] �ܿ�����ݾ�         */
    char    secbalqty           [  16];    /* [long  ,   16] �ܰ����             */
    char    spotordableqty      [  16];    /* [long  ,   16] �ǹ����ɼ���         */
    char    ordableruseqty      [  16];    /* [long  ,   16] ���밡�ɼ���(�ŵ�) */
    char    flctqty             [  16];    /* [long  ,   16] ��������             */
    char    secbalqtyd2         [  16];    /* [long  ,   16] �ܰ����(d2)         */
    char    sellableqty         [  16];    /* [long  ,   16] �ŵ��ֹ����ɼ���     */
    char    unercsellordqty     [  16];    /* [long  ,   16] ��ü��ŵ��ֹ�����   */
    char    avrpchsprc          [  13];    /* [long  ,   13] ��ո��԰�           */
    char    pchsant             [  16];    /* [long  ,   16] ���Աݾ�             */
    char    deposit             [  16];    /* [long  ,   16] ������               */
    char    substamt            [  16];    /* [long  ,   16] ����               */
    char    csgnmnymgn          [  16];    /* [long  ,   16] ��Ź���ű�����       */
    char    csgnsubstmgn        [  16];    /* [long  ,   16] ��Ź���űݴ��       */
    char    crdtpldgruseamt     [  16];    /* [long  ,   16] �ſ�㺸�����     */
    char    ordablemny          [  16];    /* [long  ,   16] �ֹ���������         */
    char    ordablesubstamt     [  16];    /* [long  ,   16] �ֹ����ɴ��         */
    char    ruseableamt         [  16];    /* [long  ,   16] ���밡�ɱݾ�       */
} SC4_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data ���� : 'O01'                    */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ          */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ              */
    char    user                [   8];    /* [string,    8] ������ID              */
    char    len                 [   6];    /* [long  ,    6] �������              */
    char    gubun               [   1];    /* [string,    1] �������              */
    char    compress            [   1];    /* [string,    1] ���౸��              */
    char    encrypt             [   1];    /* [string,    1] ��ȣ����              */
    char    offset              [   3];    /* [long  ,    3] �����������          */
    char    trcode              [   8];    /* [string,    8] TRCODE                */
    char    compid              [   3];    /* [string,    3] �̿���ȣ            */
    char    userid              [  16];    /* [string,   16] �����ID              */
    char    media               [   2];    /* [string,    2] ���Ӹ�ü              */
    char    ifid                [   3];    /* [string,    3] I/F�Ϸù�ȣ           */
    char    seq                 [   9];    /* [string,    9] �����Ϸù�ȣ          */
    char    trid                [  16];    /* [string,   16] TR����ID              */
    char    pubip               [  12];    /* [string,   12] ����IP                */
    char    prvip               [  12];    /* [string,   12] �缳IP                */
    char    pcbpno              [   3];    /* [string,    3] ó��������ȣ          */
    char    bpno                [   3];    /* [string,    3] ������ȣ              */
    char    termno              [   8];    /* [string,    8] �ܸ���ȣ              */
    char    lang                [   1];    /* [string,    1] ����              */
    char    proctm              [   9];    /* [long  ,    9] APó���ð�            */
    char    msgcode             [   4];    /* [string,    4] �޼����ڵ�            */
    char    outgu               [   1];    /* [string,    1] �޼�����±���        */
    char    compreq             [   1];    /* [string,    1] �����û����          */
    char    funckey             [   4];    /* [string,    4] ���Ű                */
    char    reqcnt              [   4];    /* [long  ,    4] ��û���ڵ尳��        */
    char    filler              [   6];    /* [string,    6] ���񿵿�              */
    char    cont                [   1];    /* [string,    1] ���ӱ���              */
    char    contkey             [  18];    /* [string,   18] ����Ű��              */
    char    varlen              [   2];    /* [long  ,    2] �����ý��۱���        */
    char    varhdlen            [   2];    /* [long  ,    2] �����ش�����          */
    char    varmsglen           [   2];    /* [long  ,    2] �����޽�������        */
    char    trsrc               [   1];    /* [string,    1] ��ȸ�߿���            */
    char    eventid             [   4];    /* [string,    4] I/F�̺�ƮID           */
    char    ifinfo              [   4];    /* [string,    4] I/F����               */
    char    filler1             [  41];    /* [string,   41] ���񿵿�              */
    char    trcode1             [   4];    /* [string,    4] tr�ڵ�                */
    char    firmno              [   3];    /* [string,    3] ȸ���ȣ              */
    char    acntno              [  11];    /* [string,   11] ���¹�ȣ              */
    char    acntno1             [   9];    /* [string,    9] ���¹�ȣ              */
    char    acntnm              [  40];    /* [string,   40] ���¸�                */
    char    brnno               [   3];    /* [string,    3] ������ȣ              */
    char    ordmktcode          [   2];    /* [string,    2] �ֹ������ڵ�          */
    char    ordno1              [   3];    /* [string,    3] �ֹ���ȣ              */
    char    ordno               [   7];    /* [long  ,    7] �ֹ���ȣ              */
    char    orgordno1           [   3];    /* [string,    3] ���ֹ���ȣ            */
    char    orgordno            [   7];    /* [long  ,    7] ���ֹ���ȣ            */
    char    prntordno           [   3];    /* [string,    3] ���ֹ���ȣ            */
    char    prntordno1          [   7];    /* [long  ,    7] ���ֹ���ȣ            */
    char    isuno               [  12];    /* [string,   12] �����ȣ              */
    char    fnoIsuno            [   8];    /* [string,    8] �����ɼ������ȣ      */
    char    fnoIsunm            [  40];    /* [string,   40] �����ɼ������        */
    char    pdgrpcode           [   2];    /* [string,    2] ��ǰ���з��ڵ�        */
    char    fnoIsuptntp         [   1];    /* [string,    1] �����ɼ�������������  */
    char    bnstp               [   1];    /* [string,    1] �Ÿű���              */
    char    mrctp               [   1];    /* [string,    1] ������ұ���          */
    char    ordqty              [  16];    /* [long  ,   16] �ֹ�����              */
    char    hogatype            [   2];    /* [string,    2] ȣ�������ڵ�          */
    char    mmgb                [   2];    /* [string,    2] �ŷ������ڵ�          */
    char    ordprc              [  13];    /* [double, 13.2] �ֹ�����              */
    char    unercqty            [  16];    /* [long  ,   16] ��ü�����            */
    char    commdacode          [   2];    /* [string,    2] ��Ÿ�ü              */
    char    peeamtcode          [   2];    /* [string,    2] �������ջ��ڵ�        */
    char    mgempno             [   9];    /* [string,    9] �������              */
    char    fnotrdunitamt       [  19];    /* [double, 19.8] �����ɼǰŷ������ݾ�  */
    char    trxtime             [   9];    /* [string,    9] ó���ð�              */
    char    strtgcode           [   6];    /* [string,    6] �����ڵ�              */
    char    grpId               [  20];    /* [string,   20] �׷�Id                */
    char    ordseqno            [  10];    /* [string,   10] �ֹ�ȸ��              */
    char    ptflno              [  10];    /* [string,   10] ��Ʈ������ ��ȣ       */
    char    bskno               [  10];    /* [string,   10] �ٽ��Ϲ�ȣ            */
    char    trchno              [  10];    /* [string,   10] Ʈ��ġ��ȣ            */
    char    Itemno              [  10];    /* [string,   10] �����۹�ȣ            */
    char    userId              [  16];    /* [string,   16] �ֹ���Id              */
    char    opdrtnno            [  12];    /* [string,   12] ����ù�ȣ          */
    char    rjtcode             [   3];    /* [string,    3] �������ڵ�            */
    char    mrccnfqty           [  16];    /* [long  ,   16] �������Ȯ�μ���      */
    char    orgordunercqty      [  16];    /* [long  ,   16] ���ֹ���ü�����      */
    char    orgordmrcqty        [  16];    /* [long  ,   16] ���ֹ�������Ҽ���    */
    char    ctrcttime           [   8];    /* [string,    8] �����ð�(ü��ð�)    */
    char    ctrctno             [  10];    /* [string,   10] ������ȣ              */
    char    execprc             [  13];    /* [double, 13.2] ü�ᰡ��              */
    char    execqty             [  16];    /* [long  ,   16] ü�����              */
    char    newqty              [  16];    /* [long  ,   16] �ű�ü�����          */
    char    qdtqty              [  16];    /* [long  ,   16] û��ü�����          */
    char    lastqty             [  16];    /* [long  ,   16] ������������          */
    char    lallexecqty         [  16];    /* [long  ,   16] ��üü�����          */
    char    allexecamt          [  16];    /* [long  ,   16] ��üü��ݾ�          */
    char    fnobalevaltp        [   1];    /* [string,    1] �ܰ��򰡱���          */
    char    bnsplamt            [  16];    /* [long  ,   16] �Ÿż��ͱݾ�          */
    char    fnoIsuno1           [   8];    /* [string,    8] �����ɼ������ȣ1     */
    char    bnstp1              [   1];    /* [string,    1] �Ÿű���1             */
    char    execprc1            [  13];    /* [double, 13.2] ü�ᰡ1               */
    char    newqty1             [  16];    /* [long  ,   16] �ű�ü�����1         */
    char    qdtqty1             [  16];    /* [long  ,   16] û��ü�����1         */
    char    allexecamt1         [  16];    /* [long  ,   16] ��üü��ݾ�1         */
    char    fnoIsuno2           [   8];    /* [string,    8] �����ɼ������ȣ2     */
    char    bnstp2              [   1];    /* [string,    1] �Ÿű���2             */
    char    execprc2            [  13];    /* [double, 13.2] ü�ᰡ2               */
    char    newqty2             [  16];    /* [long  ,   16] �ű�ü�����2         */
    char    lqdtqty2            [  16];    /* [long  ,   16] û��ü�����2         */
    char    allexecamt2         [  16];    /* [long  ,   16] ��üü��ݾ�2         */
    char    dps                 [  16];    /* [long  ,   16] ������                */
    char    ftsubtdsgnamt       [  16];    /* [long  ,   16] ������������ݾ�      */
    char    mgn                 [  16];    /* [long  ,   16] ���ű�                */
    char    mnymgn              [  16];    /* [long  ,   16] ���ű�����            */
    char    ordableamt          [  16];    /* [long  ,   16] �ֹ����ɱݾ�          */
    char    mnyordableamt       [  16];    /* [long  ,   16] �ֹ��������ݾ�        */
    char    fnoIsuno_1          [   8];    /* [string,    8] �ܰ� �����ȣ1        */
    char    bnstp_1             [   1];    /* [string,    1] �ܰ� �Ÿű���1        */
    char    unsttqty_1          [  16];    /* [long  ,   16] �̰�������1           */
    char    lqdtableqty_1       [  16];    /* [long  ,   16] �ֹ����ɼ���1         */
    char    avrprc_1            [  13];    /* [double, 13.2] ��հ�1               */
    char    fnoIsuno_2          [   8];    /* [string,    8] �ܰ� �����ȣ2        */
    char    bnstp_2             [   1];    /* [string,    1] �ܰ� �Ÿű���2        */
    char    unsttqty_2          [  16];    /* [long  ,   16] �̰�������2           */
    char    lqdtableqty_2       [  16];    /* [long  ,   16] �ֹ����ɼ���2         */
    char    avrprc_2            [  13];    /* [double, 13.2] ��հ�2               */
} O01_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data ���� : 'H01'                 */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ       */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ           */
    char    user                [   8];    /* [string,    8] ������ID           */
    char    seq                 [  11];    /* [long  ,   11] �Ϸù�ȣ           */
    char    trcode              [  11];    /* [string,   11] trcode             */
    char    megrpno             [   2];    /* [string,    2] ��Ī�׷��ȣ       */
    char    boardid             [   2];    /* [string,    2] ����ID             */
    char    memberno            [   5];    /* [string,    5] ȸ����ȣ           */
    char    bpno                [   5];    /* [string,    5] ������ȣ           */
    char    ordno               [  10];    /* [string,   10] �ֹ���ȣ           */
    char    orgordno            [  10];    /* [string,   10] ���ֹ���ȣ         */
    char    expcode             [  12];    /* [string,   12] �����ڵ�           */
    char    dosugb              [   1];    /* [string,    1] �ŵ�������         */
    char    mocagb              [   1];    /* [string,    1] ������ұ���       */
    char    accno1              [  12];    /* [string,   12] ���¹�ȣ1          */
    char    qty2                [  10];    /* [long  ,   10] ȣ������           */
    char    price               [  11];    /* [float , 11.2] ȣ������           */
    char    ordgb               [   1];    /* [string,    1] �ֹ�����           */
    char    hogagb              [   1];    /* [string,    1] ȣ������           */
    char    sihogagb            [  11];    /* [string,   11] ��������ȣ������   */
    char    tradid              [   5];    /* [string,    5] �ڻ��ֽŰ�ID     */
    char    treacode            [   1];    /* [string,    1] �ڻ��ָŸŹ��     */
    char    askcode             [   2];    /* [string,    2] �ŵ������ڵ�       */
    char    creditcode          [   2];    /* [string,    2] �ſ뱸���ڵ�       */
    char    jakigb              [   2];    /* [string,    2] ��Ź�ڱⱸ��       */
    char    trustnum            [   5];    /* [string,    5] ��Ź���ȣ         */
    char    ptgb                [   2];    /* [string,    2] ���α׷�����       */
    char    substonum           [  12];    /* [string,   12] ����ֱǰ��¹�ȣ   */
    char    accgb               [   2];    /* [string,    2] ���±����ڵ�       */
    char    accmarggb           [   2];    /* [string,    2] �������ű��ڵ�     */
    char    nationcode          [   3];    /* [string,    3] �����ڵ�           */
    char    investgb            [   4];    /* [string,    4] �����ڱ���         */
    char    forecode            [   2];    /* [string,    2] �ܱ����ڵ�         */
    char    medcode             [   1];    /* [string,    1] �ֹ���ü����       */
    char    ordid               [  12];    /* [string,   12] �ֹ��ĺ��ڹ�ȣ     */
    char    macid               [  12];    /* [string,   12] MAC�ּ�            */
    char    orddate             [   8];    /* [string,    8] ȣ������           */
    char    rcvtime             [   9];    /* [string,    9] ȸ�����ֹ��ð�     */
    char    mem_filler          [   7];    /* [string,    7] mem_filler         */
    char    mem_accno           [  11];    /* [string,   11] mem_accno          */
    char    mem_filler1         [  42];    /* [string,   42] mem_filler1        */
    char    ordacpttm           [   9];    /* [string,    9] ��Ī�����ð�       */
    char    qty                 [  10];    /* [long  ,   10] ��������Ҽ���     */
    char    autogb              [   1];    /* [string,    1] �ڵ���ұ���       */
    char    rejcode             [   4];    /* [string,    4] �źλ���           */
    char    prgordde            [   1];    /* [string,    1] ���α׷�ȣ���Ű�   */
} H01_OutBlock;

typedef struct
{
    char    dgubun              [   3];    /* Data ���� : 'C01'                 */
    char    lineseq             [  10];    /* [long  ,   10] �����Ϸù�ȣ       */
    char    accno               [  11];    /* [string,   11] ���¹�ȣ           */
    char    user                [   8];    /* [string,    8] ������ID           */
    char    seq                 [  11];    /* [long  ,   11] �Ϸù�ȣ           */
    char    trcode              [  11];    /* [string,   11] trcode             */
    char    megrpno             [   2];    /* [string,    2] ��Ī�׷��ȣ       */
    char    boardid             [   2];    /* [string,    2] ����ID             */
    char    memberno            [   5];    /* [string,    5] ȸ����ȣ           */
    char    bpno                [   5];    /* [string,    5] ������ȣ           */
    char    ordno               [  10];    /* [string,   10] �ֹ���ȣ           */
    char    orgordno            [  10];    /* [string,   10] ���ֹ���ȣ         */
    char    expcode             [  12];    /* [string,   12] �����ڵ�           */
    char    yakseq              [  11];    /* [string,   11] ������ȣ           */
    char    cheprice            [  11];    /* [float , 11.2] ü�ᰡ��           */
    char    chevol              [  10];    /* [long  ,   10] ü�����           */
    char    sessionid           [   2];    /* [string,    2] ����ID             */
    char    chedate             [   8];    /* [string,    8] ü������           */
    char    chetime             [   9];    /* [string,    9] ü��ð�           */
    char    spdprc1             [  11];    /* [float , 11.2] �ֱٿ�ü�ᰡ��     */
    char    spdprc2             [  11];    /* [float , 11.2] ���ٿ�ü�ᰡ��     */
    char    dosugb              [   1];    /* [string,    1] �ŵ�������         */
    char    accno1              [  12];    /* [string,   12] ���¹�ȣ1          */
    char    sihogagb            [  11];    /* [string,   11] ��������ȣ������   */
    char    jakino              [   5];    /* [string,    5] ��Ź���ȣ         */
    char    daeyong             [  12];    /* [string,   12] ����ֱǰ��¹�ȣ   */
    char    mem_filler          [   7];    /* [string,    7] mem_filler         */
    char    mem_accno           [  11];    /* [string,   11] mem_accno          */
    char    mem_filler1         [  42];    /* [string,   42] mem_filler1        */
} C01_OutBlock;
