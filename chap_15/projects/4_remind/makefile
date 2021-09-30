output: remind.o readline.o
	gcc -o output remind.o readline.o

remind.o: remind.c readline.h
	gcc -c remind.c

readline.o: readline.c readline.h
	gcc -c readline.c