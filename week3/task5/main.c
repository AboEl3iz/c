#include <stdio.h>
#include <stdlib.h>
unsigned int num = 100;
int main()
{
    unsigned short counter = 0;
    while(num)
    {

        printf("%i",(2*counter));
        counter++;
        num--;
    }
    return 0;
}
