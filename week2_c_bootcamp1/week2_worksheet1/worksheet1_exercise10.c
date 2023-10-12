#include <stdio.h>
int main(){
    float principal;
    printf("Enter the initial amount borrowed: ");
    scanf("%f", &principal);
    float interest;
    printf("Enter the added interest percentage monthly: ");
    scanf("%f", &interest);
    interest = 1 + (interest/100);
    float time;
    printf("Enter the amount of months since the money has been borrowed: ");
    scanf("%f", &time);
    float owed;
    owed = principal*time*interest;
    printf("The amount owed is £%f\n", owed);

    return 0;
    
}