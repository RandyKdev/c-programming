#include <assert.h>
#include <stdbool.h>

#define N 5

void find_two_largest(int *a, int n, int *largest, int *second_largest);

int main(void) {
    int a[N] = {1, 2, 5, 4, 6};

    int largest, secondLargest;
    find_two_largest(a, N, &largest, &secondLargest);

    assert(largest == 6);
    assert(secondLargest == 5);

    return 0;
}

void find_two_largest(int *a, int n, int *largest, int *second_largest) {
    // copies elements of *a into b[]
    int b[n];
    for(int i = 0; i < n; i++) {
        *(b+i) = *(a++);
    }

    // Sorts b[] in descending order 
    int temp;
    bool swap;
    for(int i = 0; i < n; i++) {
        swap = false;
        for(int j = 0; j < n - 1; j++) {
            if(*(b+j) < *(b+j+1)) {
                temp = *(b+j);
                *(b+j) = *(b+j+1);
                *(b+j+1) = temp;
                swap = true;
            }
        }
        if(!swap) break;
    }

    // assigns largest and second largest
    *largest = *b;
    *second_largest = *(b+1);
}
