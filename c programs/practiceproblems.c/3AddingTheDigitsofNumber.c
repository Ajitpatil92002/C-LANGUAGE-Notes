#include<stdio.h> 
int main()
{
    int num,sum=0,reminder,i; 
    printf("Enter the Number\n");                
    scanf("%d",&num); 
     
     while (num!=0)
     {
        reminder = num % 10;  
        sum = sum + reminder;  
        num/=10;
     } 
     printf("%d",sum);
     
    return 0;
}
