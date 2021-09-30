#ifndef STACK_H
#define STACK_H

void make_empty(void);

bool is_empty(void);

bool is_full(void);

void stack_overflow();

void stack_underflow();

void push(int i);

int pop(void);

#endif