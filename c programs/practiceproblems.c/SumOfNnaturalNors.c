#include <stdio.h>
int main()
{
    int num,i,sum =0;           // initialising sum = 0
    printf("Enter the Number \n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
       sum = sum +i;    //sum+=i; 
    }
 printf("sum = %d ",sum);
    return 0;
}
