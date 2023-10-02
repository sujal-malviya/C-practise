/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("time.txt","r");//here r tells about read func. and it should be in double coutes;
    //read and write are operation that are perform in file;
    fclose(fptr);

    return 0;
}
