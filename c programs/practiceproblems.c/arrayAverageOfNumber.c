#include<stdio.h> 
int main(int argc, char const *argv[])
{
    float n,avg,sum=0.0; 
    float num [20];
    printf("Enter the size of array num\n");
    scanf("%f",&n); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array num :",i+1); 
        scanf("%f",&num[i]); 
       sum = sum +num[i];
    } 
    avg = sum/n; 
    printf("The average of array num is : %.2f",avg);
    
    return 0;
}
