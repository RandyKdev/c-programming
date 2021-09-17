#include <stdio.h>

#define CHECK(x, y, n) (((x)>=0&&(x)<=(n)-1)&&((y)>=0&&(y)<=(n)-1) ? 1 : 0)

int main(void) {
    printf("%d\n", CHECK(2, 3, 5));

    return 0;
}