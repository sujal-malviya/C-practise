/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()//input number get reverse number;
{
    int a[10],i,num,r=0,n;
    printf("enter teh value :");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        printf("\nelement is ");
        scanf("%d ",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
