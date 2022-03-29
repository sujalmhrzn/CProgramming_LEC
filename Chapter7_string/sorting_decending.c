//write a program to read elements of an array int main pass it to a function to sort it 
//in descending order display in sorted array.
#include<stdio.h>
 void sujal(int numbers ,int *arr)
 {
    int a,i,j;


     //sorting
     for(i=0;i<numbers;i++)
     {
        for(j=i+1;j<numbers;j++)
        {
           if (arr[i]<arr[j])
           {
             
             a=arr[i];
             arr[i]=arr[j];
             arr[j]=a;
           }

        }
     }

}

int main(){
   int  arr[20];
   int i;
    int  numbers;
    printf ("enter a values \n");
    scanf ("%d",&numbers);
     for (i=0;i<numbers;i++)
     {

     printf("\nthe number in index%d=",i);
     
     scanf("%d",&arr[i]);
}
  sujal(numbers,arr);
{
   printf("\nthe number arranged in descending order is:");
   for(i=0;i<numbers;i++)
   {
      printf("%3d",arr[i]);
   }
}
return 0;
}
