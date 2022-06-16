//Given a 5 digit integer number ,wap to print in revers order.
//(eg 1619=9161)
#include<stdio.h>
void main()
{

   int a =1619,rev=0,rem;
   while(a !=0)
   { 
rem =a%10;
rev=(rev*10)+rem;
a=a/10;
}
printf("Reverse is :%d",rev);


}