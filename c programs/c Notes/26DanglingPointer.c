#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a = 2, b = 3;
    int sum = a + b;
    return &sum;
}
int main()
{
    // case 1 : DEALLOCATION OF MEMORY
    int *ptr = (int *)malloc(4 * sizeof(int));
    ptr[0] = 1;
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3] = 4;
    printf("The result Before the ptr becomes a Dangling Pointer\n");
    printf("The value at address ptr(value of ptr[0]) = %d\n", *ptr);
    printf("The value at ptr(address of ptr[0]) = %d\n\n", ptr);

    free(ptr); // now ptr becomes a Dangling Pointer
    printf("The result After the ptr becomes a Dangling Pointer\n");
    printf("The value at address ptr(value of ptr[0]) = %d\n", *ptr);
    printf("The value at ptr(address of ptr[0])  = %d\n\n", ptr);

    ptr = NULL; // ptr no longer a Dangling Pointer
    printf("The result After the ptr no longer a Dangling Pointer\n");
    printf("The value at ptr(address of ptr[0])  = %d\n\n", ptr);
    //printf("The value at adderes ptr(value of ptr[0]) = %d\n", *ptr);
    //Here if we try to print the value at adderes ptr(value of ptr[0]) then the here it stops the program
    //rest cases will not be printed

    //Case 2 : RETURNING LOCAL VARIABLES IN FUNCTION CALLS
    int *ptr2 = functionDangling();
    printf("\n\nThe address ptr2 =%d\n", ptr2); //here ptr2 points invalid location
    //printf("\n\nThe value at address ptr2 =%d\n", *ptr2);
    //Here if we try to print the value at address ptr2(value of sum) then the here it stops the program
    //rest cases will not be printed

    // case :3 VARIABLE GOING OUT SCOPE
    int *ptr3;
    {
        int i = 0;
        ptr3 = &i;
    }
    printf("\n\nThe value at address ptr3 = %d\n", *ptr3);
    //printf("\The value at ptr3 = %d\n", ptr3);
    return 0;
}
