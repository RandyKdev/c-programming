#include <stdio.h>

#define LEN 50

int main(void) {
    char message[LEN]; // stores the message entered by the user

    printf("Enter a message: ");

    int c; // holds a character from stdin
    int i = 0; // keeps track of position in `message`

    // gets the user's message and stored it in `message`
    while((c=getchar()) != '\n' && i < LEN) {
        // store the character read at the appropriate location in `message`
        *(message + i++) = c;
    }
    
    // prints `message` in reversed order
    printf("Reversal is: ");
    for(i--; i >= 0; i--) {
        printf("%c", *(message + i));
    }

    printf("\n");

    return 0;
}