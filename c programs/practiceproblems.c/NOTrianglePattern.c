#include <stdio.h>
#include <string.h>

int main()
{
    int n, m = 1;
    printf("Enter the Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        //m =1; for continues (1 2 3 4) dont initialise m =1 ;

        for (int j = 1; j <= i; j++) //for reverse triangle condition is j<=n-i;
        {
            printf("%d ", m);
            m++;
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        m = 1;

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", m);
            m++;
        }
        printf("\n");
    }

    printf("\n");
    m =1;
    for (int i = 1; i <= n; i++)
    {
        //m =1; for continues (1 2 3 4) dont initialise m =1 ;

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", m);
           
        } 
        m++;
        printf("\n");
    }
    return 0;
}