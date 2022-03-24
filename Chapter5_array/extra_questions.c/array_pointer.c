//WAP TO SEARCH ARRAY OF  ADDRESS
#include<stdio.h>

void array(){
    int i, x[5];

    for(i=0;i<5;i++)
    {   
        printf("address of &x[%d]=%p\n",i,&x[i]);

    }
 
}
void main(){
    array();
}
