#include<stdio.h>
#define MAX 50

int main()
{
    char str[MAX];
    fgets(str , MAX,stdin);
    printf("string  is : \n");
    puts(str);
        /* scanf("%s \n " , str);//read a string.  
        printf("%s " ,str);//display the string. */
        return 0;
}