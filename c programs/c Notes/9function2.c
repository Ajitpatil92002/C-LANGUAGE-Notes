#include <stdio.h>

/* without arguments and with return value */

int sum()
{
    int x, y, z;
    printf(" Enter the no.1 :\t");
    scanf("%d", &x);
    printf(" Enter the no.2 :\t");
    scanf("%d", &y);
    z = x + y;

    return z;
}

int main()
{
    printf(" The sum is %d", sum());

    return 0;
}
