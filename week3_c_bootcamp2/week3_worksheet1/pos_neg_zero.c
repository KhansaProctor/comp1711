#include <stdio.h>
int main(){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);

    if (value >0){
        printf("The value is positive\n");
    }
    else if (value == 0){
        printf("The value is 0\n");
    }
    else{
        printf("The value is negative\n");
    }
    return 0;
}