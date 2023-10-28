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

void insertbeg()
{
    if (first == NULL)
    {
        create();
        first = temp;
        last = first;
    }
    else
    {
        create();
        temp->next = first;
        first = temp;
    }
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
void deleteEnd()
{
    struct node *temp1;
    if (last == NULL)
    {
        printf("\nList is Empty\n");
    }
    if (first->next == NULL)
    {
        printf("\nElement Deleted = %d", first->info);
        free(last);
        first = last = NULL;
    }
    else
    {
        temp1 = first;
        while (temp1->next != last)
        {
            temp1 = temp1->next;
        }
        printf("\nElement deleted is = %d\n", last->info);
        free(last);
        last = temp1;
        last->next = NULL;
    }
}

void insert_Random_node()
{
    struct node *temp1;
    int ele;
    create();
    temp1 = first;
    if (temp1 == NULL)
    {
        first = temp;
        return;
    }
    if (first->next == NULL)
    {
        temp1->next = temp;
        return;
    }
    printf("\nEnter the Element want to insert after a element\n");
    scanf("%d", &ele);
    while (temp1->info != ele)
    {
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
}
void delete_random_node()
{
    if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    struct node *prevnode = NULL, *curnode, *nextnode;
    curnode = nextnode = first;
    int ele;
    printf("\nEnter a Element of a node to be deleted\n");
    scanf("%d", &ele);
    if (first == NULL)
    {
        printf("\nThe element deleted is %d\n", curnode->info);
        free(curnode);
        first = last = NULL;
        return;
    }
    if (first->info == ele)
    {
        nextnode = first->next;
        first = nextnode;
        printf("\nThe element deleted is %d\n", curnode->info);
        free(curnode);
        return;
    }
    while (curnode->info != ele)
    {
        prevnode = curnode;
        curnode = curnode->next;

        if (curnode == NULL)
        {
            printf("\nThe element of a node is not found\n");
            return;
        }
    }

    prevnode->next = curnode->next;
    printf("\nThe element deleted is %d\n", curnode->info);
    free(curnode);
}
void reverse()
{
     if (first == NULL)
    {
        printf("\nEmpty list\n");
    }
    struct node *prev, *cur, *nextnode;
    prev = NULL;
    last = first;
    cur = nextnode = first;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        if (prev == NULL)
        {
            last = cur;
        }
        cur->next = prev;
        prev = cur;
        cur = nextnode;
    }
    first = prev;
    printf("\nThe list is Reversed \n");
}
void main()
{
    int ch;
    while (1)
    {

        printf("\n1. insert beg \n2.insert End\n3. display\n4. delete beg\n5. delete end\n6. Reverse the list\n7. Inserted at random node\n8. Delete random node\n9. Exit");
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
            reverse();
            break;
        case 7:
            insert_Random_node();
            break;
        case 8:
            delete_random_node();
            break;
        case 9:
            exit(0);
        default:
            printf("\nEnter valid option\n");
            break;
        }
    }
}