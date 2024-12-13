#include<stdio.h>
void sum(int x,int y);
void product(int x,int y);
void average(int x,int y); 

int main()
{
    int a=4,b=5;
    sum(a,b);
    product(a,b);
    average(a,b);
    return 0;
}

void sum(int x , int y){
    int s = x + y;
    printf("%d \n " , s);
}

void product(int x , int y){
    int p=x*y;
    printf("%d \n " , p);
}

void average(int x,int y){
    float avg=(x+y)/2;
    printf("%f" , avg);}