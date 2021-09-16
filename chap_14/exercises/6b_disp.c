#include<stdio.h>
#include<math.h>

#define DISP(f, x, y) printf(#f "(%g, %g) = %g\n", x, y, f(x, y))

int main(void) {
    DISP(pow, 2.0, 3.0);

    return 0;
}