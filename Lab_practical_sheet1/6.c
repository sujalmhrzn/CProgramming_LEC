//wap to input temperature in celsius & to print its fehrenheit equivalent.
#include<stdio.h>
void main(){
    float f,c;
    printf("Enter the temperature :");
    scanf("%f",&c);

    f=31+(c*9)/5;
    printf("the given temperature is equal to %f degree in fehrenheit equivalent",f);

}