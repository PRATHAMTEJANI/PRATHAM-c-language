#include<stdio.h>
#include<string.h>
int main()
{
    char arr[3][10] = {"hello" , "pratham" , "tejani"};
    printf("string elements are is :\n");
    for(int i = 0 ; i< 3;i++)
    {
        printf("%s \n " , arr[i]); 
        /* for(int j = 0 ;j<3;j++)
        {
             printf("%s \n " , arr[i]); 
        } */
       
    }
    return 0;
}