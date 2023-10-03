#include <stdio.h>
void main()
{
   int a,b;
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b :");
    scanf("%d",&b);
    if(a>0 && b>0){
        printf("points are in first quad ");
    }
    else if(a<0 && b>0){
        printf("points are in second quad");
        
    }
    else if (a<0 && b<0){
        printf("points are in third quad");
    }
    else
    {
        printf("points are in fourth quad");
    }
}
//on the basis of points determing quadrants;