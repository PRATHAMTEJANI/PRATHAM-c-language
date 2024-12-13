#include<stdio.h>
void main()
{
    int n,i,j , sum =0;
    printf("enter a number");
    scanf("%d" , &n);
    for( i=1 ,j=n;i<=n && j>=1;i++,j--)
    {
        sum=sum + i;
         printf("&d", j);
        

    }
      printf("%d" , sum);

      //for( i=n;i>=1;i--)
      //{
      //  printf("&d", i);
     // }
    // sum =0 -> i = 1 =>>> sum= sum+i>>> 0+1+= {1=sum}over the loop we gate answer.



}
