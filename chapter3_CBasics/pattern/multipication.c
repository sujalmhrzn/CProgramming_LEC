#include <stdio.h>

int multipication_table(int row , int column){
    int i,j;
    for (i =1;i<=row; i++){
        for(j=1;j<=column;j++)
{
    printf("      %d",i*j);
}
printf("\n");
    }
}
void main()
{
    multipication_table(4,4);
}