/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
typedef struct computerengineeringstudent{
    int roll;
    char name[100];
    float marks;
}coe;
int main()
{
    coe s1;
    s1.roll = 44;
    s1.marks = 9.3;
    strcpy(s1.name,"rocky");
    printf("name =%s\n",s1.name);
    printf("roll =%d\n",s1.roll);
    printf("marks = %f\n",s1.marks);
    
    //struct students *ptr = &s1;
    //printf("roll = %d\n",ptr->roll);//using pointer printed structure;
    //printf("name = %s\n",ptr->name);
    //printf("marks =%f\n",ptr->marks);
        return 0;
}
//using typedef ;
//use to create alias(nickname) for datatype;
    

//using structure in function;
