/*
 * ����   : Application Header Layout (TUX)
 * NAME   : tuxap.h
 * DATE   : 2002�� 4�� 15�� ������ ���� 10�� 39�� 24��
 * Remark : 
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef _TUXAP_H_
#define _TUXAP_H_

typedef struct  _TUXAP {
	char conti               [1]; /* ���ӱ���                                */
							  /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)   */
							  /* c->s 0(����),1(Next),2(Prev)                */
	char tuxcode             [5]; /* TUX TR Code	                         */

	char media              [ 1]; /* ��� ��ü(��ȸ�߿���)            */
	char sessionkey         [ 6]; /* ����Ű                           */
	char screenno           [ 4]; /* ȭ���ȣ                         */
	char sendseqno          [ 7]; /* ���� TR Seq No                   */
	char loan               [ 1]; /* �Ŀ���                           */
	char userid             [ 8]; /* ������ID(Login ID)               */
	char ipaddr             [12]; /* IP Address (XXXXXXXXXXXX)        */
	char funcode            [ 1]; /* ó������                         */
	char msgcode            [ 4]; /* �޼����ڵ�                       */
	char msg                [49]; /* �޼���                           */
	char filler             [ 1]; /* Filler                           */
} TUXAP;

#endif
