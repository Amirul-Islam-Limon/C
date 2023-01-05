#include <stdio.h>

int main()
{

    int num;
    printf("Please Enter Your Faverite day number : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednday");
        break;
    case 6:
        printf("Thursday!");
        break;
    case 7:
        printf("friday");
        break;
    default:
        printf("Sorry , Not Found!!");
    }

    return 0;
}