CC=gcc
CFLAGS=-I.
AR=ar

all: libtags.a

libtags.a: tags.o
	$(AR) -rcs libtags.a tags.o

tags.o: tags.c tags.h
	$(CC) $(CFLAGS) -c -o tags.o tags.c

clean:
	rm -f *.o libtags.a
