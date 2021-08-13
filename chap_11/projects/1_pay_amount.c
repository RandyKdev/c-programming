#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main() {
    int dollars;
    printf("Enter amount of dollars: ");
    scanf("%d", &dollars);

    int twenties, tens, fives, ones;
    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("Number of 20$ = %d\n", twenties);
    printf("Number of 10$ = %d\n", tens);
    printf("Number of 5$ = %d\n", fives);
    printf("Number of 1$ = %d\n", ones);
    
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    
    *tens = dollars / 10;
    dollars -= *tens * 10;
    
    *fives = dollars / 5;
    dollars -= *fives * 5;
    
    *ones = dollars;
}