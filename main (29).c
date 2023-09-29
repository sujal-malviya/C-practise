/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int reversearr(int arr[],int n);//for reverse number;
void printarr(int arr[],int n);//for printing arrray;
int main()
{
    int arr[]={1,2,3,4,5,6};
    reversearr(arr,6);
    printarr(arr,6);
    return 0;
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int reversearr(int arr[],int n)
{
    for (int i=0;i<n/2;i++)
    {
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i]= secondval;
        arr[n-i-1] = firstval;
    }
}

