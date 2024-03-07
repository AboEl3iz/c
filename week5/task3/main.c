#include <stdio.h>
#include <stdlib.h>
unsigned int num_problems;
unsigned int num1,num2,num3 ,views;

int main()
{
    printf("enter the number of problems : ");
    scanf("%i",&num_problems);
    while(num_problems--){
        scanf("%i %i %i",&num1,&num2 , &num3);
        printf("\n");
        if((num1+num2+num3)>=2){
            views++;
        }
    }
    printf("%i",views);






    return 0;
}
