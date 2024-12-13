#include<stdio.h>
//sum of first n natural number.
//sum(n-1)+n;

int  sum(int n);

int main(){
printf("sum is %d", sum(5));
return 0;

}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumN = sum(n-1) + n;
    
}
/*
sum 5 |=15               [call by it self or called as in team call.]
sum 4 +5|=15
sum 3 +4|=10
sum 2+ 3|=6
sum 1+2|=3
1 
*/

