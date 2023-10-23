#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    char str[50];
    int num_lines = 0;
    int total = 0;
    float mean =0;

    printf("How many strings to enter? ");
    scanf("%d", &num_lines);
    
    printf("Type %d strings: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", str);
        fprintf(file, "%s\n", str);
        //total += number;
    }

    //mean = total/num_lines;
    //fprintf(file, "%f\n", mean);    

    fclose(file);
    return 0;
}