/*
 *  설명   : Application Header Layout (TUX)
 *     
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef _TUX2AP_H_
#define _TUX2AP_H_

typedef struct  _TUX2AP {
    char media             [1]; /* TR 발원지                               */
    char sessionkey        [6]; /* PC session key                          */
    char screenno          [4]; /* 화면번호                                */
    char seqno             [7]; /* Sequence No                             */

    char tuxcode           [5]; /* TUX TR Code                           */
    char conti             [1]; /* 연속구분                                */
                              /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)   */
                              /* c->s 0(최초),1(Next),2(Prev)                */

    char userid            [8]; /* 조작자ID(Login ID)                      */
    char ipaddr           [12]; /* IP Address (XXXXXXXXXXXX)               */
    char trcode            [8]; /* BASE21 TR Code                          */
    char branchno          [3]; /* 지점번호                                */
    char funcode           [4]; /* 처리구분                                */
                                /* '1'등록,'2'조회,'3'정정,'4'취소,'5'확인 */
                                /* '6'전화면,'7'연속,'C'전송               */

    char conti2             [1]; /* 'Y':연속, 이외의값이면 연속없음         */
    char contikey         [18]; /* 연속일경우에 key를 올려줘야함           */
    char lang              [1]; /* K:한국, E:영어, C:중국, J:일본          */
    char rqcnt             [4]; /* 요청건수                                */
    char loan              [1]; /* 1:파워론 , 0:사용안함                   */
    char meidacomm         [2]; /* 통신매체                                */
    char filler           [10]; /* filler                                  */
    char userdata         [26]; /* 사용자데이터                            */

    /* msgcode 와 msg 는 PC -> AP 무, AP -> PC 존                          */
    /* Base해더 전의 헤더 사이즈로 판단해야함                              */
    char msgcode           [4]; /* Base message code                       */
    char msg             [100]; /* Base message                            */
} TUX2AP;

#endif
