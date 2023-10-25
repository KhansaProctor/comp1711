#include <stdio.h>
#include "utils.h"
#include <stdlib.h>

int main(){
    char* filename="numbers.dat";
    FILE *file = open_file(filename, "r+");
    if (file==NULL){
        printf("Error opening file");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    float average = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL){
        average = average + atof(line_buffer);
    }
    fprintf(file,"%f",average);

    fclose(file);
}

