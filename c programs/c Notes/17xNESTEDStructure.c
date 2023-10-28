#include <stdio.h>
struct student
{
    int roll;
    char name[10];
    struct stu_mark
    {
        char sub[10];
        int m;
    } mark;
};
int main()
{
    struct student stu;
    printf("Enter the ROLL NO : ");
    scanf("%d", &stu.roll);
    printf("Enter NAME : ");
    scanf("%s ", &stu.name);
    printf("Enter the subject : ");
    gets(stu.mark.sub);
    printf("\nEnter MARKs : ");
    scanf("%d", &stu.mark.m);

    printf("\nRoll No. : %d\n", stu.roll);
    printf("NAMe : %s\n", stu.name);
    printf("Subject : %s\n", stu.mark.sub);
    printf("Marks : %d\n", stu.mark.m);
    return 0;
}
