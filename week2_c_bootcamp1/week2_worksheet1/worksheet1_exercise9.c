#include <stdio.h>
int main(){
    float km_per_s;
    km_per_s = 299792.458;
    float km_per_d;
    km_per_d = 299792.458 * 86400;
    float days_travelled;
    printf("Enter how many days travelled: ");
    scanf("%f", &days_travelled);
    float total_distance;
    total_distance = km_per_d * days_travelled;
    printf("Total distance travelled in %f days is %fkm\n", days_travelled, total_distance);

    return 0;
}