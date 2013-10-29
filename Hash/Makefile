

/*RASOLOARISON Tina
 * BELMILOUD Samira 
 */


BIN = mainTest
OBJ = hasheLists.o main.o 
SRC = hasheLists.c main.c 
LIB = libTab.a libTab.so
DEBUG = -g
CFLAGS = -Wall -Wextra -pedantic -O2 -fPIC $(DEBUG)
LDFLAGS = -L.
CC = gcc
.PHONY = all clean distclean mrproper 


all:  mainTest lib

main: mainTest
	LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. ./mainTest

mainTest: main.o lib
	@echo "Making $@"
	$(CC) $(CFLAGS) $(LDFLAGS) -lhasheLists -o $@ $<

lib: libTab.so libTab.a 
	@echo "Making $@"

liblTab.a: hasheLists.o
	@echo "Making $@"
	ar -cvq $@ $<

liblTab.so: hasheLists.o
	@echo "Making $@"
	$(CC) $(CFLAGS) $(LDFLAGS) -shared -Wl,-soname,$@ -o $@ $<

%.o: %.c
	@echo "Making $@"
	$(CC) $(CFLAGS) $(LDFLAGS) -c $<

clean:
	-@rm $(OBJ) *~

distclean: clean
	-@rm $(BIN) $(LIB)

mrproper: distclean
