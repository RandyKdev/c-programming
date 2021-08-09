/**
 * @file 
 * @brief Finds the largest element in a given array of numbers
 * given that there is atleast an element in the array
 */

#include <stdio.h>
#include <stdbool.h>

#define N 10

void *find_largest(int a[], int n);

int main(void) {
    int a[N];
    
    printf("Enter %d numbers: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int *largest = find_largest(a, N);

    printf("The largest element is %d\n", *largest);

    return 0;
}

void *find_largest(int a[], int n) {
    int *largest = &a[0];
    
    for(int i = 1; i < n; i++) {
        if(a[i] > *largest) {
            largest = &a[i];
        }
    }

    return largest;
}
