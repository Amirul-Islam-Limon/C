#include <stdio.h>

int main(){

    int price = 99;
    printf("%d\n",price);
    price = 89;
    printf("%d\n",price);

    const int birthDate = 11;
    printf("%d\n", birthDate);
    /* birthDate = 12;*/
    printf("%d\n",birthDate);


    return 0;
}