#include<stdio.h>
#include<math.h>

#define POLYNOMIAL(x) ((3*pow((x), 5)) + \
(2*pow((x), 4)) - (5*pow((x), 3)) - \
pow((x), 2) + (7*(x)) - 6)

int main(void) {
    printf("%f\n", POLYNOMIAL(0));

    return 0;
}