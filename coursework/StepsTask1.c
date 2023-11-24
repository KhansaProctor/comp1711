#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[50];
	char time[50];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



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
    char* filename = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        printf("Error opening file");
        return 1;
    }

    int buffer_size = 1000;
    char line_buffer[buffer_size];
    char *main_array[1000];
    int line_counter = 0;
    char date[50];
    char time[50];
    char steps[50];
    int counter = 0;
    FITNESS_DATA formatted_array[1000];


    while(fgets(line_buffer, buffer_size, file) != NULL){
        main_array[line_counter] = line_buffer;
        tokeniseRecord(main_array[line_counter], ",", date, time, steps);
        strncpy(formatted_array[line_counter].date, date, sizeof(formatted_array[line_counter].date));
        strncpy(formatted_array[line_counter].time, time, sizeof(formatted_array[line_counter].time));
        formatted_array[line_counter].steps = atoi(steps);
        line_counter++;
        
    }

    printf("Number of records in file: %d\n", line_counter);
    for(counter =0; counter <3; counter++){
        printf("%s/%s/%d\n",(formatted_array[counter]).date,(formatted_array[counter]).time, (formatted_array[counter]).steps);
        
    }

    

    fclose(file);
    return 0;
}