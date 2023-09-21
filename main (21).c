/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, a=0,n,b=1,c;
    printf("enter the  value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       c=a+b;
       printf("%5d",c);
       a=b;
       b=c;
       
       
    }printf("\n");

    return 0;
}
