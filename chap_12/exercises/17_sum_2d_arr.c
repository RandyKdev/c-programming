#include <assert.h>

#define LEN 2

int sum_two_dimensional_array(const int a[][LEN], int n) {
    int sum = 0;

    for(const int *p = a[0]; p < a[n];) {
        sum += *(p++);
    }

    return sum;
}

int main(void) {
    int arr[5][LEN] = {{1, 2}, {3, 4}, {5, 6}};

    int sum = sum_two_dimensional_array(arr, 3);

    // testing the program
    assert(sum == 21);

    return 0;
}