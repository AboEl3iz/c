#include <stdio.h>
int main(){
    unsigned int num1, num2, num3;
    printf("enter 3 numbers : \n");
    scanf("%u %u %u", &num1, &num2, &num3);
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            printf("%u is the maximum", num1);
        }
        else
        {
            printf("%u is the maximum", num3);
        }
    }else //num2 > num1
    {
        if (num2 >= num3)
        {
            printf("%u is the maximum", num2);
        }
        else
        {
            printf("%u is the maximum", num3);
        }

    }
    









    return 0;
}