#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numberator, int *reduced_denominator);

int main() {
    int numerator, denominator;
    printf("Enter fraction (eg 1/2): ");
    scanf("%d/%d", &numerator, &denominator);

    int reduced_denominator, reduced_numerator;
    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    
    printf("The reduced fraction is %d/%d\n", reduced_numerator, reduced_denominator);
    
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int gcd = 1;
    int i = 2;
    
    while(i <= numerator && i <= denominator) {
        if(numerator % i == 0 && denominator % i == 0) {
            gcd = i;
        }

        i++;
    }

    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}