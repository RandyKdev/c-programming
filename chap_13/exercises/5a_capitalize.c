#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define LEN 100

void capitalize(char *s) {
    for(int i = 0, len = strlen(s); i < len; i++)
        s[i] = toupper(s[i]);
}

int main(void) {
    char s[LEN + 1];
    
    printf("Enter a string: ");
    fgets(s, LEN, stdin);

    capitalize(s);

    puts(s);

    return 0;
}