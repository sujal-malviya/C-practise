/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void storetable(int a[][10], int n , int m ,int number);
int main()
{
    int tables[2][10];
    storetable(tables,0,10,2);
    storetable(tables,1,10,3);
    
    for(int i=0;i<10;i++){
        printf("%d\t",tables[0][i]);
    }
    for(int i=0;i<10;i++){
        printf("%d\t",tables[1][i]);
    }
    return 0;
}
void storetable(int a[][10], int n , int m ,int number)
{
    for(int i=0;i<m;i++){
        a[n][i]=number*(i+1);
    }
}
//printing table using multidimensional array;