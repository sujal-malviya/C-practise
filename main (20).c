/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int x;
    int *ptr;
    ptr = &x;//ptr is pointer holds address of x;
    *ptr =0;//says value at x is 0;
    printf(" \nvalue of x is %d",x);
    printf(" \nvalue of *ptr is %d",*ptr);
    *ptr += 5;
    printf(" \nvalue oof x is %d",x);
    printf("\nvalue of *ptr is %d",*ptr);
    (*ptr)++ ;
    printf("\nvalue of x is %d",x);
    printf("\nvalue of *ptr is %d",*ptr);
    return 0;
}//pointer concept;
