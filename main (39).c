/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks;
    scanf("%d ",&marks);
    if(marks>=80)
    {
        printf("student obtain A grade");
        
    }
    else if(marks>=60)
    {
        printf("student obtain B grade ");
    }
    else
    {
        printf("student obtain below B grade ");
    }

    return 0;
}
