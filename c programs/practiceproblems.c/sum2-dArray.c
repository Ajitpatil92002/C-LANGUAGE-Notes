#include <stdio.h>
int main()
{

    int _1matrix[10][10],_2matrix[10][10],sum_matrix[10][10];  
    int m,n; 
    printf("Enter the row and coloumn of matrix\n"); 
    scanf("%d %d",&m,&n); 
    printf("The first matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &_1matrix[i][j]); 
        } 
    }  
          
    printf("\nThe second matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &_2matrix[i][j]); 
        }  
    }
    
    printf("The sum matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {  
             sum_matrix[i][j]=_1matrix[i][j] + _2matrix[i][j] ;
            printf("%d\t", sum_matrix[i][j]); 
        }  
        printf("\n");  
    }       



   

    return 0;
}
