#include <stdio.h>

/* Ways to Define the Function   */
// ----> without aruments and without return value
// ----> without arguments and with return value
// ----> with arguments and without return value
// ----> with arguments and with return value

/*  with arguments and with return value */

int sum(int x, int y) //declaration the function
{
  return x + y;
}

int main()
{
  int a, b;
  printf("enter the value of a & b\n");
  scanf("%d %d", &a, &b);

  printf("The sum is %d", sum(a, b)); // calling the Function
  return 0;
}
