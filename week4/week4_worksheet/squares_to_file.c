#include <stdio.h>
#include "utils.h"

int main(){
    char* filename="squares.dat";
    FILE *file = open_file(filename,"w");
    if(file == NULL){
        printf("Error opening file");
        return 1;
    }
    int numbers;
    int counter = 0;
    int square;
    printf("Enter the amount of numbers to square: ");
    scanf("%d", &numbers);
    for(counter=1; counter<=numbers; counter++){
        square = counter*counter;
        fprintf(file,"%d\n",square);
    }



    fclose(file);
    return 0;
}