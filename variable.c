#include <stdio.h>

int main(){

    char characterName[] = "Amirul Islam";
    int characterAGe = 18;
    printf("There was a man named %s\n", characterName);
    printf("He was %d years old\n", characterAGe);
    characterAGe = 19;
    printf("He really like the name %s\n", characterName);
    printf("but he did not like being %d\n", characterAGe);


    // more practice
    int number = 7;
    char myName[] = "Amirul Islam";
    float age = 18.2;

    printf("My name is %s\n",myName);
    printf("My favorite number is %i\n",number);
    printf("And my age is %f\n",age);

    // add variable with the help of operator
    int num1 = 5;
    int num2 = 7;
    int sum = num1 + num2;
    printf("%i\n",sum);

    int x = 5, y = 6, z = 50;
    printf("%i\n", x + y + z);

    int a, b, c, f;
    a = b = c = f = 50;
    printf("%d\n",a + b + c + f);

    return 0;
}