#include <stdio.h>
int main()
{
    int a, b;
    printf("These are the departments\n");
    printf("1--> Science \n");
    printf("2--> commerce\n");

    printf("make your sclection\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf(" You chosen computer science\n ");
        printf("Then select your subject\n");
        printf("3-->pcm\n");
        printf("4-->pcb\n");
        scanf(" %d", &b);
        switch (b)
        {
        case 3:
            printf(" you chosen PCM");
            break;

        case 4:
            printf(" you chosen PCB\n");
            break;
        }
        break;
    case 2:
        printf(" You chosen Commerce\n");

    default:
        break;
    }

    return 0;
}