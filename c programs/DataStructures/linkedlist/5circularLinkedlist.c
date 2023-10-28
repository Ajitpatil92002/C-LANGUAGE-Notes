#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
} *first = NULL, *temp = NULL, *last = NULL;

void create()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter a Element to insert : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
}

void insertbeg()
{
    create();
    if (first == NULL)
    {
        first = last = temp;
    }
    else
    {
        temp->next = first;
        first = temp;
        last->next = temp;
    }
}
void display()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
        return;
    }
    struct node *temp1;
    temp1 = first;
    printf("\nThe contents of the list are : \n");
    while (temp1->next != first)
    {
        printf("\n%d", temp1->info);
        temp1 = temp1->next;
    }
    printf("\n%d", temp1->info);
}
void insertend()
{
    if (last == NULL)
    {
        first = last = temp;
    }
    else
    {
        create();
        last->next = temp;
        temp->next = first;
        last = temp;
    }
}
void deletebeg()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    else if (first == last)
    {
        printf("\nDeleted item : %d\n", first->info);
        free(first);
        first = last = NULL;
    }
    else
    {
        struct node *temp1;
        temp1 = first;
        last->next = temp1->next;
        first = temp1->next;
        printf("\nDeleted Element : %d\n", temp1->info);
        free(temp1);
    }
}
void deleteEnd()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    else if (first == last)
    {
        printf("\nDeleted item : %d\n", first->info);
        free(first);
        first = last = NULL;
    }
    else
    {
        struct node *temp1;
        temp1 = first;
        while (temp1->next != last)
        {
            temp1 = temp1->next;
        }
        temp1->next = first;
        printf("\nDeleted Element : %d\n", last->info);
        free(last);
        last = temp1;
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1. insert beg\n2. insert End\n3. Display\n4. delete beg\n5. delete End\n6. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertend();
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