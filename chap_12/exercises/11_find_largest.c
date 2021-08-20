#include <assert.h>

#define N 6

int *find_largest(int *a, int n) {
    int *largest = a;
    
    for(n--; n > 0; n--) {
        if(*(++a) > *largest) {
            largest = a;
        }
    }

    return largest;
}

int main(void) {
    int a[N] = {1, 2, 3, 6, 4, 5};

    int *largest = find_largest(a, N);
    
    assert(largest == a + 3);

    return 0;
}
