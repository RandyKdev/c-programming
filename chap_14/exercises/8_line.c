#include<stdio.h>

#define STR(x) #x
#define STR1(x) STR(x)
#define LINE_FILE "Line " STR1(__LINE__) " of file " __FILE__

int main(void) {
    const char *str = LINE_FILE;
    printf("%s\n", str);

    return 0;
}