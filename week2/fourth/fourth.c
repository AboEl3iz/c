#include <stdio.h>
#include <stdbool.h>
int main(){
    unsigned char alp;
    bool check = true;
    printf("enter the character (small) : \n");
    scanf("%c", &alp);
    check = ((alp == 'a') || (alp == 'b') || (alp == 'c') || (alp == 'd') || (alp == 'e') || (alp == 'f') || (alp == 'g') || (alp == 'h') || (alp == 'i') || (alp == 'j') || (alp == 'k') || (alp == 'l') || (alp == 'm') || (alp == 'n') || (alp == 'o') || (alp == 'p') || (alp == 'q') || (alp == 'r') || (alp == 's') || (alp == 't') || (alp == 'u') || (alp == 'v') || (alp == 'w') || (alp == 'x') || (alp == 'y') || (alp == 'z'));
    if(check){
        printf("%c is alphabet", alp);
    }else{
        printf("%c is not alphabet", alp);
    }

    return 0;
}