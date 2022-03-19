//write an algorithm to find all roots of a quadratic equations
#include<stdio.h>
#include<math.h>
 
void main(){
double a , b ,c ,root_1,root_2 ;
printf("enter 3 variables:");
scanf("%lf%lf%lf",&a,&b,&c);
root_1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
root_2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
printf("\nroot_1 is %lf:",root_1);
printf("\nroot_2 is %lf:",root_2); 

}