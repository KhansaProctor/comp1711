#include <stdio.h>
int main (){
    int value;
    int answer;
    printf("Enter the value of the intger: ");
    scanf("%d", &value);
    answer = value;

    while(value>1){
        printf("%d\n",value);
        answer = answer * (value-1);
        value = value-1;
    }
    printf("%d\n",answer);
}