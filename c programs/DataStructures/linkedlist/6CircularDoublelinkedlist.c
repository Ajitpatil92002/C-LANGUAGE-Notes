#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
} *first = NULL, *last = NULL, *temp = NULL;

void cerate()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the Element to insert : ");
    scanf("%d", &temp->info);
    temp->next = temp->prev = temp;
}

void insertbeg()
{
    if (first == NULL)
    {
        cerate();
        temp->next = temp->prev = first = last = temp;
    }
    else
    {
        cerate();
        temp->next = first;
        temp->prev = last;
        last->next = temp;
        first = temp;
    }
}
void insertEnd()
{
    if (first == NULL)
    {
        cerate();
        temp->next = temp->prev = first = last = temp;
    }
    else
    {
        cerate();
        temp->next = first;
        temp->prev = last;
        last->next = temp;
        last = temp;
        first->prev = last;
    }
}
void deletebeg()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    if (first = last)
    {
        printf("\nDelete item : %d\n", first->info);
        free(first);
        first = last = NULL;
    }
    else
    {
        struct node *temp1 = first;
        last->next = first->next;
        first = first->next;
        printf("\nDelete item : %d\n", temp1->info);
        free(temp1);
    }
}
void deleteEnd()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    if (first = last)
    {
        printf("\nDelete item : %d\n", first->info);
        free(first);
        first = last = NULL;
    }
    else
    {
        struct node *temp1 = first;
        while (temp1->next != last)
        {
            temp1 = temp1->next;
        }
        temp1->next = first;
        first->prev = temp1;
        printf("\nDeleted item : %d\n", last->info);
        free(last);
        last = temp1;
    }
}
void display()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    else
    {
        struct node *temp1;
        temp1 = first;
        printf("\nContents of list are :\n");
        while (temp1->next != first)
        {
            printf("\n%d", temp1->info);
            temp1 = temp1->next;
        }
        printf("\n%d", temp1->info);
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. Insert Beg\n2. Insert End\n3. Display\n4. Delete Beg\n5. Delete End\n6. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            display();
            break;
        case 4:
            deletebeg();
            break;
        case 5:
            deleteEnd();
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }

    return 0;
}