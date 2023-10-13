#include <stdio.h>
int main(){
    char str[] = "hello";
    int i=0;
    int length = 0;
    while(str[length] != '\0'){
        length ++;
    }

    for(i=length-1; i >=0; i--){
        printf("%c", str[i]);

    }
    printf("\n");

    

    return 0;
}