#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,count=0; 
    printf("Enter the number : "); 
    scanf("%d",&n); 
     int i;
     while (n!=0)
     {
         n = n/10 ; 
        count++;
     }
     
     printf("%d",count);

    return 0;
}
