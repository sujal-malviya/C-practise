#include<stdio.h>
int main()
{
    int x = 9;
    int *ptr;
    ptr = &x;
    //%u is unsigned int datatype;
    printf("address of ptr = %u",ptr);//old memory;
    ptr++;//datatype size will be added into address;
    printf("\naddress of ptr = %u",ptr);//neew memory;
    ptr--;//pointer decrement;
    printf("\naddress of ptr = %u",ptr);//size decreased by 4 byte ;
    return 0;
}//in pointer only we can do increment and decrement;