#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void) {
    char smallest[LEN + 1], largest[LEN + 1], input[LEN + 1];

    printf("Enter word: ");
    scanf("%s", input);
    strcpy(largest, strcpy(smallest, input));
        
    while(strlen(input) != 4) {

        if(strcmp(input, smallest) < 0) {
            strcpy(smallest, input);
        } else if(strcmp(input, largest) > 0) {
            strcpy(largest, input);
        }

        printf("Enter word: ");
        scanf("%s", input);
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}