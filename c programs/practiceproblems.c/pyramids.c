#include <stdio.h>
int main()
{
    int n, no, m = 1;
    scanf("%d", &no);
    n = no;
    for (int r = 1; r <= no; r++)
    {
        for (int sp = 1; sp <= n - r; sp++)
        {
            printf(" ");
        }
        m = 1;
        for (int p = 1; p <= r; p++)
        {
            printf("%d ", m);
            m++;
        }
        m++;

        printf("\n");
    }

    printf("\n\n");
    m = 1;
    for (int r = 1; r <= no; r++)
    {
        for (int sp = 1; sp <= n - r; sp++)
        {
            printf(" ");
        }

        for (int p = 1; p <= r; p++)
        {
            printf("%d ", m);
            m++;
        }

        printf("\n");
    }
    printf("\n\n");
    m = 1;
    for (int r = 1; r <= no; r++)
    {
        for (int sp = 1; sp <= n - r; sp++)
        {
            printf(" ");
        }

        for (int p = 1; p <= r; p++)
        {
            printf("%d ", m);
        }
        m++;

        printf("\n");
    }
    printf("\n\n");
  
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
    return 0;
}
