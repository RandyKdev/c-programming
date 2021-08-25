#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void getMessage(char *s);
bool palindrome(char *s);

int main(void) {
    char message[MAX + 1]; // +1 for the nul character

    getMessage(message);

    bool isPalidrome = palindrome(message);

    printf("%s\n", isPalidrome ? "Palindrome" : "Not a palindrome");

    return 0;
}

void getMessage(char *s) {
    printf("Enter a message: ");

    int c;
    char *i = s;

    while((c = getchar()) != '\n' && i - s < MAX) {
        if(!isalpha(c)) continue;
        *i++ = tolower(c);
    }
    *i = '\0';
}

bool palindrome(char *s) {
    int length = strlen(s);
    for(char *i = s; i - s < length / 2; i++) {
        // i - s will output the integral difference btw them
        if(*i != *((s + length - 1) - (i - s))) 
            return false;
    }

    return true;
}