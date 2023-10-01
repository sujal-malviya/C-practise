/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct students{
    int roll;
    char name[100];
    float marks;
};

void printinfo(struct students s1);
int main()
{
    struct students s1 ={122,"rocky",9.2};
    //printf("roll =%d\n",s1.roll);
    //strcpy(name,"rocky");
    //printf("name =%s\n",s1.name);
    //printf("marks = %f\n",s1.marks);
    printinfo(s1);
    
    //struct students *ptr = &s1;
    //printf("roll = %d\n",ptr->roll);//using pointer printed structure;
    //printf("name = %s\n",ptr->name);
    //printf("marks =%f\n",ptr->marks);
        return 0;
}
void printinfo(struct students s1){
    printf("roll =%d\n",s1.roll);
    printf("name =%s\n",s1.name);
    printf("marks = %f\n",s1.marks);
    
}
//using structure in function;
