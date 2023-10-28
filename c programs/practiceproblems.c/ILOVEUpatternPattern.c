#include <stdio.h>

void printi(int n);
void printHeart(int n);
void printU(int n);

int main()
{
    int n;
    printf("Enter the size : ");
    fflush(stdin);
    scanf("%d", &n);
    printi(n);
    printHeart(n);
    printU(n);
    return 0;
}
void printi(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c ", 3);
    }
    printf("\n");
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("  ");
            if (j == n / 2)
                printf("%c ", 3);
            if (j == n)
                printf("\n");
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c ", 3);
    }
}
void printHeart(int n)
{
    int i, j;
    printf("\n\n");
    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%c", 3);
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%c", 3);
        }

        printf("\n");
    }

    for (i = n; i >= 1; i--)
    {
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (i * 2) - 1; j++)
        {
            printf("%c", 3);
        }

        printf("\n");
    }
}
void printU(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 2 || ((i == n) && (j >= 2)) || j == n)
                printf("%c ", 3);
            else
                printf("  ");
        }
        printf("\n");
    }
}
