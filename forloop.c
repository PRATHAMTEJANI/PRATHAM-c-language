#include<stdio.h>
void main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("hello pratham \n");
    }
    int a=1;

    printf("%d" , a++);
    printf("%d \n " , a);

    int b=2;
    printf("%d" , b--);
    printf("%d \n " , b);

    int c=1;
    printf("%d" , ++c);
    printf("%d \n " , c);

    printf("--------------------------------------------------------------------------------------------- \n ");

    for(float p=1.00;p<10;p++)
    {
           printf("%f \n " , p);
   
    }
    printf("--------------------------------------------------------------------------------------------- \n ");
    
    for(char ch='a';ch<='z';ch++)
    {
        printf("%c",ch);
    }


}
//for(initialisation;condition;updation)