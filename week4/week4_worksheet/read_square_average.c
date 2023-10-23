#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int main(){
    char* filename="squares.dat";
    FILE *file = open_file(filename, "r");
    if(file == NULL){
        printf("Error opening file");
        return 1;
    }
    int buffer_size = 100;
    char line_buffer[buffer_size];
    float average = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL){
        average = average + atoi(line_buffer);
    }
    
    printf("Average is %f\n", average);

    fclose(file);
    return 0;
}