#include<stdio.h>
int main()
{
    //if  sunday and snowing than show 1(true)
    int sunday =0;
    int snowing =1;
    printf("%d" , sunday && snowing);

    int monday = 0;
    int raining =1;

    printf("%d" , monday || raining);

    int num;
    printf("enter a number");
    scanf("%d" , &num);

    printf("%d" , num > 9 && num <100);
    printf("ready");


}