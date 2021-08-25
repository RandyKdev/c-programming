#include <stdio.h>

#define LEN 50

int main(void) {
    char message[LEN]; // stores the message entered by the user

    printf("Enter a message: ");

    int c; // holds a character from stdin
    char *i = message; // keeps track of position in `message`

    // gets the user's message and stored it in `message`
    while((c=getchar()) != '\n' && i - message < LEN) {
        // store the character read at the appropriate location in `message`
        *(i++) = c;
    }
    
    // prints `message` in reversed order
    printf("Reversal is: ");
    for(i--; i >= message; i--) {
        printf("%c", *i);
    }

    printf("\n");

    return 0;
}