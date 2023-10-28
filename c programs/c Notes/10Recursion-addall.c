#include <stdio.h>
int add(int a)
{
    if (a == 0)
    {
        return 0;
    }

    else
    {
        return (a + add(a - 1));
    }
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("The addition up to %d no.s is\n", a);
    printf("%d", add(a));
    return 0;
}
