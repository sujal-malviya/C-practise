/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
    
    char K[]="Radhe";
    char R[]="krishna";
    int lenght = strlen(K);
    int lenght1 = strlen(R);
    printf("lenght of string 1 :%d",lenght);//to find lenght of string;
    printf("\nlenght of string 2 : %d\n",lenght1);
    
    strcpy(K,R);
    puts(K);//copy one string to another;
    
    
    printf("d",strcmp(K,R));//it will compare two strings ;
    //subtract aski value ;
    
    //strcat(K,R); it will combine or concate two strings ;
    //puts(K);

    
    return 0;
}
