#include <stdio.h>
#include <stdlib.h>
unsigned int day_num;
int main()
{
    printf("enter the day number : ");
    scanf("%u",&day_num);
    switch(day_num)
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
        printf("Wednesday");
        break;
        case 6:
        printf("Thursday");
        break;
        case 7:
        printf("Friday");
        break;
        default:
        printf("invalid number ???");

    }
    return 0;
}
