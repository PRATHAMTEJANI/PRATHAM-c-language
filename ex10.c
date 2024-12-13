#include<stdio.h>

void printReverse(int arr[], int size);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array in reverse order: "); 
    printReverse(arr, size);
    printf("\n");

    return 0;
}

void printReverse(int arr[], int size){
    for(int i = size - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
}