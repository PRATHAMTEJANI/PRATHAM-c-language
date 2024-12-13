#include <stdio.h>
void printaddress(int *n);

int main()
{
    int *n = 4;
    printf("%p \n ", &(*n));
    printaddress(n);
    return 0;
}

void printaddress(int *n)
{
    printf("%p \n ", &(*n)); // it can be print the address = use of non-* || but use = * itcan be print the value
}
// 0061FF1C //both are diffrent check in ruff draft.
// 0061FF00