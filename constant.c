#include <stdio.h>

int main(){

    const int birthday = 2004;
    printf("%d\n",birthday);
    // birthday = 2000;
    printf("%d",birthday);

    int month = 11;
    printf("%d\n",month);
    month = 12;
    printf("%d\n",month);

    printf("My favorite %s is %d","number" ,500);
    return 0;
}