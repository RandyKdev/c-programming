#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define NUM_PLANETS 9

bool is_equal(const char *s, const char *t);

int main(int argc, char *argv[]) {
    char *planets[] = {"Mercury", "Venus", "Earth", 
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    int i, j;

    for(i = 1; i < argc; i++) {
        for(j = 0; j < NUM_PLANETS; j++)
            if(is_equal(argv[i], planets[j])) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        if(j == NUM_PLANETS)
            printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}

bool is_equal(const char *s, const char *t) {
    
    if(strlen(s) != strlen(t)) return false;

    while(*s) {
        if(tolower(*s++) != tolower(*t++))
            return false;
    }

    return true;
}