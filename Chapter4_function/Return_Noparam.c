#include <stdio.h>

   int addition(){ 
    int a,b,c;
    printf("enter 2numbers\n");
    scanf("%d%d",&a,&b);
      c=a+b;
    return c;
   }
     int main(){
         int d= addition();
       printf("addtiions is %d\n",d);
   }