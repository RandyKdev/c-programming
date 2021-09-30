#include <stdbool.h> /* C99 only */
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void stack_overflow() {
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow() {
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

void push(int i) {
    if(is_full()) stack_overflow();
    else contents[top++] = i;
}

int pop(void) {
    if(is_empty()) stack_underflow();
    else return contents[--top];
}