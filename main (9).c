/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 2, 3, 3};
int n = sizeof(arr) / sizeof(arr[0]);//n=5;
int x = 2;
int count = 0;

for (int i = 0; i < n; i++) {
    if (arr[i] == x) {//condition will be check;
        count++;//will count no. of duplicate element;
    }
}

printf("The element %d appears %d times in the array.", x, count);


    return 0;
}
