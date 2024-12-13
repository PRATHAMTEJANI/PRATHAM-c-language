#include<stdio.h>
int main()
{
    int var =10;
    int *ptr = &var;
    int **ptr1 = &ptr;
    int ***ptr2 = &ptr1;

    printf("BEFORE  :- \n");
    printf("value of var = %d\n" , var);
    printf("value of var using level 1  pointer = %d\n" , *ptr);
    printf("value of var using level 2  pointer = %d\n" , **ptr1);
    printf("value of var using level 3  pointer = %d\n" , ***ptr2);
    
    *ptr = 35;   //var = 35,*ptr = 35,**ptr1=35,***ptr2=35
    printf("AFTER  :- \n");
    printf("value of var = %d\n" , var);
    printf("value of var using level 1  pointer = %d\n" , *ptr);
    printf("value of var using level 2  pointer = %d\n" , **ptr1);
    printf("value of var using level 3  pointer = %d\n" , ***ptr2);
    
    return 0;
}