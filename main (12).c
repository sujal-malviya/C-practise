/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printhello();//function declaration or function prototype;
void goodbye();
int main()
{
    printhello();//function call;
    goodbye();
    return 0;
}
void printhello()//function defination;
{
    printf("hello!\n");
}
void goodbye(){
    printf("goodbye!\n");
}
//function to print hello and goodbye;