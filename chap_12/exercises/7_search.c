#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool search(const int a[], int n, int key) {
    for(n; n > 0; n--) {
        if(*(a++) == key) return true;
    }
    return false;
}

int main(void) {
    int arr[] = {3, 4, 5};

    // Testing the search function
    assert(search(arr, 3, 2) == false);
    assert(search(arr, 3, 5) == true);

    return 0;
}