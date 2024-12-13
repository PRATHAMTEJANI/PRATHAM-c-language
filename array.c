#include<stdio.h>
int main()
{
    int array[3];
    printf("enter");
    scanf("%d %d %d" , &array[0] ,&array[1] , &array[3] );
    printf("%d %d %d" , array[0] ,array[1] , array[3]);
    return 0;
}