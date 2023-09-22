/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i ,k,j;
    for(i=1;i<=5;i++)//it is used for row operation;
    {
        for(j=i;j<5;j++)//it is used for space operation;
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)//it is used for column operation;
        {
            printf("*");//will print asterisk;
        }
        printf("\n");//move to new line;
    }

    return 0;
}
