/* fseek() :--  
  fseek(file_pointer,offset,position):- 
    it is used to move file pointer associated with a given file to specific position  

--->pointer to the file object that identifies the stream
--->offset : no. of Bytes to offset from position
--->position : position from where offset is added position defines the point will respect to which the file
   pointer needs to be moved . It has three values*/
/* SEEK_END : It denotes end of the file.
   SEEK_SET : It denotes starting of the file.
   SEEK_CUR : It denotes file pointer’s current position.*/

/*  ftell() :--
    in C is used to find out the position of file pointer in the file with respect to starting of the file. 
    Syntax of ftell() is :- ftell(FILE *pointer)*/
/* rewind() :--
   The rewind function sets the file position indicator for the stream pointed to by stream to the beginning of the file   
   Syntax of rewind() is :- rewind(FILE *pointer)*/  
// Note :-Before running the programm Create a file name "fseekfile.txt" and it should hvae text "I live in Bidar". 
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    // "fseekfile.txt" has a content I live in Bidar
    fp = fopen("fseekfile.txt", "r+");
    printf("\n--The content in the File is--\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fseek(fp, 10, SEEK_SET); // now is file pointer is set at 10 byte forward from starting of the file;

    fprintf(fp, "Karnataka"); // printing the string "Karnataka" from were the file pointer points;

    rewind(fp); //now the file pointer points at the starting of the file;

    printf("\n\n--The updated content in the File is--\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    printf("\n\n--The Size of the file = %d--\n", ftell(fp));
    fclose(fp);

    return 0;
}