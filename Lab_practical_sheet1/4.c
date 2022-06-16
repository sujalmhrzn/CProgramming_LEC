//wap to input length & breadth of a room & calculate & print its area & perimeter.
#include<stdio.h>

void main(){

float length,breadth,area,perimeter;
 
 printf("enter length of room: ");
 printf("Enter breadth of room:");
 scanf("%f",&breadth);
 scanf("%f ",&length );

 area =length*breadth;
 perimeter=2*(length+breadth);
 printf("The area of the room is :%f \n The perimeter of the room is %f",area,perimeter);
 
 }