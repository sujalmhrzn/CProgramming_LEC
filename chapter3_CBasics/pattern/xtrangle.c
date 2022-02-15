#include<stdio.h>
void trangular(){
    int i, j , rows;
    printf("how many of rows \n;");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");

        }
        printf("\n");
    }
}
void main(){
    trangular();
}