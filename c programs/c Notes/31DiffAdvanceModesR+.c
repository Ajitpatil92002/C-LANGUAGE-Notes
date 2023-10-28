/* Append Mode :--
    “a” :– Searches file. If the file is opened successfully fopen() loads it into memory 
    and sets up a pointer that points to the last character in it. 
    If the file doesn’t exist, a new file is created. Returns NULL, if unable to open the file. 
    The file is opened only for appending(writing at end of file).*/

/*	r+ mode :--
    “r+” :– Searches file. If the file is opened successfully fopen() loads it into memory 
    and sets up a pointer that points to the first character in it. 
    If the file doesn’t exist, a new file is not created. Returns NULL, if unable to open the file. 
    The file is opened  for both for both reading and writing.*/
   
#include <stdio.h>
int main()
{
    FILE *fp;
    char string[] = {"My name is Ajit PAtil"};
    char ch;
    /*-------File opening through Append Mode----*/
    fp = fopen("Modefile.txt", "a");
    fputs(string, fp);
    fclose(fp);

    /*-----FIle opening through r+ Mode-------*/
    printf("\n--Opening the File through r+ Mode--\n\n");
    fp = fopen("Modefile.txt", "r+");
    printf("\n--The content in the File is---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n\nEnter the content to do add in file\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
     if (ferror(fp))
    {
       printf("\n----ERROR !--\n");
    }
    else
    {
        printf("\n--Read Succesfully--\n");
    }
    rewind(fp);
    printf("\n--The content in the File is---\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}