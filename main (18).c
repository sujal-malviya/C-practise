/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float convertTemp(float celcius);

int main()
{
    float fah = convertTemp(0);
    printf("temp is %f",fah);
    return 0;
}
float convertTemp(float celcius)
{
    float fah = celcius * (9/5) + 32;
    return fah;
}
//convert fahrenhiet to celcius;