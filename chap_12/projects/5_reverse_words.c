#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void readSentence(char *s, char *lastChar) {
    printf("Enter a sentence: ");

    char *i = s;
    int c;
    while((c = getchar()) != '\n' && i - s < MAX) {
        if(c == '.' || c == '!' || c == '?') {
            *lastChar = c;
            break;
        }

        *i++ = c;
    }
    *i = '\0';
}

void printWord(char *s) {
    printf(" ");
    while(!isspace(*s) && *s != '\0') {
        printf("%c", *s++);
    }
}

void printSentenceBackwards(char *s) {
    printf("Reversal of sentence:");

    int length = strlen(s);
    char *i = s + length - 1;

    for(i; i >= s; i--) {
        if(isspace(*i)) {
            printWord(i + 1);
        }
        if(i == s) {
            printWord(i);
        }
    }
}

int main(void) {
    char sentence[MAX + 1];
    char lastChar = '\0';

    readSentence(sentence, &lastChar);
    printSentenceBackwards(sentence);
    printf("%c\n", lastChar);

    return 0;
}