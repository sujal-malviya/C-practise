/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[4];
    int i,max;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    max = 0;
    for(i=0;i<4;i++){
       if(max<a[i]){
           max=a[i];
       } 
    }
    printf("maximum value : %d",max);
    return 0;
}
// find max of array;