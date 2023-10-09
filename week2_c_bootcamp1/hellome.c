#include <stdio.h>

int main()
{
    // setting up 15 slots of memory for a string
    char name[15];

    // prompting user
    printf("Hello, please enter your name: ");
    // take the user input and storing into name
    scanf("%s", name);
    // printing out user's name
    printf("Your name is %s\n", name);

    return 0;
}