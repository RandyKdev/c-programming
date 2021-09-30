#include <stdio.h>
#include "quicksort.h"

#define N 10

int main(void) {
    int a[N]; // holds numbers entered by user to be sorted
    int i; // used as counter variable

    // reads the numbers from stdin to array
    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    // Sorts the array
    quicksort(a, 0, N - 1);

    // prints the contents of the array
    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}