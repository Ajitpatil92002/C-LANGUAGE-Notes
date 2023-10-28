#include <stdio.h>
void starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        { 
            int c = 3;
            printf(" %c ",c);
        }
        printf("\n");
    }
}
void reverse_starpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int main()
{
    int rows, a;
    printf("Enter the no. of rows \n");
    scanf("%d", &rows);
    printf("Enter 1-- for triangular star pattern \n 2--- for reverse triangular\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        starpattern(rows);
        break;

    case 2:
        reverse_starpattern(rows);
        break;
    }

    return 0;
}