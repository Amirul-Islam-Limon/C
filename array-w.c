#include <stdio.h>

int main(){

    int myNumber[]= {55, 59, 33, 11, 99, 77, 88, 55, 66};

    int i;
    for(i = 0; i < 9; ++i){
        printf("%d\n",myNumber[i]);
    }

    myNumber[0]=0;
    myNumber[1]= 1;
    myNumber[2]= 2;

    int j;
    for(j = 0; j < 9; ++j){
        printf("%d\n",myNumber[j]);
    }

    return 0;
}