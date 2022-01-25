#include<stdio.h>
int main()
{
    int testInteger;
    printf("The address of decleared:,%d\n", &testInteger);
    printf("enter an integer:");
    scanf("%d", &testInteger);
    printf("number = %d", testInteger);
    return 0;
}