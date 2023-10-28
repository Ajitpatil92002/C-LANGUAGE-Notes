#include <stdio.h>
int main()
{
    int x = 46;
    float y = 47.23;

    printf("The value of x is %d\n", x);
    printf("The After Type casting value of x is %f\n", (float)x); // it will convert int datatype to float
    printf("size of x = %lu\n", sizeof(x));

    printf("\nThe value of b is %f\n", y);
    printf("The After Type casting value of y is %d\n", (int)y); // it will convert float datatype to int
    printf("size of y = %lu\n", sizeof(y));

    int a = 5, b = 2;
    float c;
    c = a / b;
    printf("\nBefore Typecasting\n");
    printf("c = %f", c);

    c = (float)a / b;
    printf("\nAfter Typecasting\n");
    printf("c = %f", c);

    return 0;
}
