#include <stdio.h>

#define ROW 7
#define COLUMN 24


int *find_largest(int *a, int n);
void print_highest(int (*a)[COLUMN]);

int main(void) {
    int temperature[ROW][COLUMN];

    print_highest(temperature);
    
    return 0;
}

void print_highest(int (*a)[COLUMN]) {
    int *highest = find_largest(a[0], COLUMN);
    for(int *p = a[1], *temp; p < a[ROW]; p+=COLUMN) {
        temp = find_largest(p, COLUMN);
        if(*temp > *highest) {
            *highest = *temp;
        }
    }

    printf("Highest = %d\n", *highest);
}

int *find_largest(int *a, int n) {
    int *largest = a;
    
    for(n--; n > 0; n--) {
        if(*(++a) > *largest) {
            largest = a;
        }
    }

    return largest;
}