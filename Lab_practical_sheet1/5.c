//wap to read the radius of the sphere and compute its surface area and volume.
#include<stdio.h>
void main(){
float surface_areas,volume,radius,p=3.1415;
printf("Enter the radius");
scanf("%f",&radius);

volume=(4/3)*p*radius;
surface_areas=4*p*radius;

printf("The volume of a sphare is :%f\n THe surface area is :%f",volume,surface_areas);



}