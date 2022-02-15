SHELL = /bin/sh
CFLAGS = -ansi -Wall -pedantic
LDFLAGS =
CC ?= gcc
CPPCHECK =  cppcheck
CHECKFLAGS = --enable=style,warning,performance,portability,unusedFunction --inconclusive --xml --xml-version=2
CPPCHECKREPORT = cppcheck-report.xml

EXE = BlocksWorld.exe

OBJ := pile.o World.o main.o pretty_print.o

VPATH = $(OBJDIR):$(BINDIR)
LDFLAGS += -lncurses
#LDFLAGS += -lncursesw -ltermcap -static
CFLAGS += -DUSE_NCURSES


all : exe

exe : $(EXE)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(EXE) : $(OBJ)
	$(CC)  -o $@ $(OBJ) $(LDFLAGS)

.PHONY : clean all cppcheck

cppcheck : $(CPPCHECKREPORT)

$(CPPCHECKREPORT) :
	$(CPPCHECK) $(CHECKFLAGS) . 2> $@

clean :
	rm -f $(OBJ) $(EXE) $(CPPCHECKREPORT)
