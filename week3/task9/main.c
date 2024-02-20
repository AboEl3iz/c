#include <stdio.h>
#include <stdlib.h>
unsigned int ele , num1 = 0 , num2 = 1 ,next ,counter;

int main()
{
    printf("enter the number of elements : ");
    scanf("%i",&ele);
    next = num1+num2;
    printf("Fibonacci Series: %u, %u, ", num1, num2);
    for(counter = 3 ; counter <= ele ; counter++)
    {
        printf("%i",next)
        num1 = num2;
        num2 = next;
        next = num1 + num2;
    }

    return 0;
}
