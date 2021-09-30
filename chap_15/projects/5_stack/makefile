output: stack.o rpn.o
	gcc -o output stack.o rpn.o

stack.o: stack.c stack.h
	gcc -c stack.c

rpn.o: rpn.c stack.h
	gcc -c rpn.c