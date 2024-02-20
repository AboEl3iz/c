#include <stdio.h>
#include <stdlib.h>
float math , physics , chemistry ,computer , bio;
int main()
{
    unsigned int persentage = 0;
    printf("enter the degree of math : \n");
    scanf("%f",&math);
    printf("enter the degree of physics : \n");
    scanf("%f",&physics);
    printf("enter the degree of chemistry : \n");
    scanf("%f",&chemistry);
    printf("enter the degree of computer : \n");
    scanf("%f",&computer);
    printf("enter the degree of bio : \n");
    scanf("%f",&bio);

    persentage = (math + physics + chemistry + computer + bio)/5;
    if(persentage >= 90)
    {
        printf("Grade A");
    }
    else
    {
        if(persentage >= 80)
        {
            printf("Grade B");
        }
        else
        {
            if(persentage >= 70)
            {
                printf("Grade C");
            }
            else
            {
                if(persentage >= 60)
                {
                    printf("Grade D");
                }
                else
                {
                    if(persentage >= 40)
                    {
                        printf("Grade E");
                    }
                    else
                    {
                        printf("Grade F");
                    }
                }
            }
        }
    }


    return 0;
}
