#include <stdio.h>
void main()
{
   int a,b,c;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    printf("enter the value of c : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is greater");
        }
        else{
            printf("c is greater");
        }
    }
    else if(b>c && b>a)
    {
        printf("b is greater");
    }
    else{
        printf("c is always greater");
    }
}
//finding largest from 3 of them;