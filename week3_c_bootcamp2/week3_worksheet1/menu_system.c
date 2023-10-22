#include <stdio.h>
int main(){
    int option;
    printf("Pick an option between 1-5: ");
    scanf("%d", &option);

    switch(option){
        case 1:     printf("Option 1 selected\n");
        break;

        case 2:     printf("Option 2 selected\n");
        break;

        case 3:     printf("Option 3 selected\n");
        break;

        case 4:     printf("Option 4 selected\n");
        break;

        case 5:     printf("Option 5 selected\n");
        break;

        default: printf("Invalid option\n");
    }

    return 0;
}