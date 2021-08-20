#include <assert.h>

int *find_middle(int *a, int n) {
    return a + (n/2);
}

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    
    assert(find_middle(arr, 5) == arr + 2);

    return 0;
}