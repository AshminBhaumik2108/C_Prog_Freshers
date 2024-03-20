#include<stdio.h>
int main()
/*
{
    int i,j,rows;
    printf("Enter any number of rows: ");
    scanf("%d", &rows);
    for(i = 1; i<=rows; i++)
    {
        for (j = 1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


{
    int i,j,rows;
    printf("Enter any number of rows: ");
    scanf("%d", &rows);
    for (i=rows; i>=1; i--)
    {
        for (j=i; j>=1; --j)
        {
            printf(" *");
        }
        printf("\n");
    }
}*/


{
    int i, space, rows, k = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; space++)
        {
            printf("  ");
        }
        while (k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}










