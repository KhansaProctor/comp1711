#include <stdio.h>
int main(){
    int numbers[10];
    int counter=0;
    int total=0;
    float mean;

    for(counter=0;counter<10;counter++){
        printf("\nEnter a number: ");
        scanf("%d", &numbers[counter]);
        total += numbers[counter];
    }

    mean = total/10;
    printf("%d\n",mean);

    for(counter=0; counter<10; counter++){
        printf("%d\n", numbers[counter]);
    }

}