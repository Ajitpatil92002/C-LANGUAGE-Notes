#include <stdio.h>
#include <string.h>
int main()
{
  int n, a = 65; // for lowercase a= 96;
  printf("Enter the Rows : ");
  scanf("%d", &n);

  for (int i = 1; i < n; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      printf("%c ", a);
      a++;
    } 
    printf("\n");
  }

  printf("\n");
  for (int i = 1; i < n; i++)
  {
    a = 65;
    for (int j = 1; j <= i; j++)
    {
      printf("%c ", a);
      a++;
    }
    printf("\n");
  }
  printf("\n");
  a =65;
  for (int i = 1; i < n; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      printf("%c ", a);
    } 
    a++;
    printf("\n");
  }

  return 0;
}