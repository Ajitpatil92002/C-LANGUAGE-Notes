#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
void swap_2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 2, b = 3;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("\ncall by value\n");
    swap(a, b);                          // In this function call,the changes made to formal arguments in the called functionhave no effect in the values of actual parameters
    printf("The value After swaping\n"); // Here the values are not changed
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    printf("\ncall by reference\n");
    swap_2(&a, &b);                        // In this function call,the changes made to formal arguments in the called functionhave  effects in the values of actual parameters
    printf("The value After swaping_2\n"); // Here the are changed
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}
