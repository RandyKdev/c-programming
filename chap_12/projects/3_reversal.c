#include <stdio.h>

#define LEN 50

int main(void) {
    char message[LEN];

    printf("Enter a message: ");

    int c; 
    char *i = message; 

    while((c=getchar()) != '\n' && i - message < LEN) {
        *(i++) = c;
    }
    
    printf("Reversal is: ");
    for(i--; i >= message; i--) {
        printf("%c", *i);
    }

    printf("\n");

    return 0;
}