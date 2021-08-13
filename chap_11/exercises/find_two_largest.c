/**
 * @file 
 * @brief Finds the largest and second largest element in a given array of numbers
 * given that there is no repetition and atleast 2 elements
 */

#include <stdio.h>
#include <stdbool.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void) {
    int a[N];
    
    printf("Enter %d numbers: ", N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int largest, secondLargest;
    find_two_largest(a, N, &largest, &secondLargest);

    printf("The largest element is %d and second largest is %d\n", largest, secondLargest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    // copies elements of a[] into b[]
    int b[n];
    for(int i = 0; i < n; i++) {
        b[i] = a[i];
    }

    // Sorts b[] in descending order 
    int temp;
    bool swap;
    for(int i = 0; i < n; i++) {
        swap = false;
        for(int j = 0; j < n - 1; j++) {
            if(b[j] < b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
                swap = true;
            }
        }
        if(!swap) break;
    }

    // assigns largest and second largest
    *largest = b[0];
    *second_largest = b[1];
}
