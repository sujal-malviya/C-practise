#include<stdio.h>
int main(){
    int i;
    int a1[4]={1,2,3,1};
    int a2[4];
    for(i=0;i<4;i++){
        printf("%d",a1[i]);
    }
    for(i=0;i<4;i++){
        a2[i]=a1[i];
    }
    printf("\n \n");
    for(i=0;i<4;i++){
        printf("%d",a2[i]);
    }
}//copy element in another array;