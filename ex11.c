#include<stdio.h>
int main()
{
    float price[3];
    printf("enter a value");
    for(int i=0;i<3;i++){
     scanf("%f" , &price[i]);
    }

    for(int i=0;i<3;i++){
    float pricewithgst = price[i] + (.18 * price[i]);
    printf("%f \n " , pricewithgst);
    }

    return 0;
} //int 4 byte.=12 bytes in this code.