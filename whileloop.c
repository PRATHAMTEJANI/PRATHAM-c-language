#include<stdio.h>
void main()
{
    int a;
    printf("enter a number");
    scanf("%d" , &a);

    int i=0;
    while(i<=a)
    {
        printf("%d",i);
       i++;
    }

}