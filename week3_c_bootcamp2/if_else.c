#include <stdio.h>

int main() {

    int mark = 66;

    if (mark >= 0 && mark <= 100){
        if (mark >= 70){
            printf("The mark of %d is a first\n", mark);
        }
        else if (mark >=60 && mark <70){
            printf("The mark of %d is a 2:1\n", mark);
        }
        else{
            printf ("The mark of %d is a fail\n", mark);
        }
    }
    else{
        printf("The mark of %d is not valid\n", mark);
    }

    return 0;
}