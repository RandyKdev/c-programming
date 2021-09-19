#include<stdio.h>

#define ERROR(format_str, ...) (fprintf(stderr, (format_str), __VA_ARGS__))

int main(void) {
    ERROR("Range error: index = %d\n", 3);
    
    return 0;
}