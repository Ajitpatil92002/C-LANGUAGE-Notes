#include <stdio.h>
int main()
{
    int n, no;
    scanf("%d", &no);
    n =no;
    for (int r = 1; r <= no; r++)
    {
        for (int sp = 1; sp <= n - r; sp++)
        {
            printf(" ");
        }

        for (int p = 1; p <= r; p++)
        {
            printf("* ");
           
        }

        printf("\n"); 
    } 
    for (int r = 0; r < no; r++)
    {
        for (int sp = 1; sp <= r ; sp++)
        {
            printf(" ");
        }

        for (int p = 0; p < n-r; p++)
        {
            printf("* ");
           
        }

        printf("\n"); 
    }

    return 0;
}