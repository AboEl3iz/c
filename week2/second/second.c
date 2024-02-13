#include <stdio.h>
int main(){
    unsigned int num1, num2, num3 , max;
    printf("enter 3 numbers : \n");
    scanf("%u %u %u", &num1, &num2, &num3);
    max = (num1 >= num2) ? ((num1 >= num3) ? (num1) : (num3)) : ((num2 >= num3) ? (num2) : (num3));
    printf("%u is maximum",max);
    return 0;
}