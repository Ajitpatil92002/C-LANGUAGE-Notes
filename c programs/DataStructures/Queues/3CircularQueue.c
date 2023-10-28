#include <stdio.h>
#include <stdlib.h>
#define size 5
int q[size], front = 0, rear = -1, count = 0;

void insert()
{
    int item;
    if (count == size)
    {
        printf("\nQueue is full\n");
        return;
    }
    rear = (rear + 1) % size;
    printf("\nEnter Element to insert :");
    scanf("%d", &item);
    q[rear] = item;
    count++;
}
void delete ()
{
    if (count == 0)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    printf("\nElement deleted is %d\n", q[front]);
    front = (front + 1) % size;
    count--;
}
void display()
{
    if (count == 0)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    int j = front;
    printf("\nElement of the QUEUE are : \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", q[j]);
        j = (j + 1) % size;
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWRONG CHOICE !!!!!\n");
            break;
        }
    }
    return 0;
}