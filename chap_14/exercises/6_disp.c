#include<stdio.h>
#include<math.h>

#define DISP(f, x) printf(#f "(%g) = %g\n", x, f(x))

int main(void) {
    DISP(sqrt, 25.0);

    return 0;
}