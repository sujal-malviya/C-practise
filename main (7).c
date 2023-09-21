#include <stdio.h>

int main()
{
    int i,n,sum =0;
    printf("enter the value of n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
        sum+=2*i-1;
        
    }printf("\nsum of %d natural odd number is %d\n",n,sum);
}
