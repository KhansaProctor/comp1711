#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float circleArea(float radius){
    float area;
    area = PI *(radius*radius);
    return area;
}

int main(){
    float radius;
    printf("Enter value of the radius: ");
    scanf("%f", &radius);
    printf("The area is %f\n", circleArea(radius));
    return 0;
}