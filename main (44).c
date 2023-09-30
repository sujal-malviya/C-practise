/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
//user defined function;
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll =1667;
    s1.cgpa = 9.2;
    strcpy(s1.name,"rocky");
    printf("students name = %s\n",s1.name);
    printf("students cgpa = %f\n",s1.cgpa);
    printf("students roll = %d\n",s1.roll);
    

    return 0;
}
//structure of student;
