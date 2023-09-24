/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int days=1329,weeks,years;
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("years:%d\n",years);
    printf("weeks:%d\n",weeks);
    printf("days:%d\n",days);
    return 0;
}
