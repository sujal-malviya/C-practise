#include <stdio.h>
void main()
{
   int i,j,n,k=1;
   printf("Input n : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",k++);
	printf("\n");
   }
}