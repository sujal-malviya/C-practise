/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()//input number get reverse number;
{
    int a[5],i,j,n,count=0;
    printf("enter the value :");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        printf("\nelement is ");
        scanf("%d ",&a[i]);//input array elements;
    }
    /* for copying one array into other ;*/
        for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        a[i]==a[j];
        count++;
        break;
        
    }
    printf("duplicate elmennt is %d",count);//duplicate elemnts;

    return 0;
}
