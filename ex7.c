#include<stdio.h>
void main()
{
    int n;
    do{
        printf("enter a number");
        scanf("%d" , &n);
        printf("%d \n " , n);

        if(n % 7 ==0)
        {
             break;
        }

    }while(1);
    printf("Thank you");
}
//take a number from user until user print odd number.[1]
//take a number from user until user print 7 devide number.[2]

