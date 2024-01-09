#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
int filename_chosen = 0;
int fewest_steps_index = 0;
int largest_steps_index = 0;
int total_steps = 0;
int mean = 0;
int temp_longest_period_start_index = 0;
int longest_period_start_index = 0;
int temp_longest_period_end_index = 0;
int longest_period_end_index = 0;
int temp_longest_period_counter = -1;
int longest_period_counter = 0;

int chose_exit = 0;
char choice;

char filename[10];
int buffer_size = 1000;

char *main_array[1000]; 
int line_counter = 0;

char date[50];
char time[50];
char steps[50];
int counter = 0;
FITNESS_DATA formatted_array[1000];


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
    
    char line_buffer[buffer_size];
    
    // Menu section
    while(chose_exit == 0)
    {
        printf("Menu options: \n");
        printf("A: Specify the filename to be imported\n");                       // BRONZE
        printf("B: Display the total number of records in the file\n");                    // BRONZE
        printf("C: Find the date and time of the timeslot with the fewest steps\n");                     // SILVER
        printf("D: Find the data and time of the timeslot with the largest number of steps\n");                    // SILVER
        printf("E: Find the mean step count of all the records in the file\n");       // SILVER/GOLD
        printf("F: Find the longest continuous period where the step count is above 500 steps\n"); // GOLD - see readme.md               // GOLD/PLATINUM - see readme.md
        printf("Q: Exit the program\n");
        printf("Enter choice: ");

        scanf("%s",&choice);
        
        switch(choice)
        {
        case 'A':
        case 'a':
            printf("Input filename: ");
            scanf("%s",filename);
            FILE *file = fopen(filename, "r");
            if(file == NULL){
                printf("Error opening file\n");
                return 1;
            }
            // storing the file
            while(fgets(line_buffer, buffer_size, file) != NULL){
                main_array[line_counter] = line_buffer;
                tokeniseRecord(main_array[line_counter], ",", date, time, steps);
                strncpy(formatted_array[line_counter].date, date, sizeof(formatted_array[line_counter].date));
                strncpy(formatted_array[line_counter].time, time, sizeof(formatted_array[line_counter].time));
                formatted_array[line_counter].steps = atoi(steps);
                total_steps += formatted_array[line_counter].steps;
                printf("%d: %d\n", line_counter, total_steps);
                
                //finding the fewest and largest steps
                if (line_counter != 0){
                    if (formatted_array[line_counter].steps < formatted_array[fewest_steps_index].steps){
                        fewest_steps_index = line_counter;
                    }
                    if (formatted_array[line_counter].steps > formatted_array[largest_steps_index].steps){
                        largest_steps_index = line_counter;
                    }
                }

                //finding the longest period
                if ((formatted_array[line_counter].steps >= 500) && (temp_longest_period_start_index == 0)){
                    temp_longest_period_start_index = line_counter;
                }
                if (temp_longest_period_start_index != 0){
                    temp_longest_period_counter++;
                    if (formatted_array[line_counter].steps <= 500){
                        temp_longest_period_end_index = line_counter-1;
                    }
                    
                }
                
                if (temp_longest_period_end_index != 0){
                    if (temp_longest_period_counter > longest_period_counter){
                        longest_period_start_index = temp_longest_period_start_index;
                        longest_period_end_index = temp_longest_period_end_index;
                        longest_period_counter = (temp_longest_period_counter);
                    }
                    
                    temp_longest_period_start_index = 0;
                    temp_longest_period_end_index = 0;
                    temp_longest_period_counter = -1;
                    

                }
                
                line_counter++;
            }

            printf("File successfully loaded\n");
            

            break;
        case 'B':
        case 'b':
            printf("Total records: %d\n", line_counter);
    
            break;

        case 'C':
        case 'c':
            printf("Fewest steps: %s %s\n", formatted_array[fewest_steps_index].date, formatted_array[fewest_steps_index].time);
            break;

        case 'D':
        case 'd':
            printf("Largest steps: %s %s\n", formatted_array[largest_steps_index].date, formatted_array[largest_steps_index].time);
            break;

        case 'E':
        case 'e':
            // calculating the mean
            mean = round((float) total_steps/(float)line_counter);
            printf("Mean step count: %d\n", mean);
            break;
        
        case 'F':
        case 'f':
            printf("Longest period start: %s %s\n", formatted_array[longest_period_start_index].date, formatted_array[longest_period_start_index].time);
            printf("Longest period end: %s %s\n", formatted_array[longest_period_end_index].date, formatted_array[longest_period_end_index].time);
            break;

        case 'Q':
        case 'q':
            chose_exit = 1;
        }


    }
    return 0;
}








