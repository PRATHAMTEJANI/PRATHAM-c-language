#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    char s2[] = "hello world!";

    strcpy(s1,s2);
    printf("s1 after the copy process %s \n" , s1);

    char str1[] = "HELLO MAFIA";
    char str2[] = "pratham";

    int result = strcmp(str1,str2);
    if(result < 0)
    {   
        printf("str1 is less than str2 \n");
    }
    else if(result > 0)
    {
        printf("str 1 is greter than str 2 \n");
    }
    else
    {
        printf("both srting are not equal");
    }

    char p1[] = "hello";
    char p2[] = "pratham";

    strcat(s1 , s2);

    printf("s1 after concatination %s \n" , s1);

    strlwr(str1);//convert uppercase to lower case word.
        printf("string  after strlwr : %s \n" , str1);

    strupr(str2);//convert lower case word to upper case word.
        printf("string  after strupr : %s \n" , str2);   

    char leo1[] = "hello , world";
    char leo2[] = "world";

    char *ansnwer = strstr(leo1 , leo2);
    if(ansnwer != NULL)
    {
        printf("substring found %s \n" , ansnwer);
    }
    else{
        printf("substring  not found. \n");
    }    //dublicate item will be out of programe with the use this function.
    return 0;
}    