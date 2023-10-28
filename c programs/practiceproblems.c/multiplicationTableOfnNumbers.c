#include <stdio.h>
int  main()
{
    int j, i, n;
    printf("Input upto the table number starting from 1 : ");
    scanf("%d", &n);
    printf("Multiplication table from 1 to %d \n", n);
    for (i = 1; i <= 10; i++) //it will print multiplication of given no. with up to 10
    {
        for (j = 1; j <= n; j++) //it will print multiplication table up to the given no.
        {
            //if (j <= n - 1)
                printf("%dx%d = %d, ", j, i, i * j);
           /* else
                printf("%dx%d = %d", j, i, i * j);*/
              // printf("%d\t",i*j);
        }
        printf("\n");
    } 
    return 0;
}
