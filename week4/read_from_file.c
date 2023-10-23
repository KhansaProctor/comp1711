#include <stdio.h>
#include <stdlib.h>

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    //length of line to read in, read up to 100 characters    
    int buffer_size = 100;
    // a string which will hold each line as it's read in
    char line_buffer[buffer_size];

    //an arbitary large number
    int numbers[1000];

    int line_counter=0;

    // while there is still stuff in the file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        //read in as a number
        printf("%d\n", atoi(line_buffer));
        numbers[line_counter] = atoi(line_buffer);
        line_counter++;
    }

    fclose(file);
    return 0;
}