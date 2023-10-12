#include <stdio.h>
int main(){
    float fahrenheit;
    float celsius;
    printf("Enter the temperature is fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit -30)/2;
    printf("The temperature in celsius is %.3f\n", celsius);

    return 0;
}