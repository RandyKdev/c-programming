#include<stdio.h>

#define remainder(n) ((n) % 4)

int main(void) {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("The remainder dividing by 4 is %d\n", remainder(num));
    
    return 0;
}