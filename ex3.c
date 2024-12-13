#include<stdio.h>
int main()
{ 
    int a, b, c,d,e,f,g,h,i,j;

    printf("enter a 10 number");
    scanf("%d %d %d %d %d %d %d %d %d %d" , &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int smallest = (a < b)? a : b;
    smallest = (smallest < c)? smallest : c;
    smallest = (smallest < d)? smallest : d;
    smallest = (smallest < e)? smallest : e;
    smallest = (smallest < f)? smallest : f;
    smallest = (smallest < g)? smallest : g;
    smallest = (smallest < h)? smallest : h;
    smallest = (smallest < i)? smallest : i;
    smallest = (smallest < j)? smallest : j;
    
    printf("%d" , smallest);
    
}
// find smallest number in  any 10 which is taken by user.[1]