#include <stdio.h>
#include <stdlib.h>
unsigned int number;
unsigned int fact = 1;
int main()
{
    printf("enter the number : ");
    scanf("%i",&number);
    if(number < 0)
    {
       printf("no factorial for negative number ...");
    }
    else
    {
        while(number != 0)
        {
            fact *= number;
            number--;
        }
        printf("the factorial is %i",fact);
    }
    return 0;
}
