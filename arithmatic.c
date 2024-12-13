#include<stdio.h>
int main()
{
    printf("%d \n" , 3* 5 + 8 - 5);
    printf("%d \n" , 3 * 5 / 8 * 9);// left -> right.
    printf("%d \n" , 5 * 2 - 2 *3);
    printf("%d \n" , 5 * 2 / 2 * 3);
    printf("%d \n",  4 <= 43);
    printf("%d \n " , !(3>2 && 4<3));
    printf("%d \n " , 3<4|| 1<.5);
    printf("%d \n " , 8^9);

    int a=4,b=5;
    a-=b;
    printf("%d" , a);  
}
// * , / , % -> itz on priority precedence.[1]
// + , - -> second priority presedence.[2]
// = -> third precedence.[3] 
// LOGICAL OPERATOR = [&& // || // !]
