//Write a program to count and find the sum of all numbers in the array which are exactly 
//divisible by 7 not by 5.
#include<stdio.h>
void main (){
    int array[5],count=0,sum=0,i;
    for(i=0;i<5;i++)
{
    printf("enter array[%d]:",i);
    scanf("%d",&array[i]);
}
for(i=0;i<5;i++)
{
    if(array[i]%7==0 && array[i]%5!=0)
    {
        sum=sum+array[i];
        count++;
        printf("%d isrequired array element.",array[i]);

    }
}
printf("n sum=%d",sum);
printf("total number of required numbers is %d",count);
}
