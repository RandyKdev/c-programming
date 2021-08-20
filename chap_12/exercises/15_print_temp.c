#include <stdio.h>

#define ROW 7
#define COLUMN 24

void print_row(int (*a)[COLUMN], int row);

int main(void) {
    int temperature[ROW][COLUMN] = {{1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5}};

    print_row(temperature, 0);

    return 0;
}

void print_row(int (*a)[COLUMN], int row) {
    for(int *p = a[row]; p < a[row] + COLUMN; p++) {
        printf("%d ", *p);
    }

    printf("\n");
}