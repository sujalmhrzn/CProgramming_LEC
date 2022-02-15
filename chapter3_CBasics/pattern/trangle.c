  #include<stdio.h>

  void main(){
    int i,j,numbers=1,trangular;
    printf("enter the numbers:");
    scanf("%d",&trangular);
    for (i=1;numbers<=trangular;i++){
        for (j=1;j<=i;j++){
            printf("%3d",numbers);
            numbers++;
        }
        printf("\n");
    }

}