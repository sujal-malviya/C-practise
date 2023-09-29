/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printname(char a[]);
int coutnLenght(char a[]);

int main()
{
    char name[100];
    fgets(name,100,stdin);
    printf("lenght is %d",coutnLenght(name));
    
    return 0;
}
int coutnLenght(char a[]){
    int count=0;
    for(int i=0;a[i]!='\0';i++){
        count++;
    }
    return count;
}
void printname(char a[]){
    for(int i=0;a[i]!='\0';i++){
        printf("%c",a[i]);
        
    }
    printf("\n");
}//find lenght of string;