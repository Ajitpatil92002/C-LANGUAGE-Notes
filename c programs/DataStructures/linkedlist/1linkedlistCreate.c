#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void create()
{
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter a Data : ");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\nDo you want to add new data :\n1 yes\n0 No :");
        scanf("%d", &choice);
    }

    temp = head;
    int count = 0;
    printf("\n\nElements of Linked Lists : \n");
    while (temp != 0)
    {
        count++;
        printf("%d : %d\n", count, temp->data);
        temp = temp->next;
    }
}

int main()
{
    
create();
    return 0;
}