#include <stdio.h>

int main(void) {
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("The value of *(p+3): %d\n", *(p+3));
    printf("The value of *(q-3): %d\n", *(q-3));
    printf("The value of q-p: %ld\n", q-p);
    printf("p < q: %s\n", p < q ? "true" : "false");
    printf("*p < *q: %s\n", *p < *q ? "true" : "false");

    return 0;
}