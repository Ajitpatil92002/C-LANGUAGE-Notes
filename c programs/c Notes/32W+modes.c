/* “w+”  :– 
Searches file. If the file exists, its contents are overwritten. 
If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.*/

#include <stdio.h>
int main()
{
    FILE *fp;
    char sp[30];
    char ch;
    printf("--Opening the File through w+--\n");
    fp = fopen("Modefile2.txt", "w+");

    fprintf(fp, "My Name is Ajit Patil\n");
    printf("\nEnter the content to do add in file\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    rewind(fp);
    printf("\n--The content in the File is---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    if (ferror(fp))
    {
        printf("\n---ERROR !--\n");
    }
    else
    {
        printf("\n--Read Successfully--\n");
    }
    fclose(fp);

    printf("\n--Opening the newFile through w+--\n");
    fp = fopen("Modefile3.txt", "w+");
    printf("\nEnter the content to do add in file\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    rewind(fp);
    printf("\n--The content in the File is---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    if (ferror(fp))
    {
       printf("\n----ERROR !--\n");
    }
    
    fclose(fp);

    return 0;
}