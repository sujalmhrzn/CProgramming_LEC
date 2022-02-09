#include <stdio.h>
int main()
{
    int number, sum;
    sum=0;
    printf("The first 10 natural number is :\n");
 
    for (number = 1; number<= 10; number++)
    {
        sum = sum + number;
        printf("%d ",number);    
    }
    printf("\nThe Sum is : %d\n", sum);
}
