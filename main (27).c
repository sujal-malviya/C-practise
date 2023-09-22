/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char i ,j,count='A';
    for(i='A';i<='E';i++)//it is used for row operation;
    {
        for(j='A';j<=i;j++)//it is used for space operation;
        {
            printf("%c",count);//count variable is used to increment the value after 1 by one;
            ++count;//in each iteration;
        }
    
        printf("\n");//move to new line;
    }

    return 0;//this is program of square of asterisk with space inside it;
}
