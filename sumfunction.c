#include<stdio.h>
int sum(int a,int b);

int main()
{
    int a,b,s;
    printf("enter");
    scanf("%d %d" , &a,&b);
     
 s = sum(a,b);
    printf("sum is %d ", s);
    return 0; 
}
int sum(int a,int b){
    return a+b;
}