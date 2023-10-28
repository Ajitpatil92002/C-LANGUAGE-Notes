#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    for (i = 1; i < 20; i++)
    {
        if (i == 3)
        {
            continue;
        }
        if (i == 15)
        {
            break;
        }
        printf(" %d\n", i);
    }

    return 0;
}
