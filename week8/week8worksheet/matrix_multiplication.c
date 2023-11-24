#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int matrixA[2][3];
    int matrixB[3][2];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            matrixA[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            matrixB[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    
}