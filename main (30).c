/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the value of n(n>2 :");
    scanf("%d",&n);
    
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
//fibonaacci series---
