/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int power(int a,int b);
int main()
{
    int a,b;
    printf(" value of a :");
    scanf("%d",&a);
    printf("value of  b :");
    scanf("%d",&b);
    
    int s =power(a,b);
    printf("\npower is %d ",s);
    
    return 0;
}
int power(int x,int y){
    return x*y;
}
