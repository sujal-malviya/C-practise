/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, sum=0,n;
    printf("enter the  value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("%d\t",i*i);
       sum+=i*i;
       
    }printf("\nsquare of %d integers is %d\n ",n,sum);

    return 0;
}
