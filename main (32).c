/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printstr(char a[]);
int main()
{
    
    char firstname[]="sujal";
    char lastname[]="malviya";
    
    printstr(firstname);
    printstr(lastname);
    return 0;
}
void printstr(char a[]){
    for(int i=0;a[i]!='\0' ;i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
}//print string with the help of function;