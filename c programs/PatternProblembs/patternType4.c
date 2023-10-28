#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n------FOR REVERSE-----\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n-------Diff Type Pattern------\n");
    int num;
    int j = num;
    for (int i = 1; i <= n; i++)
    { 
        num = i;
        for (int j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf(" %d", num);
            num++;
        }
        num--;
        num--;
        for (int j = 1; j < i; j++)
        {
           printf(" %d",num); 
           num--;
        }
        
        printf("\n");
    }

    return 0;
}
