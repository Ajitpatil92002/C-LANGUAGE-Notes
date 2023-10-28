#include<stdio.h> 
int main(int argc, char const *argv[])
{
    int i,j,n; 
    printf("Enter the number to find the multiplication up to it : "); 
    scanf("%d",&n); 
    for ( i = 1; i <= 10; i++)
    {
        for (j =1 ; j<=n;j++)
        { 
            printf("%d X %d = %d , ",j,i,j*i);
        }
        printf("\n");
    }
    
    return 0;
}
