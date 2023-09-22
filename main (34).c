/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,count=1;
    for(i=1;i<=5;i++)//outer loop,row operation; 
    {
        for(j=5;j>i;j--)//inner loop,left-side spaces covering;
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)//inner loop,*,middle space + right side spaces;
    {
        printf("%d ",count);
        count++;
    }
    printf("\n");//new line;
    }
    return 0;
}
