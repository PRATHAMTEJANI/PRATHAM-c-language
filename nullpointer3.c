#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    if(!ptr){
        printf("memory allocated failed");
        exit (0);
    }       
    return 0;
}