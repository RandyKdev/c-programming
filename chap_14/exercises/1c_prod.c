#include<stdio.h>

#define product(x, y) ((x)*(y) < 100 ? 1 : 0)

int main(void) {
    int num1, num2;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("The product is less than 100: %d\n", product(num1, num2));
    
    return 0;
}