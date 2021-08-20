#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(int *top_ptr) {
    *top_ptr = 0;
}

bool is_empty(int *top_ptr) {
    return *top_ptr == 0;
}

bool is_full(int *top_ptr) {
    return *top_ptr == STACK_SIZE;
}

void push(int i) {
    if(is_full(&top)) {
        stack_overflow();
    } else {
        contents[top++] = i;
    }
}

int pop(void) {
    if(is_empty(&top)) {
        stack_underflow();
    } else {
        return contents[--top];
    }
}