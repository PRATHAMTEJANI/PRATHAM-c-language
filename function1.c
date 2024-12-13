#include<stdio.h>
void indian();
void french();

void indian()
{
    printf("namaste");
  
}
void french()
{
    printf("bonjour");
}

int main()
{
    printf("enter f for french & i for indian");
    char ch;
    scanf("%c" , &ch);

    if(ch == 'f')
    {
       indian();

    }
    else{
        french();
    }
    return 0;
}
//code is okay! check online  gdb.