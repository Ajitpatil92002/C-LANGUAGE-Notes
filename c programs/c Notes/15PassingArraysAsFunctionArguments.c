#include <stdio.h>
void sum(int arr[])
{
    int sum_of_array = 0;
    for (int i = 0; i < 4; i++)
    {
        sum_of_array += arr[i];
    }
    printf("The sum of array is %d\n", sum_of_array);
}

void add(int *ptr)
{
    int add_of_array = 0;
    for (int i = 0; i < 4; i++)
    {
        add_of_array += *(ptr + i); // (or)ptr[i];
    }
    printf("The sum is %d\n", add_of_array);
    ptr[2] = 1234; //here we are changing the value of second element.(which reflects in main function)
}
int main()
{
    int array[] = {12, 13, 14, 15};
    printf("The value of array[2] is %d\n", array[2]);
    printf("\nDeclaring function with Array as parameter \n");
    sum(array); // Inside the sum,if we change the value of array it will get reflects in mainfunction.

    printf("\nDeclaring function with pointer as a parameter\n");
    add(array);
    printf("\nThe value of array[2] is %d\n", array[2]); //Here the value of array[2] changes from 24 to 1234.*/
    return 0;
}
