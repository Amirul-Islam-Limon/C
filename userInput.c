#include <stdio.h>

int main(){

    // int  mynum;
    // printf("Please Enter Your Number: ");
    // scanf("%d", &mynum);
    // printf("Your Number is : %d",mynum);

    // int oneNum;
    // char oneChar;
    // printf("Please enter a num and a char: ");
    // scanf("%d %c", &oneNum, &oneChar);
    // printf("Our integer is %d and char is %c: ", oneNum, oneChar);

    // char myName[20];
    // printf("Please Enter Your First Name: ");
    // scanf("%s", &myName);
    // printf("Your name is %s", myName);


    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}