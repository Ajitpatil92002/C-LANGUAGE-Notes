#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int roll;
} stu;

int main()
{
    stu s1, s2;
    scanf("%s", s1.name);
    scanf("%s", s2.name);
    printf("%s\n", s1.name);
    printf("%s\n", s2.name);

    typedef int *intp;
    int b=2;
    intp a=&b;
    printf("\n%d\n",a);
    printf("%d\n",*a);

    return 0;
}
