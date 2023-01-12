#include <stdio.h>
#include <string.h>

int main(){

    // char name[]={"Amirul Islam"};
    // printf("\n%d\n",strlen(name));
    // printf("\n%d", sizeof(name));

    // char str1[20]={"Hello"};
    // char str2[] = {"Word"};

    // char strA[20]= {"Amirul Islam!"};
    // char strB[20];

    // strcpy(strB,strA);
    // printf("%s", strB);

    // strcat(str1,str2);
    // printf("%s", str1);

    char str1[]={"Amirul Islam"};
    char str2[]={"Limon"};
    char str3[]={"Amirul Islam"};

    printf("%d", strcmp(str1, str3));

    return 0;
}