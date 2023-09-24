#include <stdio.h>

void main()
{
   int a,b,c;
   printf(" enter value of a :");
   scanf("%d ",&a);
   printf(" enter value of b :");
   scanf("%d ",&b);
   printf(" enter value of c :");
   scanf("%d ",&c);
   if(a>b)
   {
       if(a>c)
       {
           printf("%d",a);
       }
       else
       {
           printf("%d",c);
       }
   }
   else
   {
       if(b>c)
       {
           printf("%d",b);
          
       }
       else
       {
           printf("%d",c);
       }
   
   }
} 