/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("\ncharacter is present!");
            return;
        }
    }
    printf("\ncharacter is not present!");
}
    
int main()
{
    char str[100]="radheradhe!";
    checkchar(str,'x');
    
    return 0;
}
//check character is present or not in a string;