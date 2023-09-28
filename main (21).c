/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr;
    int **pptr;
    ptr = &x;
    pptr =&ptr;
    printf("\nvalue of x is %d",x);//will print value of x;
    printf("\nvalue of *ptr is %d",*ptr);//will print value of x with help of address of x;
    printf("\nvalue of **pptr is %d",**pptr);//will print value of x by pointing to pointer 1 thann poin to x's address;
    return 0;
}//pointer to pointer concept;
