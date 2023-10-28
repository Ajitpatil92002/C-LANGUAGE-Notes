#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};

struct node *first = NULL, *temp = NULL, *last = NULL;
void create()
{
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter info : ");
    scanf("%d",&temp->info);
    temp->next = NULL;
    temp->prev = NULL;
}

void insertbeg()
{
    if (first == NULL)
    {
        create();
        first = last = temp;
    }
    else
    {
        create();
        temp->next = first;
        first->prev = temp;
        first = temp;
    }
}

void insertEnd()
{
    if (first == NULL)
    {
        create();
        first = last = temp;
    }
    else
    {
        create();
        last->next = temp;
        temp->prev = last;
        last = temp;
    }
}
void display()
{
    struct node *temp1;
   temp1 = first;
   if (first == NULL)
   {
       printf("\nList is empty\n");
       return;
   }
   
    int count = 0;
    printf("\n\nElements of Doubly Linked Lists : \n");
    while (temp1 != 0)
    {
        count++;
        printf("%d Item : %d\n", count, temp1->info);
        temp1 = temp->next;
    }
}
void deletebeg()
{
    if (first == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    struct node *temp;
    temp = first;
    if (temp->next == NULL)
    {
        printf("\nItem Deleted = %d\n", temp->info);
        free(temp);
        first = last = NULL;
    }
    else
    {
        first = first->next;
        first->prev = NULL;
        printf("\nItem Deleted = %d\n", temp->info);
        free(temp);
    }
}
void deleteEnd()
{
    if (last == NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    struct node *temp;
    temp = last;
    if (first->next == NULL)
    {
        printf("\nItem Deleted = %d\n", temp->info);
        free(temp);
        first = last = NULL;
    }
    else
    {
        last = last->prev;
        last->next = NULL;
        printf("\nItem deleted = %d\n",temp->info);
        free(temp);
    }
    
}


void main()
{
    int ch;
    while (1)
    {

        printf("\n1. insert beg \n2.Inserte End\n3. Display\n4. Delete Begining\n5. Delete End\n6. Exit\n");
        printf("\nEnter choice : ");
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
}