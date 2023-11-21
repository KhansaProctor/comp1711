#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[3][4];
    int array2[3][4];
    int array3[3][4];
    int i, j;

    // Seed the random number generator
    srand(time(NULL));

    // Assign random values to each element of the array
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array2[i][j] = rand() % 11; // rand() % 11 gives a range 0 to 10
        }
    }

    // Print the array to verify
    printf("Array 1\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", array[i][j]);
            
            
        }
        printf("\n");
    }

    printf("Array 2\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d ", array2[i][j]);
            
        }
        printf("\n");
    }

    printf("Array 3\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            array3[i][j] = array[i][j] * array2[i][j];
            printf("%d ", array3[i][j]);
            
        }
        printf("\n");
    }

    return 0;
}