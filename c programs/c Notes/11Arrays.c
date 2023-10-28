#include <stdio.h>
int main()
{ 
    printf("These are the 1-D Array\n");
    int marks[4] = {23, 34, 56, 67};
    int mathmarks[4];
    mathmarks[0] = 78;
    mathmarks[1] = 88;
    mathmarks[2] = 99;
    mathmarks[3] = 100;
    printf("These are the value  Marks\n ");
    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);
    printf("%d\n", marks[2]);
    printf("%d\n", marks[3]);
    printf("These are the value mathmarks\n");
    printf("%d\n", mathmarks[0]);
    printf("%d\n", mathmarks[1]);
    printf("%d\n", mathmarks[2]);
    printf("%d\n", mathmarks[3]);
    printf("Using Loops taking input values of elements of mark array\n");
    int mark[4];
    printf("Thse are the values of mark\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d elements in array\n", i);
        scanf("%d", &mark[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The Value of %d element in the mark array is \n %d \n",i, mark[i]);
    } 
    printf("These are 2-D Arrays\n"); 
    int matrix[2][4] = {{23,44,54,56},{32,42,52,53}} ; 
    printf("The Matrix is\n");
    for ( int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("The value of %d , %d elements in matrix array %d\n",i,j, matrix[i][j]); 
            printf(" %d ",matrix[i][j]); 
        }
        printf(" \n ");
    }
    return 0;
}
