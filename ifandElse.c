#include <stdio.h>

int main(){

    // if(20 > 18){
    //     printf("20 is greater than 18");
    // }

    // return 0;

    // int time = 20;
    // if(time < 18){
    //     printf("Good Day!");
    // }else{
    //     printf("Good Morning!");
    // }

    int time = 22;

    if(time < 10){
        printf("Good Morning!");
    }
    else if(time < 20){
        printf("Good Day!");
    }
    else{
        printf("Good Evening!");
    }

    int number = 0;

    if(number > 0){
        printf("The value is Positive Number");
    }
    else if(number < 0){
        printf("The value is Negative Number!");
    }
    else{
        printf("The Value is Zero!");
    }

    // Ternary Operator

    int myTime = 20;
    (time < 18)? printf("Good MorningTT"): printf("Good EveningTT!");
}