#include <stdio.h>
int main()
{
    int num, i, count = 0;
    printf("Enter the Number\n");
    scanf("%d", &num);

    while (num!=0)
    {
        num/=10; 
        count++;
    }
    
printf("%d",count);
    return 0;
}