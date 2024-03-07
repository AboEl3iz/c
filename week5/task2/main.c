#include <stdio.h>
#include <stdlib.h>
unsigned short weight;
int main()
{
    printf("enter the weight of the watermelon : ");
    scanf("%i",&weight);
    weight /= 2;
    if((weight% 2) == 0){

        printf("YES");
    }else{

        printf("NO");
    }
    return 0;
}
