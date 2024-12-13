#include<stdio.h>
#include<stdlib.h>
int main()
{
    char string[]= "pratham";
    printf("%s \n" , string);

    int length = 0;
    length = strlen(string);
    printf("length of string is %d \n" , length);

    return 0;
}