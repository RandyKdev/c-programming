#include<string.h>
#include<stdio.h>

#define LEN 100

void censor(char *s) {
    while(*s) {
        if(strncmp(s, "foo", 3) == 0) { 
            strncpy(s, "xxx", 3);
        }
        
        s++;
    }
}

int main(void) {
    char s[LEN + 1];

    printf("Enter a string: ");
    fgets(s, LEN, stdin);

    censor(s);

    puts(s);

    return 0;
}