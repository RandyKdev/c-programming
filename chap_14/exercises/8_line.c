#include<stdio.h>

#define STR(x) #x
#define STR1(x) STR(x)
#define LINE_FILE ("Line " STR1(__LINE__) " of file " __FILE__)

// calling STR1 and then STR works because we need the value of the macro
// __LINE__ if we didnt, it would have converted __LINE__ to a string instead
// which is not the functionality we want

int main(void) {
    const char *str = LINE_FILE;
    printf("%s\n", str);

    return 0;
}