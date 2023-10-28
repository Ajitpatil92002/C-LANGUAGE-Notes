#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    printf("\n\n------FOR REVERSE-----\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        for (int j = 0; j < (n-1) - i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
