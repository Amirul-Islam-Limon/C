#include <stdio.h>

int main(){

    int i,k;

    for (i = 0; i < 2; ++i){
        printf("\n outter: %d\n",i);

        for (k = 0; k < 11; ++k)
            {
                printf("inner: %d\n",k);
            }
        
    }



    return 0;
}