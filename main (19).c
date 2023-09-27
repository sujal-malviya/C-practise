/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float percentage(float sc,float mth,float sns);

int main()
{
    float sc =98;
    float mth =57;
    float sns =89;
    
    printf("percentage is %f", percentage(sc,mth,sns));
    return 0;
}
float percentage(float sc,float mth,float sns)
{
    float per = ((sc+mth+sns)/3);
    return per;
}
//percentage;