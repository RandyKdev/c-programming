#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void readSentence(char *s, char *lastChar);
void printSentenceBackwards(char *s);
void printWord(char *s);


int main(void) {
    // `sentence` array to store the user's sentence
    // +1 for the nul character
    char sentence[MAX + 1];

    // the last character which marks the end of the sentence
    char lastChar = '\0'; 

    readSentence(sentence, &lastChar); // reads the input
    printSentenceBackwards(sentence); // prints the input backwards, word by word
    
    // prints the last character of the input or the default last character, '\0'
    printf("%c\n", lastChar); 

    return 0;
}

void readSentence(char *s, char *lastChar) {
    printf("Enter a sentence: ");

    char *i = s; // assigns the mem loc of s to i
    int c;

    // runs if the char read is not the end of line char
    // and if the length of `s` is not maxed out
    while((c = getchar()) != '\n' && i - s < MAX) {
        // checks if the char read is the end of sentence symbols
        if(c == '.' || c == '!' || c == '?') {
            *lastChar = c; // assigns `c` to the `lastChar`
            break;
        }

        *i++ = c; // puts `c` in the current pos in `s` and increments `i`
    }
    *i = '\0'; // marks the end of the string
}

void printSentenceBackwards(char *s) {
    printf("Reversal of sentence:");

    int length = strlen(s); // length of the read sentence
    char *i = s + length - 1; // sets i to the mem loc of the last character

    // runs from the last memory loc of the last char to the first char
    for(i; i >= s; i--) {
        // checks if the char at `i` is a space 
        if(isspace(*i)) {
            printWord(i + 1); // prints the word beginning from i + 1
        }
        // checks if `i` is the mem loc of the first char in `s`
        if(i == s) {
            printWord(i); //  prints the word beginning from i
        }
    }
}

void printWord(char *s) {
    printf(" ");
    // runs if the char at `s` is not a space and not the nul character
    while(!isspace(*s) && *s != '\0') {
        printf("%c", *s++); // prints the char at `s` and increments `s`
    }
}