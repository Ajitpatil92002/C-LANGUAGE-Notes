#include <stdio.h>

struct student
{
    int roll;
    char name[10];
    int marks[5];
} stu[5];

int main()
{

    printf("Enter the Details of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the roll no of %d student : ", i + 1);
        scanf("%d", &stu[i].roll);
        printf("Enter the Nmae of %d student : ", i + 1);
        scanf("%s", stu[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of %d subject of %d student : ", j + 1, i + 1);
            scanf("%d", &stu[i].marks[j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nNAME : %s\n", stu[i].name);
        printf("ROLL no : %d\n", stu[i].roll);  
        printf("MARKS of 5 subjects :");
        for(int j=0 ; j<5 ;j++)
        { 
            printf("%d ",stu[i].marks[j]);
        }
    }

    return 0;
}
