#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0, j = 0;
    for (; i < 5, j < 10; i++, j++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}