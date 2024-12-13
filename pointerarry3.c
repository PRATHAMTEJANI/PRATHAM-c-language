#include<stdio.h>

void printnumbers(int array[] , int n);

int main(){
int arr[] = { 2,1,5,8,4,9,6,5,8,7,4,5};
printnumbers(arr ,12 );
return 0;
}

void printnumbers(int array[] , int n)
{
    for(int i =0 ; i<n ; i++){
        printf("%d \t " , array[i]);
    }
    printf("\n ");
}
//2        1       5       8       4       9       6       5       8       7       4       5       
