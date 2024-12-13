#include<stdio.h>

int countodd(int ary[] , int n);

int main()
{
    int ary[] = {1,5,8,9,6,5,4,5,2,5};
    printf("%d" , countodd(ary , 10 ));
    return 0;
}

int countodd(int ary[] , int n){
    int count =0;
    for(int i =0 ;i<n;i++){
        if(ary[i] % 2 !=0){
            count++;
        }
    }
    return count;
}