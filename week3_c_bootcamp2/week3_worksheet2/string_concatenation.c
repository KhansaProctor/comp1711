#include <stdio.h>

int str_length(char* str){
    
    int length = 0;
    while(*str != '\0'){
        length ++;
        str ++;
    }
    return length;

}

char concatStrings(char* string_one, char* string_two){
    int element = (str_length(string_one));
    int length2 = (str_length(string_two));
    int counter = 0;
    while(counter != length2){
        string_one[element] = string_two[counter];
        element++;
        counter++;
    }
    return string_one;
}

int main(){
    char string_one[50];
    char string_two[50];
    printf("Enter string one: ");
    scanf("%s", string_one);
    printf("Enter string two: ");
    scanf("%s", string_two);
    
    printf("%s", concatStrings(string_one, string_two));

    return 0;
}