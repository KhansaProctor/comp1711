#include <stdio.h>
int main(){
    int a[4];
    int count;

    for (count = 0; count < 4; count ++){
        a[count] = count * 10 + count;
    }

    int total = 0;
    for(count = 0; count < 4; count ++){
        total = total + a[count];
    }

    printf("%d\n", total);

    return 0;
}