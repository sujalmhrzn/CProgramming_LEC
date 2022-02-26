#include<stdio.h>
int factorial(int n ){
    if(n>=1)
return (n*factorial (n-1));
else{
return 1;
} 
}
void main(){
int s;
printf("enter the factorial number:\n");
scanf("%d",&s);
printf("The factorial of %d is %d", s, factorial(s) );
}