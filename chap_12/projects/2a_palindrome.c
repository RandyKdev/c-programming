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

    int c, i = 0;

    while((c = getchar()) != '\n' && i < MAX) {
        if(!isalpha(c)) continue;
        *(s + i++) = tolower(c);
    }
    
    *(s + i) = '\0';
}

bool palindrome(char *s) {
    for(int i = 0, length = strlen(s); i < length / 2; i++) {
        if(*(s + i) != *(s + length - i - 1)) 
            return false;
    }

    return true;
}