/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i ,j;
    for(i=1;i<=5;i++)//it is used for row operation;
    {
        for(j=1;j<=5;j++)//it is used for space operation;
        {
            if(i==1||i==5||j==1||j==5)//we can use if-else for operation to print asterisk;
            {
                printf("*");
            }
             else
                {
                    printf(" ");//for space also.
                }
        }
    
        printf("\n");//move to new line;
    }

    return 0;//this is program of square of asterisk with space inside it;
}
