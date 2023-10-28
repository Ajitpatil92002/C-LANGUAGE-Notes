#include <stdio.h>
enum days
{
   monday =1,tue,thu,fri,sat,sun
}d; 
void main()
{ 
    int n; 
    printf("ENTER THE DAY : ");
    scanf("%d",&n); 
    d=n; 
    if (d==sat || d==sun)
    {
        printf("WEEKEND\n");
    } 
    else
    {
        printf("WORKING DAY\n");
    }
    
    
}