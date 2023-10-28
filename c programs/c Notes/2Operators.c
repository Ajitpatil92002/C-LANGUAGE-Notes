#include <stdio.h>
int main()
{
  int a, b;
  printf(" Enter the values of a & b\n");

  scanf("%d %d", &a, &b);

  /* Arithematic Operators */
  printf(" These are Arithematic Operators\n");
  printf(" a + b = %d\n", a + b);
  printf(" a - b = %d\n", a - b);
  printf(" a * b = %d\n", a * b);
  printf(" a / b = %f\n", (float)a / b);

  printf("\n The size of a is %lu\n", sizeof(a));
  /* Reational Operators  */
  printf("\n These are the Relational Operators\n");
  printf(" The value of a==b is %d\n ", a == b);
  printf(" The value of a!=b is %d\n ", a != b);
  printf(" The value of a<b  is %d\n", a < b);
  printf(" The value of a>b  is %d\n", a > b);
  printf(" The value of a<=b  is %d\n", a <= b);
  printf(" The value of a>=b  is %d\n", a >= b);

  /* Increment and Decrement operators*/
  printf("\n The value of a++ is %d\n", a++);  // ----->first print then increment
  printf(" The value of a--  is %d\n", a--); //------>first print then decrement
  printf(" The value of --a  is %d\n", --a); //------>first decrement then print
  printf(" The value of ++a  is %d\n", ++a); //------>first increment then print

  /* Logical Operators */
  printf("\n These are the Logical Operators\n");
  printf(" The value of ((a<b) && (a==b)) is %d\n", ((a < b) && (a == b)));
  printf(" The value of ((a<b) || (a==b)) is %d\n", ((a < b) || (a == b)));
  printf(" The value of !(a<b)  is %d\n", !(a < b));

  return 0;
}