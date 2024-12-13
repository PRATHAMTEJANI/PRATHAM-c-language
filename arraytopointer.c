#include<stdio.h>
int main()
{
   int i =1,j=3;
   int *p=&i;
   int *q=&j;
   p=&i;
   q=&j;
   printf("%d %d" , *p,*q);
   printf(" %d" , *p);
    return 0;
}