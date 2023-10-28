#include <stdio.h>
int main()
{

    int a = 22;
    int *p = NULL;
    printf("The value of pointer is : %d ", p);

    int *ptr = NULL;
    if (ptr != NULL)
    {
        printf("\nThe value of pointer is : %d", *p);
    }
    else
    {
        printf("\nThe pointer is a null pointer and cannot be dereferenced\n");
    }

    int *ptr1;

    printf("\nThe value of pointer is : %d", ptr1);

    return 0;
}
