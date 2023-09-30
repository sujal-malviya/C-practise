/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
void salting(char oldpass[]);

int main()
{
    char oldpass[100];
    scanf("%s",oldpass);
    salting(oldpass);
    
    return 0;
}
void salting(char oldpass[]){
    char salt[] ="122";
    char newpass[200];
    strcpy(newpass,oldpass);//it will copy old.. into new..;
    strcat(newpass,salt);//it will concate ne.. and salt;
    puts(newpass);//output as newpass;
}
