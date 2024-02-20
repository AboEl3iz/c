#include <stdio.h>
#include <stdlib.h>
unsigned char alp;
int main()
{
    unsigned short test = 0;

    printf("enter the alphabet : ");
    scanf("%c",&alp);
    test = (((alp == 'a')||(alp == 'A')) || ((alp == 'e')||(alp == 'E'))||((alp == 'i')||(alp == 'I'))||((alp == 'o')||(alp == 'O'))||((alp == 'u')||(alp == 'U')));
    if(test)
    {
        printf("%C is vowel",alp);
    }
    else
    {
        printf("%C is consonant",alp);
    }













    return 0;
}
