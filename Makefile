
.POSIX:

all: dummy_prog libdummy.so

CFLAGS += -fPIC

libdummy.so: dummy_lib.c
	$(CC) -shared $(CFLAGS) $< -o $@

clean:
	$(RM) libdummy.so dummy_prog *.o
