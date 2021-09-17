#include <stdio.h>

#define MEDIAN(x, y, z) ((x)<(y)&&(x)>(z) ? (x) : \
(x)>(y)&&(x)<(z) ? (x) : \
(y)>(x)&&(y)<(z) ? (y) : \
(y)<(x)&&(y)>(z) ? (y) : (z))

int main(void) {
    printf("%d\n", MEDIAN(4,10,6));

    return 0;
}