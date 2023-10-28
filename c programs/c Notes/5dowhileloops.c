#include <stdio.h>
int main()
{
    int i = 0, a;     
    scanf("%d", &a);

    do
    {

        printf("%d\n", i);
        i = i + 1;

    } while (i <= a);

    return 0;
}