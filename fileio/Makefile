ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

PROGS =	fileflags hole mycat seek

all:	$(PROGS) setfl.o

$(PROGS):	$(LIBAPUE)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o file.hole

include $(ROOT)/Make.libapue.inc

install:
	mkdir -p build
	mv $(PROGS) build
