#include <stdbool.h> /* C99 only */
#include <stdlib.h>
#include <stdio.h>

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

bool is_operand(char ch) {
    if(0 <= ch - '0' <= 9) return true;
    return false;
}

bool is_operator(char ch) {
    if(ch == '+' || ch == '-' || ch == '/' || ch == '*')
        return true;
    return false;
}

void perform_operation(char operator) {
    if(operator == '+') push(pop() + pop());
    if(operator == '-') push( - pop() + pop());
    if(operator == '/') push(1 / (pop() + pop()));
    if(operator == '*') push(pop() * pop());
}

void run_rpn() {
    char ch, exp[100];
    int i = 0;
    
    printf("Enter an RPN expression: ");
    scanf("%[^\n]s", exp);
    ch = exp[i];
    i += 2;
    while (is_operand(ch) || is_operator(ch)) {
        if(is_operand(ch)) push(ch - '0');
        else if(is_operator(ch)) perform_operation(ch);
        ch = exp[i];
        i += 2;
    }

    if(ch != '=') return;
    
    printf("Value of expression: %d\n", pop());
    make_empty();
    run_rpn();
}

int main(void) {
    run_rpn();

    return 0;
}