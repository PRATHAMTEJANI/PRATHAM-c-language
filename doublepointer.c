#include<stdio.h>
int main()
{
    int var = 5;
    int *ptr;
    int **ptr1;

    ptr = &var;
    ptr1 = &ptr;

    printf("%d \n",var);
    printf("%d \n",*ptr);
    printf("%d \n",**ptr1);

    printf("%p \n",ptr);
    printf("%p \n",ptr1);

    printf("for only size z:%d \n",sizeof(ptr));
    printf("for only size z:%d \n",sizeof(ptr1));

}