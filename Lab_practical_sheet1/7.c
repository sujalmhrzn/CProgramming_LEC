//wap to read base &altitude of a triangle & print its area:

#include<stdio.h>
void main(){
    float base,altitude,area;
    printf("Enter the base and altitude of a triangle :");
    scanf("%f%f",&base,&altitude);

    area =(altitude*base)/2;
    printf("The area of the triangle is : %f",area);
    
}