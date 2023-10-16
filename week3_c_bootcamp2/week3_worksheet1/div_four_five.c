#include <stdio.h>
int main(){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    if (value % 4 == 0 && value % 5 == 0){
        printf("%d is divisible by both 4 and 5\n", value);
    }
    else{
        printf("%d is not divisible by both 4 and 5\n", value);
    }

    return 0;
}