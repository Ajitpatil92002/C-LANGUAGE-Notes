#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];
    gets(s1);
    gets(s2);
    printf("using strcmp function :%d\n", strcmp(s1, s2));
    int value = 0;
    for (int i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
    {
        if (s1[i] != s2[i])
        {
            value = 1;
            break;
        }
    }
    if (value == 1)
    {
        printf("The two strings are not same\n");
    }
    else
    {
        printf("The two strings are same\n");
    }

    return 0;
}
