/**
 * @file
 * @brief Finds the bigger element given 2 elements (numbers)
 */

#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
    int i, j;
    
    printf("Enter 2 numbers: ");
    scanf("%d %d", &i, &j);

    int *p = max(&i, &j);

    printf("The bigger element is %d\n", *p);

    return 0;
}

int *max(int *a, int *b) {
    if(*a > *b)
        return a;
    else
        return b;
}

