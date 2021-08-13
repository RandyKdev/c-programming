/**
 * @file Computes the sum and average of the elements in a given array
 * @brief 
 */

#include <stdio.h>

#define N 10

void avg_sum(int a[], int n, double *avg, double *sum);

int main(void) {
    int a[N];

    printf("Enter %d numbers: ", N);
    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    double sum, avg;
    avg_sum(a, N, &avg, &sum);

    printf("The sum is %f\nThe average is %f\n", sum, avg);
    
    return 0;
}

void avg_sum(int a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;
    for(i = 0; i < n; i++)
        *sum += a[i];

    *avg = *sum / n;
}