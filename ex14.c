#include<stdio.h>
int reverse(int arr[] , int n);

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    reverse(arr, 9);
    printarr(arr, 5);
    return 0;
}

int reverse(int arr[] , int n){
    for(int i = 0;i <n/2 ; i++){
        int firstvalue = arr[i];
        int secondvalue= arr[n - i - 1];
        arr[i] = secondvalue;
        arr[n - i - 1] = firstvalue;


    }
}