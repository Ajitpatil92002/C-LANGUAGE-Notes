#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n-------FOR REVERSE RIGHTANGLE TRIANGLE--------\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n-------FOR Hallow RIGHTANGLE TRIANGLE--------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i < n - 1)
            {
                if (j == 0)
                    printf("* ");
                else if (j == i)
                    printf("* ");
                else
                    printf("  ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }
    printf("\n\n-------FOR Hallow REVERSE RIGHTANGLE TRIANGLE--------\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {  
            /* 
             * Print stars for first row(i==1), 
             * first column(j==1) and 
             * last column(j=rows).
             */

            if (i ==1 || j == i || j == n)
            {
              printf("* ");
            } 
            else
            printf("  ");
            
        }
        printf("\n");
    }
 printf("\n\n-------FOR Hallow RIGHTANGLE TRIANGLE--------\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        { 
            /* 
             * Print star for first column(j==1), 
             * last column(j==i) or last row(i==rows).
             */
          if (j ==1 || j == i || i == n)
            {
              printf("* ");
            } 
            else
            printf("  "); 
        }
        printf("\n");
    }
    return 0;
}
