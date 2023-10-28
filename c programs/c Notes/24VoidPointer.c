#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 22;
    char b = 'a';
    void *c;
    c = &a;
    printf("%d\n", (*(int *)c));
    c = &b;
    printf("%c\n", *(int *)c);

    int arr[2] = {1, 2};
    void *ptr = &arr;
    printf("%d\n", *(int *)ptr);

    ptr = ptr + sizeof(int);
    printf("%d\n", *(int *)ptr);

   

    return 0;
}
