#include <stdio.h>

void star_pattern()
{

    int a;
    printf("Enter how many star(*) you want ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {

        printf(" * ");
    }
}

int main()
{
    star_pattern(5);
    return 0;
}
