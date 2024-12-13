#include<stdio.h>
//fibonacci=0 1 1 2 3 5 8 13 21 34 55 99 134......//
int fibo(int n);

int main(){
    printf("the series is %d" , fibo(5));
    return 0;
}

int fibo(int n){
    if(n==0)
    {
        return 0;
    }
    if(n ==1){
        return 1;
    }
    int fiboM = fibo(n -1);
    int fiboL = fibo(n -2);
    int fiboN = fiboM + fiboL;
    return fiboN;
}