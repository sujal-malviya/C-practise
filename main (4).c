/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<10;i++){
        if(i%2==0||i%2!=0)
        {
            printf("\nelements of %d : %d\n",i,a[i]);
            
        }
        
    }

    return 0;
}
