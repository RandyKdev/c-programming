#include <assert.h>
#include <stdio.h>

#define N 10

int main(void) {
    double ident[N][N];

    int  numOfZeros = 0;
    ident[0][0] = 1.0;
    for(double *p = ident[0] + 1; p <= &ident[N-1][N-1]; p++) {
        if(N == numOfZeros) {
            *p = 1.0;
             numOfZeros = 0;
        } else {
            *p = 0.0;
            numOfZeros++;
        }
    }

    // prints the array
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%.0f ", ident[i][j]);
        }
        printf("\n");
    }

    //testing the program
    assert(ident[0][0] == 1.0);
    assert(ident[1][1] == 1.0);
    assert(ident[1][0] == 0.0);
    assert(ident[2][2] == 1.0);

    return 0;
}