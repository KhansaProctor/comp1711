#include <stdio.h>
#include <math.h>
int main(){
    float radius;
    float area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;

    printf("The area is %f\n", area);

    return 0;
}