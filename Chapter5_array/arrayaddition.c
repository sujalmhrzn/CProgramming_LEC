#include <stdio.h>
void hello()
{
    int add1[3][3], add2[3][3], i, j;
    printf("\nenter number of 1st matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number  %drow,%dcolumn:", i, j);
            scanf("%d", &add1[i][j]);
        }
    }
    printf("enter 2nd matrix\n");

    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            printf("\nenter the number in %d row,%d column:", i, j);
            scanf("%d", add2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3d", add1[i][j] + add2[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    hello();
}