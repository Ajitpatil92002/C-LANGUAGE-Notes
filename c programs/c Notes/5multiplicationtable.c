#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    printf("Enter the no. for which you multiplication of it\n");
    scanf("%d", &j);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d =%d\n", j, i, i * j);
    }
    return 0;
}
