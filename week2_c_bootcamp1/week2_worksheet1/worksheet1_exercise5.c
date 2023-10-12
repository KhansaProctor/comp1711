#include <stdio.h>
int main(){

    int variable1;
    int variable2;
    int tempvariable;

    printf("Enter the value of variable one: ");
    scanf("%d", &variable1);
    printf("Enter the value of variable two: ");
    scanf("%d", &variable2);

    tempvariable = variable1;
    variable1 = variable2;
    variable2 = tempvariable;

    printf("variable one is now %d and variable two is now %d\n", variable1, variable2);
    return 0;

}

