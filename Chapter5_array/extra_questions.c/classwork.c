//
#include<stdio.h>
//{
//int a;
//char  b;
//float c;
//printf("value of number is %p",&a);
//printf("value of number is %p",&b);
//printf("valure of numbmer is %p",&c);

//}

void main(){
    int *pont_var;
    int number=55;
    pont_var=&number;
    
printf("%d",*pont_var);

}
   // printf("pointer %p",*pont_var);
