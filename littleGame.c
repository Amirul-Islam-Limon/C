#include <stdio.h>

int main(){

    char color[20];
    char pluraName[20];
    char celebrityNameF[20];
    char celebrityNameL[20];

    printf("Enter a color :");
    scanf("%s", color);
    printf("Enter a pluraName :");
    scanf("%s", pluraName);
    printf("Enter celebrityName :");
    scanf("%s %s", celebrityNameF,celebrityNameL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluraName);
    printf("I love %s %s\n",celebrityNameF,celebrityNameL);

    return 0;
}