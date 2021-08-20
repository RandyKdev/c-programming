#include <stdio.h>

#define N 5

int main(void) {
    int a[N], *p = a;

    /*
     p == a[0]

     The above statement is false because p is a pointer (memory address)
     and a[0] is an integer. So comparing a pointer and an integer gives
     a compile time error "comparison between pointer and integer"
     */
    
    printf("p == &a[0]: %s\n", p == &a[0] ? "true" : "false");
    printf("*p == a[0]: %s\n", *p == a[0] ? "true" : "false");
    printf("p[0] == a[0]: %s\n", p[0] == a[0] ? "true" : "false");
    
    return 0;
}