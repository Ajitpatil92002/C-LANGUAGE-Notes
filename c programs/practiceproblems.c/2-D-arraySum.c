#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[10][10], b[10][10], result[10][10];
    printf("Enter Rows And Coloumns\n");
    scanf("%d %d", &m, &n);
    printf("\nEnter the first matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d %d element :", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the second matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the %d %d element :", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe SUM OF MATRIX IS\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
