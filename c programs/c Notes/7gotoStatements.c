#include <stdio.h>
int main()
{
    int i, num;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the number\n Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                //break;  //it will take exit  only 2nd for loop not for all nested loop

                goto end; // to take a exit  from all nested loop we use goto statements
            }
        }
    }
end:
    return 0;
}
