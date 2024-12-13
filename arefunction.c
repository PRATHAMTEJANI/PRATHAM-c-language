#include<stdio.h>
float square(float side);
float rectangle(float a,float b);//declaration.
float circle(float rad);

int main(){  //statements.
    char ch,s,R;
    float side;
    printf("s=square//R=rectangle//C=circle");
    scanf("%c" , &ch);

    if(ch==s){
       
        printf("enter a amount");
        scanf("%f" , &side);
        printf("the size is %f",square(side));
    }
    else if(ch==R){
        float a=4,b=2;
        printf("area is %f",rectangle(a,b));
       
    }
    return 0;
}

float square(float side){//prototype.
    return side * side;
}

float rectangle(float a,float b){
    return a*b;
}

float circle(float rad){
    return 3.14* rad * rad;
}