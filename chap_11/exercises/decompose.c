/**
 * @file
 * @brief Program separates a given number to its integer and fractional parts
 */

#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main() {
    long int_part;
    double frac_part;
    decompose(3.145893, &int_part, &frac_part);
    
    printf("Int part = %ld \nFractional part = %f\n", int_part, frac_part);
    
    return 0;
}

void decompose(double x, long *int_part, double *frac_part) {
    *int_part = (long) x;
    *frac_part = x - *int_part;
}