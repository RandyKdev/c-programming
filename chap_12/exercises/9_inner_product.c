#include <assert.h>

#define MAX 5

double inner_product(const double *a, const double *b, int n) {
    double product = 0;
    for(n; n > 0; n--) {
        product += *(a++) * *(b++);
    }

    return product;
}

int main(void) {
    double arr1[MAX] = {1, 2, 3, 4, 5};
    double arr2[MAX] = {6, 7, 8, 9, 10};

    double product = inner_product(arr1, arr2, MAX);
    
    assert(product == 130);
    
    return 0;
}