#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "pratham";
    char str2[] = "tejani";

    printf("str 1 : = %s" , str1);
    printf("before concatating string %d" , strlen(str1));
    strcat(str1,str2);
    printf("str 1 = %s" , str1);
    return 0;
}