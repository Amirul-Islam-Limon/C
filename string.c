#include <stdio.h>

int main(){

    char grettings[] = {"Amirul Islam Limon"};

    printf("%s\n",grettings);

    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s\n", greetings);

    char greetings1[] = {'K', ' ','A','\0'};
    printf("%s",greetings1);

    return 0;
}