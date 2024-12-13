#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,n,i,j;

    printf("enter a number row and col");
    scanf("%d %d",&row,&col);

    int **array = (int **)malloc(row * sizeof(int *));

    for(i =0;i< row ;i++)
    {
        array[i] = (int *)malloc(col * sizeof(int));
    }
    if(array == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }
    for(i = 0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }
     for(i = 0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d" , array[i][j]);

        }
        printf("\n");
    }

    for(i = 0;i<row;i++)
    {
        free(array[i]);
    }
    free(array);
    return 0;
}
//the 2-D array allocation.
//see on screenshort in this. array[i][j] = (i + 1) * (j + 1);
//depends on ROW and COLUMN