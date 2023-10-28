// MACROS :-
/*The #define pre-processor directive is used to define pre-processor variable, constant or macro.*/
/* the #define directive allows the definition of macros within your source code. 
These macro definitions allow constant values to be declared for use throughout your code.

Macro definitions are not variables and cannot be changed by your program code like variables. 
You generally use this syntax when creating constants that represent numbers, strings or expressions.

Syntax :--->
The syntax for creating a constant using #define in the C language is :--  #define CNAME value  (OR)    #define CNAME (expression)
CNAME      : ---> The name of the constant. Most C programmers define their constant names in uppercase, but it is not a requirement of the C Language.
value      : --> The value of the constant.
expression : ---> Expression whose value is assigned to the constant. The expression must be enclosed in parentheses if it contains operators.

Note : --> Do NOT put a semicolon character at the end of #define statements. This is a common mistake.
*/
#include <stdio.h>
#define LIMIT 19
#define Area_OF_Circle(r) (3.1415 * (r) * (r))
#define AREA_OF_RECTANGLE(l, b) (l * b)
#define NAME "AJIT PATIL"
int main()
{
    for (int i = 0; i < LIMIT; i++)
    {
        printf("%d ", i);
    }
    int a = LIMIT;
    printf("\nThe value of a = %d\n", a);

    // Macros with Arguments :- Macros defined with arguments work similarly as function
    int area = Area_OF_Circle(3);
    printf("The area of circle is %d\n", area);
    int x = 2, y = 4;
    int areaofrectangle = AREA_OF_RECTANGLE(x, y);
    printf("The area of Rectangle = %d\n", areaofrectangle);
    printf("My name is %s\nAnd %d Years old\n", NAME, LIMIT);

#undef LIMIT     // It tells the cpp to undefine the LIMIT
#define LIMIT 55 // And now define LIMIT 55
    a = LIMIT;
    printf("\nThe value of a = %d\n", a);

    return 0;
}