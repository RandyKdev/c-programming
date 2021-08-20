#include <stdio.h>

int sum_array(const int *a, int n) {
    int sum = 0;
    for(n; n > 0; n--) {
        sum += *(a++);
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3};

    int sum = sum_array(arr, 3);

    printf("%d\n", sum);

    return 0;
}