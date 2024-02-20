#include <stdio.h>
#include <stdlib.h>
void test_odd_even(unsigned int num);
int main()
{
    unsigned int number = 0;
    printf("enter the number to test : ");
    scanf("%i",&number);
    test_odd_even(number);
    return 0;
}
void test_odd_even(unsigned int num)
{
    if(num%2 == 0)
    {
        printf("%i is even",num);
    }
    else
    {
        printf("%i is odd",num);
    }

}

