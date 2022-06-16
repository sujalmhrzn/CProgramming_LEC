//wap to input 5 digit integer numbers and print the sum of digits in it.
#include<stdio.h>
void main(){
    int a,rem,sum=0;
    printf("\n Enter 5 digit integer numbers:");
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        sum=sum+rem;
        a=a/10;

    }

    printf("\n The sum is :%d",sum);
}