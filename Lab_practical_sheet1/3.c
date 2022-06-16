//wap to input age of a person and print in days with appropriate prompts.
#include<stdio.h>
 void main(){
     int age,days,lpyear;
     printf("enter a age :");
     scanf("%d",&age);
    lpyear=(age/4)+1;
    days=(365*age)+lpyear;
    printf("The total days are:%d",days);

 }