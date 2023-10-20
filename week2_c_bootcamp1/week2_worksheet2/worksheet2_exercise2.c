#include <stdio.h>
int main(){
    int array[] = {1,4,7,22,9};
    int length = 0;
    int *front_pointer = array;
    int *back_pointer = array+4;
    int initial_front = *front_pointer;
    int initial_back = *back_pointer;
    while (initial_front != initial_back){
        
    }


   
    printf("first is %d last is %d\n", *front_pointer, *back_pointer);
}