#include <stdio.h>

struct student
{
    int roll;
    char name[30];
    int marks[5]; 
};

void disp(struct student stu)
{
    printf("\n\nEnter NAME : "); 
    scanf("%s",&stu.name);
    //gets(stu.name); 
    printf("ENTER ROLL NO : "); 
    scanf("%d",&stu.roll); 
    for (int i = 0; i < 5; i++)
    {
        printf("ENTER MARKS OF %d SUBJECT : ",i+1); 
        scanf(" %d",&stu.marks[i]);
    } 

    printf("NAME : %s\n",stu.name); 
    printf("ROLL NO : %d\n",stu.roll); 
    printf("MARKS : "); 
    for (int i = 0; i < 5; i++)
    {
        printf(" %d",stu.marks[i]);
    }
    
    
}
int main()
{
    struct student s1, s2,s3;
    disp(s1);
    disp(s2);
    disp(s3);
    return 0;
}
