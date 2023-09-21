/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float i, sum=0,n,t=1;
    printf("enter the  value of n:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        printf("%f ",t*1/i); 
        sum+=t*1/i;
    }printf("\nsum of %f series is %f\n",n,sum);

    return 0;
}
