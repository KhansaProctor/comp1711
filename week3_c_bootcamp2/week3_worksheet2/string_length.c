#include <stdio.h>

int str_length(char str){

    int length = 0;
    while( (*str +length)!= '\0'){
        length ++;
    }

    return length;

}

int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("The length of %s is %d", str, str_length(*str));

    return 0;
}