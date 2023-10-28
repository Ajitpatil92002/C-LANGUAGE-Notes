#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, rev = 0, remin;
    printf("Enter the number\n");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        remin = n % 10;
        rev = rev * 10 + remin;
        n = n / 10;
    }

    printf("The reverse of %d is %d\n", temp, rev);
    if (temp == rev)
    {
        printf("%d is a PALINDROM\n", temp);
    }
    else
    {
        printf("\n%d is a not PALINDROM\n", temp);
    }

    return 0;
}
