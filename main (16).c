/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int n);

int main()
{
    printf("sum is %d ",sum(10));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int smn1=sum(n-1);//sum from 1 to n-1;
    int smn2 =smn1+n;
    return smn2;
}
//sum of n natural number using recursion;