#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number to find the sum up to it\n");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        sum = sum + i;
    } 
    printf("%d",sum);

    return 0;
}
