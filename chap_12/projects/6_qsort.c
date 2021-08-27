#include <stdio.h>

#define N 10

void quicksort(int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main(void) {
    int a[N]; // holds numbers entered by user to be sorted
    int i; // used as counter variable

    // reads the numbers from stdin to array
    printf("Enter %d numbers to be sorted: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    // Sorts the array
    quicksort(a, a, a + N - 1);

    // prints the contents of the array
    printf("In sorted order: ");
    for(i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}

void quicksort(int a[], int *low, int *high) {
    int *middle;
    
    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}

int *split(int a[], int *low, int *high) {
    int part_element = *low;

    for(;;) {
        while(low < high && part_element <= *high)
            high--;
        if(low >= high) break;
        *low++ = *high;

        while(low < high && *low <= part_element)
            low++;
        if(low >= high) break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}