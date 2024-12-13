#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid=finalmid(a,n);
    printf("%d",*mid);
    return 0; 
}

int *findmid(int a[] , int n)
{
    return &a[n/2];
}//output =3//