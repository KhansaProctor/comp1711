#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
int filename_chosen = 0;


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() {
    int chose_exit = 0;
    char choice;
    char filename[10];
    

    int buffer_size = 1000;
    char line_buffer[buffer_size];
    char *main_array[1000]; 
    int line_counter = 0;
    char steps[50];
    int counter = 0;
    FITNESS_DATA formatted_array[1000];
    
    
    while(1){
       printf("A: View all your blood iron levels\n");                       // BRONZE
        printf("B: View your average blood iron level\n");                    // BRONZE
        printf("C: View your lowest blood iron level\n");                     // SILVER
        printf("D: View your highest blood iron level\n");                    // SILVER
        printf("E: View the blood iron levels for a specific month\n");       // SILVER/GOLD
        printf("F: See some additional statistics about your iron levels\n"); // GOLD - see readme.md
        printf("G: Generate a graph of your iron levels\n");                  // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");

        // get the next character typed in and store in the 'choice'
        choice = getchar();

        // this gets rid of the newline character which the user will enter
        // as otherwise this will stay in the stdin and be read next time
        while (getchar() != '\n');
        
        switch(choice){
            case 'A':
            case 'a':
                printf("Input filename: ");
                scanf("%s", filename);
                FILE *file = fopen(filename, "r");
                if(file == NULL){
                    printf("Error opening file\n");
                    return 1;
                }
                else{
                    printf("File successfully loaded\n");
                }

                while(fgets(line_buffer, buffer_size, file) != NULL){
                    main_array[line_counter] = line_buffer;
                    tokeniseRecord(main_array[line_counter], ",", formatted_array[line_counter].date, formatted_array[line_counter].time, steps);
                    formatted_array[line_counter].steps = atoi(steps);
                    line_counter++;
                }
                fclose(file);
                break;
            case 'B':
            case 'b':
                printf("Total records: %d\n", line_counter);
                
                
                
                
                break;
        }
    }
}








