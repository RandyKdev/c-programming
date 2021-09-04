#include<stdio.h>


// f returns the position of the first 
// character in s which is not in t
int f(char *s, char *t) {
    char *p1, *p2;

    for(p1 = s; *p1; p1++) {
        for(p2 = t; *p2; p2++)
            if(*p1 == *p2) break;
        if(*p2 == '\0') break;
    }

    return p1 - s;
}

int main(void) {
    printf("f(\"abcd\", \"babc\"): %d\n", f("abcd", "babc")); // Output: 3
    printf("f(\"abcd\", \"bcd\"): %d\n", f("abcd", "bcd")); // Output: 0

    return 0;
}