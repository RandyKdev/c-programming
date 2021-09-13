#include <stdio.h>
#include <string.h>

#define LEN 50

void reverse(char *message);

int main(void) {
    char message[LEN]; // stores the message entered by the user

    printf("Enter a message: ");

    int c; // holds a character from stdin
    char *i = message; // keeps track of position in `message`

    // gets the user's message and stored it in `message`
    while((c = getchar()) != '\n' && i < message + LEN) {
        // store the character read at the appropriate location in `message`
        *(i++) = c;
    }

    *i = '\0';

    reverse(message);
    
    // prints `message` in reversed order
    printf("Reversal is: ");
    puts(message);

    return 0;
}

void reverse(char *message) {
    char *first = message;
    char *last = message + strlen(message) - 1;

    char temp;
    while (first < last) {
        temp = *last;
        *last-- = *first;
        *first++ = temp;
    }
}