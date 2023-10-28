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
    printf("\nEnter the info to insert : ");
    scanf("%d", &temp->info);
    temp->next = NULL;
}


void insertEnd()
{
    if (last == NULL)
    {
        create();
        first = temp;
        last = first;
    }
    else
    {
        create();
        last->next = temp;
        last = temp;
    }
}
void display()
{
    struct node *temp1;
    temp1 = first;
    if (temp1 == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    printf("\nThe elements are : \n");
    while (temp1->next != NULL)
    {
        printf("\n%d", temp1->info);
        temp1 = temp1->next;
    }
    printf("\n%d", temp1->info);
}
void deletebeg()
{
    struct node *temp1;
    if (first == NULL)
    {
        printf("\nList is Empty\n");
    }
    if (first->next == NULL)
    {
        printf("\nElement Deleted = %d", first->info);
        free(last);
        first = last = NULL;
        return;
    }
    else
    {
        temp1 = first;
        first = temp1->next;
        printf("\nElement deleted is = %d\n", temp1->info);
        free(temp1);
    }
}

void main()
{
    int ch;
    while (1)
    {

        printf("\n1. insert\n2. display\n3. delete\n4. Exit");
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertEnd();
            break;
        case 2:
            display();
            break;
        case 3:
            deletebeg();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nEnter valid option\n");
            break;
        }
    }
}
