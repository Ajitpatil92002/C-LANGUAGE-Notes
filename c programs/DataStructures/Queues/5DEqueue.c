#include <stdio.h>
#define size 5
int q[size];
int f = 0, r = -1, item;

void insertfront()
{
    if (r == size - 1)
    {
        printf("\nQueue is Overflow !!!\n");
        return;
    }
    if (f == 0 && r == -1)
    {
        printf("\nEnter value of item : ");
        scanf("%d", &item);
        q[++r] = item;
    }
    if (f != 0)
    {
        printf("\nEnter value of item : ");
        scanf("%d", &item);
        q[--f] = item;
    }
    printf("\nFront Insertion is not Possible\n");
}
void insertrear()
{
    if (r == size - 1)
    {
        printf("\nQueue is Overflow !!!\n");
        return;
    }
    printf("\nEnter the element to be insert\n");
    scanf("%d", &item);
    q[++r] = item;
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Insert\n2. Display\n3. Delete\n4. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}