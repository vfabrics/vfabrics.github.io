# Makefile Sample for Linux api
CC		= cc
ASHOME  = /htsteam/home/example/customer
BINPATH = $(ASHOME)/demo

SYSLIBS = -lnsl -lm $(SOCKET_LIB) $(THREAD_LIB)
USRLIBS = -L$(ASHOME)/lib -lasphts

INCLUDE     = -I$(ASHOME)/include 

CFLAGS      = $(INCLUDE)
CPPFLAGS    = $(INCLUDE)
COMPILE.c   = $(CC) -c
COMPILE.cpp = $(CPP) -c

.SUFFIXES : .c .o .cc
.c.o   :
	$(COMPILE.c) $< $(CFLAGS)
.cc.o   :
	$(COMPILE.cpp) $< $(CPPFLAGS)

all : rdmrcv rd_tr a1301 a1302 a1303 a1201 a1202 a1203 a1204 a1601 t9941 t9942

rdmrcv : rdmrcv.o
	$(CC) -o rdmrcv rdmrcv.o $(USRLIBS) $(SYSLIBS)
	strip rdmrcv

rd_tr : rd_tr.o
	$(CC) -o rd_tr rd_tr.o $(USRLIBS) $(SYSLIBS)
	strip rd_tr

a1301 : a1301.o
	$(CC) -o a1301 a1301.o $(USRLIBS) $(SYSLIBS)
	strip a1301

a1302 : a1302.o
	$(CC) -o a1302 a1302.o $(USRLIBS) $(SYSLIBS)
	strip a1302

a1303 : a1303.o
	$(CC) -o a1303 a1303.o $(USRLIBS) $(SYSLIBS)
	strip a1303

a1201 : a1201.o
	$(CC) -o a1201 a1201.o $(USRLIBS) $(SYSLIBS)
	strip a1201

a1202 : a1202.o
	$(CC) -o a1202 a1202.o $(USRLIBS) $(SYSLIBS)
	strip a1202

a1203 : a1203.o
	$(CC) -o a1203 a1203.o $(USRLIBS) $(SYSLIBS)
	strip a1203

a1204 : a1204.o
	$(CC) -o a1204 a1204.o $(USRLIBS) $(SYSLIBS)
	strip a1204

a1601 : a1601.o
	$(CC) -o a1601 a1601.o $(USRLIBS) $(SYSLIBS)
	strip a1601

t9941 : t9941.o
	$(CC) -o t9941 t9941.o $(USRLIBS) $(SYSLIBS)
	strip t9941

t9942 : t9942.o
	$(CC) -o t9942 t9942.o $(USRLIBS) $(SYSLIBS)
	strip t9942

clean:
	rm -f *.o core
	rm -f a1301 a1302 a1303 a1201 a1202 a1203 a1204 a1601 t9941 t9942 rdmrcv rd_tr
