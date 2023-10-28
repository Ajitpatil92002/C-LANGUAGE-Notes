#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, temp, re, loop, fact, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        re = num % 10;
        loop = 1, fact = 1;
        while (loop <= re)
        {
            fact = fact * loop;
            loop++;
        }
        sum = sum + fact;
        num = num / 10;
    } 
   if (temp==sum)
   {
       printf("%d is a strong number\n",temp);
   }
   else
   {
       printf("%d is not strong number\n",temp);
   }
   
    return 0;
}
