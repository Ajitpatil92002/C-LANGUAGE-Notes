#include <stdio.h>
int main()
{
    typedef struct student
    {
        int roll;
        char name[10];
        char cllg[5];
    } stu;

    stu ajit;
    char ch;
    FILE *fp;
    fp = fopen("fwrite.txt", "wb");
    if (fp == NULL)
    {
        printf("\nFile cannot be open\n");
    }

    printf("\nEnter the roll No :");
    scanf("%d", &ajit.roll);
    printf("\nEnter the name :");
    scanf("%s", ajit.name);
    fflush(stdin);
    printf("\nEnter Collage Name :");
    scanf("%s", ajit.cllg);
    fwrite(&ajit, sizeof(ajit), 1, fp);
    fclose(fp);

    fp = fopen("fwrite.txt", "rb");
    fread(&ajit,sizeof(ajit),1,fp);
    printf("\nRoll No :%d",ajit.roll);
    printf("\nName :%s",ajit.name);
    printf("\nCollage :%s",ajit.cllg);
    fclose(fp);

    return 0;
}