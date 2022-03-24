#include<stdio.h>
    void swap(int *num1,int *num2)
    {
        int temp=*num1;
            *num1=*num2;
            *num2=temp;

        
    }
    void main(){
   int s,t ;
   printf("enter value");
   scanf("%d%d",&s,&t);
   swap(&s,&t);
   printf("%d %d",s,t);
    }
