#include<stdio.h>
int sum(int a , int b)
{
    return a + b;

}
int main()
{
    int a,b;
    printf("enter a two addition value");
    scanf("%d %d" , &a,&b);
    int add = sum(a,b);
    printf("%d %d" , add);

    return 0; 
}