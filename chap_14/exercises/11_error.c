#include<stdio.h>

#define ERROR(format_str, arg) fprintf(stderr, format_str, arg)

int main(void) {
    ERROR("Range error: index = %d\n", 3);
    
    return 0;
}