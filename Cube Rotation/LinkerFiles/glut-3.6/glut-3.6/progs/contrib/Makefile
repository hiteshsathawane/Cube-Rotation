#!smake
#
# Copyright (c) Mark J. Kilgard, 1995, 1997.
#

TOP = ../..
include $(TOP)/glutdefs
include $(ROOT)/usr/include/make/commondefs

LN = ln -s
MV = mv
RM = -rm -rf

TARGETS = lineblend worms rings agv_example fractals hanoi hanoi2 \
   gears noof moth text3d steam

LLDLIBS = $(GLUT) -lGLU -lGL -lXmu -lXext -lX11 -lm

SRCS = lineblend.c worms.c rings.c fractals.c fracviewer.c agviewer.c \
       agv_example.c hanoi.c hanoi2.c engine.c moth.c text3d.c steam.c
OBJS = $(SRCS:.c=.o)

LCOPTS = -I$(TOP)/include -fullwarn
LWOFF = ,813,852,827,826,1506
LDIRT = *~ *.bak *.pure

default : $(TARGETS)

agv_example: agv_example.o agviewer.o
	$(CCF) -o $@ agv_example.o agviewer.o $(LDFLAGS)

hanoi2: hanoi2.o engine.o
	$(CCF) -o $@ hanoi2.o engine.o $(LDFLAGS)

fractals: fractals.o fracviewer.o
	$(CCF) -o $@ fractals.o fracviewer.o $(LDFLAGS)

include $(COMMONRULES)
