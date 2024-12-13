#include<stdio.h>

void swap(int a , int b);
void address(int n);

int main()
{
    int x =3 /*a*/, y = 4 /*b*/;
    swap(x , y); 
    printf("%d %d  \n " , x ,y );

     int n = 4;
    printf("%p \n " , &n);
    address(n);
    return 0;
}

void swap(int a , int b){           // if a=5//b=4 ..t=5. a =4. b=5..
    int t = a;
    a = b;
    b = t;
    printf(" a = %d \n b = %d \n ",a,b );   
}

void address(int n){
    printf("%p \n" , &n );
}