#include <stdio.h> // means which includes the the headerfile (were stdio.h is one of the Headerfile)
int main()         // main() is a Function
{
  /* Types of DataTypes 
      ---->int---for integer-------%d
      ---->float--for decimals-----%f
      ---->char---for character */

  int a = 2;                           //---means 'a' is a integer Variable which holds or stores the value 2 in memory
  float b = 2.1;                       //---means 'b' is float Variable  which holds the value 2.1 in memory
  printf("the value of a is %d\n", a); // output statements
  printf("the value of b is %f\n", b);

  int c;
  float d;
  char e = 'e';                        //----char DataType
  scanf("%d %f", &c, &d);              // intput statements
  printf("the value of c is %d\n", c); //output statements
  printf("the value of d is %f\n", d);
  printf("the value of e is %c\n", e);

  return 0;
}