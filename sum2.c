#include<stdio.h>
#define pi 3.142
void main()
{
   float radius;
   printf("enter a radius");
   scanf("%f" , &radius);

   printf("the area is %f", pi*radius*radius);
}