/* “a+” MODE – 
Searches file. If the file is opened successfully fopen( ) loads it into memory 
and sets up a pointer which points to the last character in it. If the file doesn’t exist,
 a new file is created. Returns NULL, if unable to open file. 
 */
/* Note :- Before Running this program create a file name :-"file.txt" and write a any text in it*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("file.txt", "a+");
    
    printf("\n--The content in the file---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fprintf(fp, " And I am Indian");
    rewind(fp);
    printf("\n\n--The content in the file---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n\nThe SIze of the File = %d\n",ftell(fp));
    if (ferror(fp))
    {
        printf("\n---ERROR !---\n");    }
    else
    {
        printf("\n---File Read SUCCESSFULLY---\n");
    }

    fclose(fp);
    return 0;
}
