#include <stdio.h>
int main(){
    int value = 0;
    while (value != -1){
        printf("Enter a value from 0 to 100 or -1 to terminate: ");
        scanf("%d", &value);
        if(value >100 || (value <0 && value != -1)){
            printf("Invalid value\n");
        }
        else if(value == -1){
            printf("Terminated\n");
        
        }
    }
    return 0;
}