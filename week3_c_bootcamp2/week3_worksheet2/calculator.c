#include <stdio.h>
#include <string.h>
float calc(float value_one, float value_two, char symbol){
    char add[] = "+";
    char subtract[] = "-";
    char multiply[] = "*";
    char divide[] = "/";
    if(strcmp(symbol, add)==0){
        return (value_one + value_two);
    }
    else if(strcmp(symbol, subtract)==0){
        return(value_one - value_two);
    }
    else if(strcmp(symbol, multiply)==0){
        return(value_one * value_two);
    }
    else if(strcmp(symbol, divide)==0){
        return(value_one/value_two);
    }
}

int main(){
    float value_one;
    float value_two;
    char symbol[1];
    printf("Enter value_one: ");
    scanf("%f", &value_one);
    printf("Enter value two: ");
    scanf("%f", &value_two);
    printf("Enter the symbol of the arithmetic operation: ");
    scanf("%s", symbol);
}