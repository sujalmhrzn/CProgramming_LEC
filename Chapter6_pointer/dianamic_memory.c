//sum of numbers in dianamic memory using malloc()
#include<stdio.h>
#include<stdlib.h>
 
 void main(){
     int *ptr,number,sum=0,i;
     printf("enter the size of numbers:");
     scanf("%d",&number);
     ptr=(int*)malloc(number*sizeof(int));

     for(i=0;i<number;i++)
     {
         printf("\nenter the numbers for  addition");
         scanf("%d", ptr + i );
         sum=sum+*(ptr+i);
     }
     printf("the sum of number is: %d",sum);
     free(ptr);
     

 }