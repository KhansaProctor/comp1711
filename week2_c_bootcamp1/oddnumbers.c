#include <stdio.h>
int main(){
    int i=0;

    for(i=1; i<20; i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }

    return 0;
}