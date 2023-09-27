/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 void printHW(int count);//function declaration;
 
int main()
{
    printHW(5);//function call--
    return 0;
}
//recursive function--
void printHW(int count)//function def...
{
    if(count==0)
    {
        return;
    }
    printf("\nhello world");
    printHW(count-1);
}
