#include<stdio.h>
/*  int main()

    int age = 22;
    int *ptr = &age;
    printf("%p \n" , &age);
      printf("%p" , ptr);

      //value.

      printf("%d" , age);
      printf("%d" , *ptr);
      printf("%d" , *(&age)); */
     
    /*  int x;
     int *ptr;

     ptr = &x;
     *ptr = 0;    

     printf("%d \n" , x);
     printf("%d" ,ptr );

     *ptr += 5; 

      printf("%d \n" , x);
     printf("%d" ,ptr );
   
     (*ptr) ++;

      printf("%d \n" , x);
     printf("%d" ,ptr ); */

    /*  float price = 100;
     float *ptr = &price;
     float **pptr = &ptr;
 */

       /* int i =5;
       int *ptr = &i;
       int **pptr = &ptr;
       printf("%d" , **pptr);  */

     
    void square(int n);     
  /*   void _square(int* n); */
    void printaddress(int n);

    int main()
    {
        square(5);
      /*   _square(10); */

        int n =4;
        printf("%p \n " , &n);
        return 0;
    }
    // call by value.
    void square(int n){
        n = n*n;
        printf("%d" , n);

    }
/* 
    void _square(int* n ){
        *n = (*n) * (*n);
        printf("%d" , *n);
    }  */

    void printaddress(int n){
        printf("%p \n " , &n);
    return 0;
    }
    
