#include <stdio.h>
//integer data types
unsigned char va_1 = 'a';
signed char va_2 = 99;
unsigned int va_3 = 55;
signed int va_4 = 77;
unsigned short va_5 = 88;
signed short va_6 = 15;
unsigned long va_7 = 200;
signed long va_8 = 1000;
unsigned long long va_9 = 500;
signed long long va_10 = 8000;
//floating point types
float va_11 = 18.56478;
double va_12 = 200.9874512;
long double va_13 = 115427.512;

int main(){
        printf("the value of va_1 is : %c \n",va_1);
        printf("the value of va_2 is : %c \n",va_2);
        printf("the value of va_3 is : %u \n",va_3);
        printf("the value of va_4 is : %i \n",va_4);
        printf("the value of va_5 is : %d \n",va_5);
        printf("the value of va_6 is : %d \n",va_6);
        printf("the value of va_7 is : %ld \n",va_7);
        printf("the value of va_8 is : %ld \n",va_8);
        printf("the value of va_9 is : %llu \n",va_9);
        printf("the value of va_10 is : %lld \n",va_10);
        printf("the value of va_11 is : %f \n",va_11);
        printf("the value of va_12 is : %lf \n",va_12);
        printf("the value of va_13 is : %Lf \n",va_13);







    return 0;
}