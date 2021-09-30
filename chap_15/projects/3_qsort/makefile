output: quicksort.o qsort.o
	gcc -o output quicksort.o qsort.o

quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c

qsort.o: qsort.c quicksort.h
	gcc -c qsort.c