/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
typedef struct address{
    int houseno;
    char city[100];
    int block;
    char state[100];
}adr;
void printadd(struct address adr);
int main()
{
    adr a1;
    a1.houseno = 44;
    a1.block =150;
    printf("houseno = %d\n",a1.houseno);
    printf("block =%d\n",a1.block);
    strcpy(a1.city,"indore");
    printf("ciy =%s\n",a1.city);
    strcpy(a1.state,"madhya pradesh");
    printf("state =%s\n",a1.state);
    printadd(a1);
    
    //struct students *ptr = &s1;
    //printf("roll = %d\n",ptr->roll);//using pointer printed structure;
    //printf("name = %s\n",ptr->name);
    //printf("marks =%f\n",ptr->marks);
        return 0;
}
//using typedef ;
//use to create alias(nickname) for datatype;//using structure in function;
void printadd(struct address adr){
    printf("%d %s %d %s",adr.houseno,adr.city,adr.block,adr.state);
}
//structure in which data store in form of array;