#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, num = 1, no;
    scanf("%d", &n);

    for (int i = 0; i < n + 1; i++)
    {
        no = i - 1;
        for (int j = 0; j < (n)-i; j++)
        {
            printf("  ");
        }
        num = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        for (int j = 1; j < i; j++)
        {
            printf("%d ", no);
            no--;
        }

        printf("\n");
    }

    return 0;
}
