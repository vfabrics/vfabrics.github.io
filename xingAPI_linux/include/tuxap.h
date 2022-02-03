/*
 * 설명   : Application Header Layout (TUX)
 * NAME   : tuxap.h
 * DATE   : 2002년 4월 15일 월요일 오전 10시 39분 24초
 * Remark : 
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef _TUXAP_H_
#define _TUXAP_H_

typedef struct  _TUXAP {
	char conti               [1]; /* 연속구분                                */
							  /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)   */
							  /* c->s 0(최초),1(Next),2(Prev)                */
	char tuxcode             [5]; /* TUX TR Code	                         */

	char media              [ 1]; /* 당사 매체(조회발원지)            */
	char sessionkey         [ 6]; /* 세션키                           */
	char screenno           [ 4]; /* 화면번호                         */
	char sendseqno          [ 7]; /* 전송 TR Seq No                   */
	char loan               [ 1]; /* 파워론                           */
	char userid             [ 8]; /* 조작자ID(Login ID)               */
	char ipaddr             [12]; /* IP Address (XXXXXXXXXXXX)        */
	char funcode            [ 1]; /* 처리구분                         */
	char msgcode            [ 4]; /* 메세지코드                       */
	char msg                [49]; /* 메세지                           */
	char filler             [ 1]; /* Filler                           */
} TUXAP;

#endif
