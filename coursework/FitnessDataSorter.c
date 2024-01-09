#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Global varibles
char filename[10];
int buffer_size = 1000;
char *main_array[1000]; 
int line_counter = 0;

int i;
int j;

char date[50];
char time[50];
char steps[50];
int counter = 0;
FitnessData formatted_array[1000];

// Function to tokenize a record
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

int main() {
    char line_buffer[buffer_size];

    printf("Input filename: ");
    scanf("%s",filename);
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        printf("Error opening file\n");
        return 1;
    }
    // storing the file
    printf("old\n");
    while(fgets(line_buffer, buffer_size, file) != NULL){
        main_array[line_counter] = line_buffer;
        tokeniseRecord(main_array[line_counter], ",", date, time, steps);
        strncpy(formatted_array[line_counter].date, date, sizeof(formatted_array[line_counter].date));
        strncpy(formatted_array[line_counter].time, time, sizeof(formatted_array[line_counter].time));
        formatted_array[line_counter].steps = atoi(steps);
        printf("%s/%s/%d\n",(formatted_array[line_counter]).date,(formatted_array[line_counter]).time, (formatted_array[line_counter]).steps);

        line_counter++;
    } 
    printf("sort %d\n",line_counter);
    for (i = 0; i<(line_counter-1);i++){
        for (j=0; j<(line_counter-i-1);j++){
            printf("i=%d, j=%d, %d %d\n",i,j,(formatted_array[i]).steps,(formatted_array[j]).steps);
            if (formatted_array[j].steps<formatted_array[j+1].steps){
                char temp_date = formatted_array[j].date;
                char temp_time = formatted_array[j].time;
                int temp_steps = formatted_array[j].steps;
                strncpy(formatted_array[j].date, formatted_array[j+1].date, sizeof(formatted_array[j].date));
                strncpy(formatted_array[j+1].date, temp_date, sizeof(formatted_array[j+1].date));
                strncpy(formatted_array[j].time, formatted_array[j+1].time, sizeof(formatted_array[j].time));
                strncpy(formatted_array[j+1].time, temp_time, sizeof(formatted_array[j+1].date));
                formatted_array[j].steps = formatted_array[j+1].steps;
                formatted_array[j+1].steps = temp_steps;
                printf("%s/%s/%d\n",(formatted_array[i]).date,(formatted_array[i]).time, (formatted_array[i]).steps);
            }
        }
    } 
    printf("new\n");
    for (int i=0; i<line_counter; i++){
        printf("%s/%s/%d\n",(formatted_array[i]).date,(formatted_array[i]).time, (formatted_array[i]).steps);
    }
}