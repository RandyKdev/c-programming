#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("There are no inputs to sum.\n");
        return 1;
    }

    int sum = 0;
    for(argc--; argc; argc--)
        sum += atoi(argv[argc]);

    printf("Total: %d\n", sum);

    return 0;
}