/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i ,j,count=1;
    for(i=1;i<=4;i++)//it is used for row operation;
    {
        for(j=1;j<=i;j++)//it is used for space operation;
        {
            printf("%d",count);//count variable is used to increment the value after 1 ;
            ++count;//in each iteration;
        }
    
        printf("\n");//move to new line;
    }

    return 0;//this is program of square of asterisk with space inside it;
}
