#include<stdio.h>

#define WORDS 30
#define LETTERS 20

int main() {
    char input[WORDS][LETTERS + 1];
    int c, row = 0, column = 0;
    char lastChar;

    printf("Enter sentence: ");

    while((c = getchar()) != '\n') {
        if(c == '.' || c == '!' || c == '?') {
            lastChar = c;
            break;
        }

        if(c == ' ') {
            input[row++][column] = '\0'; // ends the current word and goes to the next row
            column = 0; 
            continue;
        }

        input[row][column++] = c;
    }

    input[row][column] = '\0';


    // Prints the sentence in reverse order
    printf("The reverse of the sentence is:");

    for(row; row >= 0; row--) {
        printf(" %s", input[row]);
    }

    printf("%c\n", lastChar);

    return 0;
}