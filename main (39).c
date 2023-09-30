/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
void strslice(char str[],int n, int m);
int main()
{
    char str[100]="radheradhe!";
    strslice(str,3,7);
    
    return 0;
}
void strslice(char str[],int n,int m){//from n&m it will take that letters and print that;
    char newstr[100];
    int j =0;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}
//string slicing;