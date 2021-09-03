/**
 * @file
 * @brief The program finds the highest and least values in an array of numbers 
 */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int b[N]; // holds the numbers entered by the user
    int i; // counter variable
    int big; // holds the highest value in the array of numbers
    int small; // holds the least value in the array of numbers

    // reads the numbers from stdin into array
    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &b[i]);
    
    // finds the highest and least value in array
    max_min(b, N, &big, &small);

    // Prints the largest value in the array
    printf("Largest: %d\n", big);

    // Prints the least value in the array
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min) {
    // sets `max` and `min` to the first element of `a`
    *max = *min = *a;
    
    // iterates over the array and assigns `max` and `min`
    for(int *i = a + 1; i < a + n; i++) {
        if(*i > *max)
            *max = *i;
        else if(*i < *min)
            *min = *i;
    }
}