#include <stdio.h>
int main(){
    unsigned int angle1, angle2;
    printf("enter 2 angles : \n");
    scanf("%u %u", &angle1, &angle2);
    if ((angle1 + angle2) >= 180)
    {
        printf("invalid angles");
    }else{
        printf("the third angle is %u", (180 - (angle1 + angle2)));

    }
    
    
    return 0;
}