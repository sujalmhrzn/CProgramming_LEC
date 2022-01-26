#include<stdio.h>

void main(){

    int  a=10;
    int  b=20;
    int  c;
    
    c = a + b;
    printf("line 1-value of c is %d\n",c );

    c = a-b;
    printf("line 2-value of c is %d\n",c);

    c = a*b;
    printf("line 3-value of c is %d\n",c);

    c= a/b;
    printf("line 4-value of c is %d\n",c);

    c= a%b;
    printf("line 5-value of c is %d\n",c);

    c=a ++;
    printf("line 6-value of c is %d\n",c);

    c= ++a;
    printf("line 7-value of c is %d\n",c);

    c= --a;
    printf("line 8-value of c is %d\n",c);

    c=a --;
    printf("line 9-value of c is %d\n",c);

}  
