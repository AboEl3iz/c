#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x) (x * x)
int main()
{
    unsigned short my_num = 0;
    printf("enter the number : ");
    scanf("%i",&my_num);
    printf("the square of %i is %i",my_num,SQUARE(my_num));
    return 0;
}
