#include<stdio.h>

void minmax(int arr[] , int len , int *min , int *max)
{
    *min=*max=arr[0];
    int i;
    for(i=1;i<len;i++);//HERE LEN IS USED TO  DO FINAL GOTO VALUE.
    {
        if(arr[i]>arr[0])
        {
            *max = arr[i];
        }
        if(arr[i]<arr[0])
        {
            *min = arr[i];
        }
    }

}

int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90}; 
    int min,max;
    int len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);
    printf("maximum value is %d and minimun value is %d" , min,max);
    return 0;
}