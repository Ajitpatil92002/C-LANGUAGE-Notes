#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i, a;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        a = num % (num/2);
    }
   
   if (a==0)
   {
       printf("%d is not a prime number\n",num,a);
   } 
   else
   {
       printf("%d is prime number\n",num,a);
   }
   
   
    return 0;
}
