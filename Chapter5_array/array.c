#include<stdio.h>

int array(){
    int i;
    int numbers[]={10,20,30,40,50,60};
    printf("number on  index is %d\n",numbers[3]);
    
     for(i=0;i<6;i++)
     printf("the numbers of index %dis%d\n",i,numbers[i]);
}
void main(){
    array();


}
