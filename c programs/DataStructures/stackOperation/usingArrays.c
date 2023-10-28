#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int top = -1;
int s[SIZE];
int item;

void push()
{
    if (top == SIZE - 1)
    {
        printf("\nStack is Full\n");
        return;
    }
    printf("\nEnter a element to insert : ");
    scanf("%d", &item);
    top++;
    s[top] = item;
}
void pull()
{
    if (top == -1)
    {
        printf("\nStack is Empty");
        return;
    }
    item = s[top];
    printf("\nThe Element deleted is : %d\n", item);
    top--;
}

void diplay()
{
    if (top == -1)
    {
        printf("\nStack is Empty");
        return;
    }
    printf("\nThe elements are :\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d element = %d\n", i + 1, s[i]);
    }
}
int main()
{
    int ch;
    printf("\n1 PUSH\n2 POP\n3DISPLAY\n4EXIT\n");

    while (1)
    {
        printf("\nEnter the Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pull();
            break;
        case 3:
            diplay();
            break;
        case 4:
            exit(0);

        default:
            printf("\nWrong Choice !!!!!!");
            break;
        }
    }
}
