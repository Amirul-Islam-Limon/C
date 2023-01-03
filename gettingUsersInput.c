#include <stdio.h>

int main(){

    /*
    int age;
    printf("Please Enter your age :");
    scanf("%d",&age);
    printf("Your are %d years old!\n",age);

    double gpa ;
    printf("Please Enter Your GPA :");
    scanf("%lf",&gpa);
    printf("Your GPA is %f",gpa);
    */

   char name[20];
   printf("Please Enter Your name: ");
   fgets(name, 20, stdin);
   scanf("%s", &name);
   printf("Your Name is %s",name);

    return 0;
}