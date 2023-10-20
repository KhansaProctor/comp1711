#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

float sphereVolume(float radius){
    float volume;
    volume = (4/3)*(PI)*(radius*radius*radius);
    return volume;
}

int main(){
    float radius;
    printf("enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("The volume of the sphere is %f\n", sphereVolume(radius));
    return 0;
}