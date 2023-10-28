#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int num = 19;
    char string[25];
    printf("Enter your Age : ");
    scanf("%d", &num);
    printf("Enter your Name : ");
    scanf("%s", string);
    //gets(string);
    //getchar();
    fp = fopen("file.txt", "w");
    fprintf(fp, "Name:%s\n", string);
    fprintf(fp, "Age:%d\n", num);
    fclose(fp);

    fp = fopen("file.txt", "r");
    char s1[10], s2[10], s3[10];
    //fscanf(fp, "%s %s %s %d", s1, s2, s3, &num);
    //printf("%s %s\n%s %d", s1, s2, s3, num);
    char file[100];
    while (fscanf(fp, "%s", file) != EOF)
    {
        puts(file);
    }

    return 0;
}
