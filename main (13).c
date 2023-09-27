/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void namaste();//function declaration or function prototype;
void bonjour();
int main()
{
    printf("enter i for indian and f for french :");
    char ch ;
    scanf("%c ",&ch);
    if(ch=='i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}
void namaste()//function defination;
{
    printf("namaste!\n");
}
void bonjour(){
    printf("bonjour!\n");
}
//function to print hello and goodbye;