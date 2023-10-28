#include <stdio.h>
#include <stdlib.h>
#define size 5

int q[size], front, rear;
void insert()
{
    if (rear == size - 1)
    {
        printf("\nQueue is Overflow !!!\n");
        return;
    }
    int item;
    printf("\nEnter the element to be insert\n");
    scanf("%d", &item);
    q[++rear] = item;
}
void display()
{
   if (rear < front)
    {
        printf("\nQueue is Empty !!!\n");
        return;
    }
    printf("\nThe Elements of Queues are :-  \n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\n",q[i]);
    }    
}
void delete()
{
    if (rear < front)
    {
        printf("\nQueue is Empty !!!\n");
        return;
    }
    printf("\nThe element Deleted is %d\n",q[front]);
    front++;
}
int main()
{
    int ch;
    front =0,rear = -1;
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