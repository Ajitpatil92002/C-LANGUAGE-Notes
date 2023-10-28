#include <stdio.h>
int main()
{
    int  num, product = 1;  // Here we intialized the product as 1 
    printf("Enter the number to find product up to it \n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)   // Here the loop will execute untill the the number is <= to i(were i goes on increment after the next loop)
    {
        product = product * i;   // Here we changed the value of product to product * i
    }
  
  printf("%d",product); 
    return 0;
}