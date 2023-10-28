#include <stdio.h>
int main()
{
    int a = 3;
    int *b = &a; //Here the b holds the adders of a

    // ---->& is (addres of) operator ----->* is Indirection operator which take adderess as arguments
    printf("---->Pointers\n");
    printf("the value of a is : %d\n", a);
    printf("the adders of a is : %d\n", &a);
    printf("the value of b(Adderes of a) is : %d\n", b);
    printf("the value at adders of b is: %d\n", *b);
    printf("\n");

    printf("---->pointer to pointer\n");
    int **c = &b; // here the c holds the adders of b

    printf("the Adders of b  is : %d\n", &b);
    printf("The value of c is : %d (the adders of b) \n", c); 
    printf("\n the value of a is: %d \n", a);  
    printf("the adders of a is: %d \n", &a);
    printf("\n the value at Adderes c is: %d (the adders of a) \n", *c);
    printf("the value  at Adderes value c is : %d (the value of a) \n", **c);
    return 0;
}
