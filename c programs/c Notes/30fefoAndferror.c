/*  feof(FILE *stream) :- tests the end-of-file indicator for the given stream.
   This function returns a non-zero value when End-of-File indicator associated with the stream is set,
   else zero is returned.
*/
/*  ferror(FILE *stream) :- tests the error indicator for the given stream.
    If the error indicator associated with the stream was set, 
    the function returns a non-zero value else, it returns a zero value.
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("newone.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    printf("\n-----output---\n");
    fp = fopen("newone.txt", "r");
    while ((ch = fgetc(fp)) != EOF) // if we use ((ch = fgetc(fp)) != EOF) we get error msg as output
    {
        printf("%c", ch);
    }
    if (feof(fp))
    {
        printf("\n---File Read successfully---\n");
    }
    else
    {
        printf("\n---The file is not Read is Successfully\n");
    }

    if (ferror(fp))
    {
        printf("----ERROR !---");
    }
    fclose(fp);

    return 0;
}