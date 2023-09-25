/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()//input number get reverse number;
{
    int a1[5],a2[5],i,n;
    printf("enter the value :");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        printf("\nelement is ");
        scanf("%d ",&a1[i]);//input array elements;
    }
    /* for copying one array into other ;*/
    for(i=0;i<n;i++)
    {
        a2[i]=a1[i];//assigning value to other array;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a2[i]);//printing second array;
        
    }

    return 0;
}
