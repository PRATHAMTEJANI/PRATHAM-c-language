#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("enter a number you want armstrong");
    scanf("%d" , &num);

    printf("type  digit as per above numbers");
    int d1,d2,d3,sum;
    printf("enter a three digit number");
    scanf("%d %d %d" , &d1,&d2,&d3);

    sum = (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);

    if(num=sum)
    {
        printf("the number is armstrong");
        
    }
    else{
        printf("the number is note armstrong");
    }

    }