#include<stdio.h> 
int main(int argc, char const *argv[])
{
    int num,i,fact=1;  
    printf("Enter the number\n");
    scanf("%d",&num); 
    for ( i = 1; i <=num; i++)
    {
        fact = fact * i; 
    }  
    printf("%d ! = %d",num,fact);
    
    return 0;
}
