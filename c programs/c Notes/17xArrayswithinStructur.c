#include <stdio.h>

struct student
{
    char name[10];
    int marks[5]; 
    
};

int main()
{
    struct student std;

    printf("Enter name: ");
    gets(std.name);

    printf("Enter marks:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Marks in subject %d: ", i + 1);
        scanf("%d", &std.marks[i]);
    }

    printf("NAME : %s\n", std.name);
    printf("MARKS : ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", std.marks[i]);
    } 

    printf("\nSIZE = %d",sizeof(std));
    return 0;
}