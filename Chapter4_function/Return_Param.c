#include <stdio.h>

int add(int a , int b){

 int c= (a+b);
 return c;
 
}
void main(){
    int d=add(200,300);
    printf("the sum of 2 numbers %d\n",d);
}