/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("value of a is ");
    scanf("%d",&a);
    if(a%4==0 && a%400==0 || a%100!=0){
        printf("year is leap year");
    }
    else{
        printf("year  is not leap year");
    }
    return 0;
}
//leap year concept;