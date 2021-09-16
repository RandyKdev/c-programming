#include<stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("%d\n", cube(num));

    return 0;
}