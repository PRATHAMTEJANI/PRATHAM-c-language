#include<stdio.h>
int main(){
   
int age = 22;
int _age = 23;
int *ptr = &age;
int *_ptr = &_age;

printf(" %u %u diffrence = %u",ptr , _ptr, ptr - _ptr);
_ptr = &age;
printf(" comparison = %u", ptr == _ptr);

return 0;
}// done   //  6422292 6422288 diffrence = 1 comparison = 1
//in pointer diifrence the data typr should be same otherwise its note work. 
//array is a pointer