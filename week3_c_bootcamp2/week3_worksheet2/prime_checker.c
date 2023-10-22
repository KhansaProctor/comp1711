#include <stdio.h>
int isPrime(int value){
    int isPrime = 1;
    int checkAgainst = 2;
    while ((checkAgainst < value) && isPrime == 1){
        if(value%checkAgainst==0){
            isPrime = 0;

        }
        else{
            checkAgainst ++;
        }
    }
    return isPrime;
    
}

int main(){
    int value;
    printf("Enter a value: ");
    scanf("%d", &value);
    if(isPrime(value)==0){
        printf("%d is not prime\n", value);
    }
    else if(isPrime(value ==1)){
        printf("%d is prime\n", value);
    }
    return 0;
}