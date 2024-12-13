#include<stdio.h>
#include<stdlib.h>
int main()
{
   
        int i , n;
        printf("enter a element to ");
        scanf("%d" , &n);
        printf("Entered element is this %d" , n);

        int *ptr =(int *)malloc(n * sizeof(int));

        if(ptr == NULL)
        {
            printf("memory are not inserted");
            exit(0);
        }
        else{
            printf("memory are succesfully allocated using malloc \n");
            for(i =0;i<n;++i)
            {
                ptr[i] = i + 1;
            }
            printf("the elemets of the array are :");
              for(i =0;i<n;++i)
            {
                printf("%d" , ptr[i]);
            }
        }
        return 0;
}

//A memory are allocated in 1-D array.