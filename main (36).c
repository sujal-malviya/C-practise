/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//tribonaaci series - in this sum of 3 value will give output value;
int main()
{
    int i,n,a=0,b=1,c=2,d;
    printf("input terms :");
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);// value of a will be print.
        d=a+b+c;//in c value will be store of add operation.
        a=b;//a will take value of b;
        b=c;//b will take value of c;
        c=d;
    }
    return 0;//in output c will be a+b;
}
