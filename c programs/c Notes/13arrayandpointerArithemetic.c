#include <stdio.h>
int main()
{

    int a = 2;
    int *b = &a;
    printf("These are the pointer Arithemetic\n");
    printf("Adders of a %d\n", &a);
    printf("The value  of b %d\n", b);
    printf("Adders of b %d\n", &b);
    printf("%d\n", b + 1);
    printf("%d\n", b - 2);

    printf("\nThese are the values\n");
    printf("%d\n", *b);
    printf("%d\n", *b + 1);
    printf("%d\n", *b - 1);

    int arr[] = {1, 2, 3, 4};
    int *arrptr = arr;
    printf("\nArray Arithemetic\n");
    arrptr++;
    printf("the Address of the element 1 of the array is %d\n", &arr[0]);
    printf("the Adderess of the element 1 of the array is %d\n", arr);
    printf("\nthe Address of the element 2nd of the array is %d\n", &arr[1]);
    printf("the Address of the element 2nd of the array is %d\n", arr + 1);
    printf("\nthe Address of the element 3rd of the array is %d\n", &arr[2]);
    printf("the Address of the element 3rd of the array is %d\n", arr + 2);
    printf("\nthe Address of the element 4th of the array is %d\n", &arr[3]);
    printf("the Address of the element 4th of the array is %d\n", arr + 3);

    printf("\nthe value at Address of the element 1 of the array is %d\n", *&arr[0]);
    printf("the value at Address of the element 1 of the array is %d\n", *arr);
    printf("\nthe value at Address of the element 2nd of the array is %d\n", *&arr[1]);
    printf("the value at Address of the element 2nd of the array is %d\n", *arr + 1);
    printf("\nthe value at Address of the element 3rd of the array is %d\n", *&arr[2]);
    printf("the value at Address of the element 3rd of the array is %d\n", *arr + 2);
    printf("\nthe value at Address of the element 4th of the array is %d\n", *&arr[3]);
    printf("the value at Address of the element 4th of the array is %d\n", *arr + 3);

    return 0;
}
