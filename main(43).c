#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2];//represents row in one square bracket and column in other square bracket;
    printf("Array elements :");
    for(i=0;i<2;i++)//rows;
    {
        for(j=0;j<2;j++)//columns;
        {
            scanf("%d ",&a[i][j]);
        }
    
    }
    printf("Matrix elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    return 0;
}