#include <stdio.h>
int main()
{
    int y;
    printf("Enter the Year\n");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                printf("%d is a Leap Year\n", y);
            }
            else
            {
                printf("%d is not aLeap Year\n", y);
            }
        }
        else
        {
            printf("%d is a Leap Year\n", y);
        }
    }
    else
    {
        printf("%d is a Leap Year\n", y);
    }

    return 0;
}
