#include<stdio.h>
int main()
{
    int *ptr = NULL;
    if(ptr == NULL)
    {
        printf("pointer does not print anytrhing");
    }
    else{
        printf("a value of pointer is %d" , *ptr);
    }
    return 0;
}