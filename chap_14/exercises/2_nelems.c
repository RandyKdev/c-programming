#include<stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void) {
    int arr[10];

    printf("The size of the array %lu\n", NELEMS(arr));
    
    return 0;
}