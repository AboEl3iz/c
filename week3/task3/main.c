#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char op;
    float num1 ,num2;
    printf("enter two numbers and the operator :");
    scanf("%f %f %c",&num1 , &num2 , &op);
    switch(op)
    {
        case '+':
        printf("%0.2f + %0.2f = %0.2f",num1,num2,(num1+num2));
        break;
        case '-':
        printf("%0.2f - %0.2f = %0.2f",num1,num2,(num1-num2));
        break;
        case '*':
        printf("%0.2f * %0.2f = %0.2f",num1,num2,(num1*num2));
        break;
        case '/':
        printf("%0.2f / %0.2f = %0.2f",num1,num2,(num1/num2));
        break;
        default :
            printf("invalid operator??");
    }














    return 0;
}
