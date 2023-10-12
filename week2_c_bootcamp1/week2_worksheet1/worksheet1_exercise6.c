#include <stdio.h>
int main(){
    int givenint;
    printf("Enter an integer: ");
    scanf("%d", &givenint);
    
    if (givenint%2 == 0) {
        printf("%d is even\n", givenint);
    }

    else{
        printf("%d is odd\n", givenint);
    }

    return 0;

}