/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char i ,j;//it will print by the help of aski value ;
    //aski value of a is 65 and of e is 69 by the help of that output came;
    for(i=65;i<=69;i++)//it is used for row operation;
    {
        for(j=65;j<=i;j++)//it is used for space operation;
        {
            printf("%c",i);//count variable is used to increment the value after 1 by one;
            
        }
    
        printf("\n");//move to new line;
    }

    return 0;//this is program of square of asterisk with space inside it;
}
