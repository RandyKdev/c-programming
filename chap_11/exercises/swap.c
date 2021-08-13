/**
 * @file
 * @brief Swaps the value of two integers
 */

#include <stdio.h>

void swap(int *p, int *q);

int main(void) {
    int i, j;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &j);

    printf("i is %d and j is %d\n", i, j);
    
    swap(&i, &j);

    printf("After swap, i is %d and j is %d\n", i, j);

    return 0;
}

void swap(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}