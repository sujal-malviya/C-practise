#include<stdio.h>
int main(){
    int m;
    int *ab;
    m=29;
    ab=&m;
    printf("the value of m is : %u\n",m);
    printf("address of m is : %u\n ",ab);
    m=5;
    printf("the  value of m is : %u\n",m);
    printf("the address of m is : %u",ab);
    m=7;
    printf("the value of m is : %u\n",m);
    printf("the address of m is : %u\n",ab);
    
}