#include <stdio.h>
struct student
{
    int roll;
    char name[10];
};

int main()
{
    struct student stu;
    struct student *p;
    p = &stu;
    printf("Enter the Student roll No. :");
    scanf("%d", &p->roll);
    printf("Enter Stdent Name :");
    scanf("%s", p->name);

    printf("\nRollNO. : %d\n", (*p).roll);
    printf("NAME : %s\n", (*p).name);

    return 0;
}
