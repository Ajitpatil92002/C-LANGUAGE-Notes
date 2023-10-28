#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);

    switch (age)
    {
    case 35:
        printf("Your age is : %d\n", age);
        break;

    case 100:
        printf("Your age is : %d", age);
        break;

    default:
        printf(" \t");
        break;
    }

    return 0;
}