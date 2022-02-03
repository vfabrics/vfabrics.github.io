/*
 *  ����   : Application Header Layout (TUX)
 *     
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef _TUX2AP_H_
#define _TUX2AP_H_

typedef struct  _TUX2AP {
    char media             [1]; /* TR �߿���                               */
    char sessionkey        [6]; /* PC session key                          */
    char screenno          [4]; /* ȭ���ȣ                                */
    char seqno             [7]; /* Sequence No                             */

    char tuxcode           [5]; /* TUX TR Code                           */
    char conti             [1]; /* ���ӱ���                                */
                              /* s->c 0(None),1(Next),2(Prev),3(Next,Prev)   */
                              /* c->s 0(����),1(Next),2(Prev)                */

    char userid            [8]; /* ������ID(Login ID)                      */
    char ipaddr           [12]; /* IP Address (XXXXXXXXXXXX)               */
    char trcode            [8]; /* BASE21 TR Code                          */
    char branchno          [3]; /* ������ȣ                                */
    char funcode           [4]; /* ó������                                */
                                /* '1'���,'2'��ȸ,'3'����,'4'���,'5'Ȯ�� */
                                /* '6'��ȭ��,'7'����,'C'����               */

    char conti2             [1]; /* 'Y':����, �̿��ǰ��̸� ���Ӿ���         */
    char contikey         [18]; /* �����ϰ�쿡 key�� �÷������           */
    char lang              [1]; /* K:�ѱ�, E:����, C:�߱�, J:�Ϻ�          */
    char rqcnt             [4]; /* ��û�Ǽ�                                */
    char loan              [1]; /* 1:�Ŀ��� , 0:������                   */
    char meidacomm         [2]; /* ��Ÿ�ü                                */
    char filler           [10]; /* filler                                  */
    char userdata         [26]; /* ����ڵ�����                            */

    /* msgcode �� msg �� PC -> AP ��, AP -> PC ��                          */
    /* Base�ش� ���� ��� ������� �Ǵ��ؾ���                              */
    char msgcode           [4]; /* Base message code                       */
    char msg             [100]; /* Base message                            */
} TUX2AP;

#endif
