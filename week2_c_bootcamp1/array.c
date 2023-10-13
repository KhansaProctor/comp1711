#include <stdio.h>
int main(){
    int a[10];
    int count;

    for (count = 0; count < 10; count ++){
        a[count] = count * 10 + count;
    }

    printf("The first and second element are %d and %d\n", a[0], a[1]);

    return 0;
}