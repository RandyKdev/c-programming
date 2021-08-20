#include <stdio.h>
#include <assert.h>

void store_zeros(int *a, int n) {
    for(n; n > 0; n--) {
        *(a++) = 0;
    }
}

int main(void) {
    int arr[] = {1, 2, 3};

    store_zeros(arr, 3);
  
    // testing the program
    assert(arr[0] == 0);
    assert(arr[1] == 0);
    assert(arr[2] == 0);

    return 0;
}