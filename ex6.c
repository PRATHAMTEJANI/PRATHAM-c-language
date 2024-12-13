#include<stdio.h>
void main()
{
    int n;
    printf("enter a number you want its table");
    scanf("%d", &n);

    for(int i=0;i<=10;i++)
    {
        printf("%d ",n*i);
      
    }
}