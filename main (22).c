/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void dowrk(int a, int b ,int *sum,int *product,int*avg);

int main()
{
    int a= 10;
    int b = 2;
    int sum ,product,avg;
    
    dowrk(a,b,&sum,&product,&avg);
    printf("sum = %d product = %d avg = %d",sum,product,avg);
    return 0;
}
void dowrk(int a, int b ,int *sum,int *product,int*avg)
{
    *sum =a+b;
    *product = a*b;
    *avg = (a+b)/2;
}//operation usingn pointer;
