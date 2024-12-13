#include<stdio.h>
int main()
{
    //in pointer to pointer.
    /* 
    int **pptr;
    char **pptr;
    float **pptr; */

    //float price =100.00;
    //float *ptr = &price;
    //float **pptr = &ptr;
    /* 
    int i =5;
    int *ptr = &i;
    

    printf("%p \n " , *ptr);
    ptr++;
    printf("%p \n " , *ptr);//int 4 bytes +;
 */
/* 
float price = 100.00;
float *ptr = &price;

printf("%u \n" , ptr);
printf("%u \n " , ptr);

ptr++; 
printf("%u \n" , ptr);  
ptr--;
printf("%u \n" , ptr);      
 */
/* 
char price = '*';
char *ptr = &price;

printf("%u \n" , ptr);
printf("%u \n " , ptr);

ptr++; 
printf("%u \n" , ptr);  
ptr--;
printf("%u \n" , ptr);   */    

/* int age = 22;
int _age = 23;
int *ptr1 = &age;
int *ptr2 = &_age;

printf(" %u \n " , ptr1);
printf(" %u \n " , ptr2);
printf("diffrence %u \n " , ptr2 - ptr1);
ptr2 = &age;
printf("comparison %u \n " , ptr1 == ptr2 );

return 0; */

int arr[10];
int *ptr = &arr[0]; 

for(int i = 0 ; i<10 ; i++){
    printf("%d index = " , i);
    scanf("%d \n " ,&arr[i]);
}
for(int i = 0 ; i<10 ; i++){
    printf("%d index = " , i);
}
}