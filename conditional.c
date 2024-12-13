#include<stdio.h>
void main()
{
    // if-else condition in this topic.. 
    char a;
    printf("enter a character");
    scanf("%c" , &a);

    if(a>='A' && a<='Z')
    {
        printf("%c" , a);
        printf("==  UPPERCASE ");

    }
    else{
        printf("LOWERCASE");
    }
}