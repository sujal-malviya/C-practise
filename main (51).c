#include <stdio.h>
void main()
{
   int hieght;
   
   printf("hieght of person in cm :");
   scanf("%d",&hieght);
   if(hieght>150){
       printf("person is tall");
   }
   else if(hieght<150){
       printf("person is short");
   }
   else
   {
       printf("person is medium");
   }
}//hieght distribution form if else;