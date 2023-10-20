#include <stdio.h>
int main(){
    int temp = 100;
    while (temp < -10 || temp > 40){

        printf("Enter the temperature in celsius: ");
        scanf("%d", &temp);

    }
    printf("Temp is valid\n");

}