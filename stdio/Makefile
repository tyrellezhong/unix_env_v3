ROOT=..
PLATFORM=$(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

ifeq "$(PLATFORM)" "linux"
  MEMSTR = memstr
else
  MEMSTR =
endif

PROGS =	 fgetsfputs getcharbug getcputc mkstemp tempfiles

all:	$(PROGS) $(MEMSTR)

$(PROGS):	$(LIBAPUE)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o $(MEMSTR)

include $(ROOT)/Make.libapue.inc

install: 
	mkdir -p build
	mv $(PROGS) $(MEMSTR) build/
