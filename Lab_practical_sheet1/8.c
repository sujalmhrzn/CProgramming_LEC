//wap to calculate simple interest amount for deposit amount (p) kept in bank for (n) years at the rate of (r) simple interest per annum.
#include<stdio.h>
void main(){
    int p,n,r,i;
    printf("Enter the value of deposit amount ,time and rate:");
    scanf("%d,%d,%d,&p,&n,&r");
    i=(p*n*r)/100;
    printf("THe value of simple interest is :%d\n",i);
    

}