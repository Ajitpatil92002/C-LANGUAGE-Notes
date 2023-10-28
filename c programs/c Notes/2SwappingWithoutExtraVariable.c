#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the values of a & b\n");
    scanf("%d  %d", &a, &b);
    printf("Before the swapping\n");
    printf("a=%d \nb=%d", a, b);
    //Swapping without taking extra variable
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter the swapping\n");
    printf("a = %d \nb = %d", a, b);
    return 0;
}
