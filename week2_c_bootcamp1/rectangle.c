#include <stdio.h>
int main(){

    float length;
    float width;
    float area;

    printf("Enter the rectangle's length: ");
    scanf("%f", &length);
    printf("Enter the rectangle's width: ");
    scanf("%f", &width);

    area = length * width;
    printf("The area of the rectangle is %f\n", area);

    return 0;
}