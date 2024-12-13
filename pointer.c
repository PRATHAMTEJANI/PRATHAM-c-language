#include<stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;

    printf
    ("%d" , _age);

    //pointer's formate specifier. and its address.

    printf
("%p \n " , &age);
  printf
("%u \n " , &age);//unsigned int.
printf("%p \n " , ptr);
printf("%p \n " , &ptr);


    printf
("%d \n " , *(&age));

*ptr += 5;
printf("%d \n " , *ptr);
(*ptr)++;
printf("%d \n " , *ptr );
    return 0;
}