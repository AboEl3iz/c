#include <stdio.h>
#include <stdlib.h>
float power(float number , unsigned int num_power);
int main()
{
    float num = 0 , result;
    unsigned int powerr = 0;
    printf("enter the number and the power : ");
    scanf("%f %u",&num,&powerr);
    result = power(num,powerr);
    printf("%0.2f power %i = %0.2f",num , powerr ,result);
    return 0;
}
float power(float number , unsigned int num_power)
{
    float res = 1;
    while(num_power)
    {
        res *= number;
        num_power--;
    }
    return res;
}
