/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()//input number get reverse number;
{
    int a[10],i,n,sum=0;
    printf("enter the value :");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        printf("\nelement is ");
        scanf("%d ",&a[i]);//input array elements;
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        printf("%d ",a[i]);//print array;
    }printf("\nsum of array is %d ",sum);//sum of array;

    return 0;
}
