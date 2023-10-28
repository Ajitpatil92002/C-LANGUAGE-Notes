/* a C Preprocessor is just a text substitution tool and it instructs the compiler
 to do required pre-processing before the actual compilation.*/
// All preprocessor commands begin with a hash symbol (#).

// ----File inclusion :
// #include ---->  Inserts a particular header from another file ;

/* A header file is a file which contains the extension ".h". 
This extension has C macro definitions and C function declarations to be shared between several source files.
 Header files are of two types:
--->files that the programmer writes
--->files that come with the compiler.

We request to use a header file in our program by including it with the C preprocessing directive #include, 
like as we have seen the stdio.h header file, which comes along with the compiler

---->If a header file is included within the symbol <>, 
the pre-processor will search a predetermined directory path to locate the header file. 
---->If the header file is enclosed in quotation mark " ", 
the pre-processor will look for the header file in the same directory as the source file.
*/

#include <stdio.h>
#include "10simplecalci.c"
int main()
{
    int a = 2, b = 3;
    product(a, b);
    division();

    return 0;
}
/*  C programs are written in human readable source code that is not directly executable by a computer. 
It takes a three step process to transform the source code into executable code. 
These three steps are: Preprocessing, compiling and linking.

--->Preprocessing - Processes directives (commands that begin with a # character) which can modify the source code before it is compiled.
--->Compiling - The modified source code is compiled into binary object code. This code is not yet executable.
--->Linking - The object code is combined with required supporting code to make an executable program. 
This step typically involves adding in any libraries that are required. 
*/