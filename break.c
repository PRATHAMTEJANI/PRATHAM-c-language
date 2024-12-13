#include<stdio.h>
void main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            continue;//[breack;]
        }
        printf("%d" , i);
    }
}
