/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("%d",*arr+2);//it is giving value of arr at 2nd index;
    printf("\n%d",*arr+5);//it is giving value of arr at 5th index;
    printf("\n%d",*arr+9);//the 6th index dosen't exist so it will give us error.

    return 0;
}

