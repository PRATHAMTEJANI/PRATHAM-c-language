#include<stdio.h>
int main()
{
   int a = 76;
   int *ptr = NULL;
   printf("the address of pointer is %p \n " , &ptr);
   printf("the address of a is %p \n " , &a);
   printf("the address of a is %p \n " , &ptr);
   printf("the address of a is %d \n " , ptr);
   printf("the value of a %d\n" ,*ptr);
   printf("the valuer id %d\n" , a);
   int i =20;
   int *p=&i;
   printf("%p" ,p );
   
     return 0;
}