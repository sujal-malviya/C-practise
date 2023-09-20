/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i,n,sum=0,average;
    printf("value of n is :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
        average=sum/n;
    }
    printf("\nsum of %d number is :%d\n",n,sum);
    printf("\naverage is %d\n:",average);
}
