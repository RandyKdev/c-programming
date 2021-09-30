#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include "stack.h"

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