#include<stdio.h>
int fact(int n);
float converttemp(float cel);

int main(){
    int n;
    printf("enter n");
    scanf("%d" , &n);
    printf("factorial is %d", fact(n));


    printf("------------------------------");

    printf("the ferhnhit is %f", converttemp(1));
    return 0;
}

int fact(int n){
    if(n==0){
        return 1;//base case.dont underestimate.
    }
    int factN=fact(n-1)*n;
    return factN;
    
}

float converttemp(float cel){
 float far = cel*(9/5) + 32;
 return far;

}