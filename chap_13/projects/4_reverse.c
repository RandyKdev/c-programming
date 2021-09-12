#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("No statement to reverse.\n");
        return 1;
    }

    for(argc--; argc; argc--) {
        printf("%s ", argv[argc]);
    }

    printf("\n");

    return 0;
}