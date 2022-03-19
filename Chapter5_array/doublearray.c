//write a program to store //temperature of 2 cities of a week and display it!
#include<stdio.h>
void main(){
    int temperature[2][7],i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<7;j++){
printf("\n1st city [%d][%d]:",i,j);
scanf("%d",&temperature[i][j]);
    }
}

for (i=0;i<2;i++){

    for(j=0;j<7;j++)
    printf("\n2nd city: %d",temperature[i][j]);
    printf("\n");

}
    }





