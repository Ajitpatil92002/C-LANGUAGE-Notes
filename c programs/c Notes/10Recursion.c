#include <stdio.h>

/* Here we are finding the factorial of given number by using recursion function */

int factorial(int a)
{
    if (a == 1 || a == 0) //Base case
    {
        return 1;
    }
    else
    {
        return (a * factorial(a - 1)); //Recurcive case ----->Recursive function is any function which calls itself ;
    }
}

int fibonacci_series(int a)
{
    if (a == 1 || a == 2)
    {
        return a - 1;
    }
    else
    {
        return (fibonacci_series(a - 1) + fibonacci_series(a - 2));
    }
}

int main()
{
    int a, x;
    printf("Enter the index which you want\n");
    printf("1.---->Factorial\n2.---->Fibonacchi_series\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You selected Factorian\nEnter the no. to find its factorial :\t ");
        scanf("%d", &x);
        printf("%d!=%d", x, factorial(x));
        break;
    case 2:
        printf("You selected Fibonacchi_series\nEnter the no. to find its fibonacchi series :\t");
        scanf("%d", &x);
        printf("%d", fibonacci_series(x));
        break;
    default:
        printf("You not slected any index");
        break;
    }

    return 0;
}
