#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
void create()
{
    struct node *newnode, *temp;
    int ch;
    while (ch)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter info : ");
        scanf("%d", &newnode->info);
        newnode->next = newnode->prev = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("\nDo you want to add new data :\n1 yes\n0 No :");
        scanf("%d", &ch);
    }
    temp = head;
    int count = 0;
    printf("\n\nElements of Doubly Linked Lists : \n");
    while (temp != 0)
    {
        count++;
        printf("%d : %d\n", count, temp->info);
        temp = temp->next;
    }
}

int main()
{
    create();
    return 0;
}