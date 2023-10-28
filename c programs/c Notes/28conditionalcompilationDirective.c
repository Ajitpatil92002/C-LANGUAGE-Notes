/*the #ifdef directive allows for conditional compilation. 
The preprocessor determines if the provided macro exists before including the subsequent code in the compilation process.

The syntax for the #ifdef directive in the C language is:    #ifdef macro_definition
 macro_definition :--
The macro definition that must be defined for the preprocessor to include the C source code into the compiled application

the #ifndef directive allows for conditional compilation. 
The preprocessor determines if the provided macro does not exist before including the subsequent code in the compilation process. 
The syntax for the #ifndef directive in the C language is:   #ifndef macro_definition
 macro_definition :--
The macro definition that must not be defined for the preprocessor to include the C source code into the compiled application.


Note :-- The #ifdef and #ifndef directive must be closed by an #endif directive*/

/*  the #if directive allows for conditional compilation. 
 The preprocessor evaluates an expression provided with the #if directive to determine if the subsequent code should be included in the compilation process. 
 
 The syntax for the #if directive in the C language is:    #if conditional_expression
conditional_expression :--
   Expression that the preprocessor will evaluate to determine if the C source code that follows the #if directive will be included into the final compiled application.
  
  #elif :--
  The preprocessor will include the C source code that follows the #elif statement when the condition of the preceding 
  #if, #ifdef or #ifndef directive evaluates to false and the #elif condition evaluates to true.

The #elif directive can be thought of as #else if.
The syntax for the #elif directive in the C language is :--  #elif conditional_expression
conditional_expression
Expression that must evaluate to true for the preprocessor to include the C source code into the compiled application

Note :--- The #else directive must be closed by an #endif directive.
  */
#include <stdio.h>
#define years_old 18
#define age 11
int main()
{
#ifdef years_old // here it tells to cpp that if years_old macro is defined than print the following statement
    printf("My age is %d years old\n", years_old);
#endif

#undef years_old // here it tells the cpp to undefine the years_old
    printf("\nThe result after undefining the years_old\n");
#ifdef years_old
    printf("My age is %d years old\n", years_old); // here it will not print this statement b'coz the macro years_old is undefined
#endif

#ifndef years_old // here it tells to cpp that if years_old is not defined than print he following statements
    printf("Not yet born\n");
#endif

#if age >= 18
    printf("\nYou are Adult\n");
#elif ((age < 18) && (age >= 13))
    printf("You are teen\n");
#else
    printf("\nYou are Child\n");
#endif
    return 0;
} 















/* The age of Ajit in seconds */
/*int myage;

   #warning The variable age may exceed the size of a 32 bit integer

    12 years, 365 days/year, 24 hours/day, 60 minutes/hour, 60 seconds/min 
   myage = 12 * 365 * 24 * 60 * 60;

   printf("Ajit is %d seconds old\n", myage);

*/

/*  the #error directive causes preprocessing to stop at the location where the directive is encountered. Information following the #error directive is output as a message prior to stopping preprocessing.

Syntax
The syntax for the #error directive in the C language is:

#error message
message
Message to output prior to stopping preprocessing. 
Let's look at how to use #error directives in your C program.

The following example shows the output of the #error directive:

 Example using #error directive 

#include <stdio.h>
#include <limits.h>
 
 * Calculate the number of milliseconds for the provided age in years
 * Milliseconds = age in years * 365 days/year * 24 hours/day, 60 minutes/hour, 60 seconds/min, 1000 millisconds/sec

#define MILLISECONDS(age) (age * 365 * 24 * 60 * 60 * 1000)

int main()
{
    The age of TechOnTheNet in milliseconds 
   int age;

   #if INT_MAX < MILLISECONDS(12)
   #error Integer size cannot hold our age in milliseconds
   #endif

    Calculate the number of milliseconds in 12 years 
   age = MILLISECONDS(12);

   printf("TechOnTheNet is %d milliseconds old\n", age);

   return 0;
}

*/
