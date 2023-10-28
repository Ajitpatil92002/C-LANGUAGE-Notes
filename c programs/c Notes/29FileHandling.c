/*Creating or opening file using fopen() :----
 The fopen() function is used to create a new file or open an existing file in C. 
 The fopen function is defined in the stdio.h header file.

the syntax for creation of a new file or opening a file :-   file = fopen(“file_name”, “mode”) ;
NOTE :- This will search for a file named text.txt in the current directory. 
If the file exists, it will open the file otherwise it will create a new file named “text.txt” 
and when we open it with write mode (specified using “w”).
This is a common syntax for both opening and creating a file in C. 
 */
/* fputc() :--
The fputc() function is used to write a single character to the file.

Syntax :- fputc(char character , FILE *stream)
Parameters :- char character : It is the character that we want to write in the file.
FILE for *stream: It is the pointer to the opened file.*/
/* fgetc() ;--
The fgetc() function in C is used to return a single character from the file. 
It gets a character from the file and returns EOF at the end of file.

Syntax :- char* fgetc(FILE *stream)
Parameter :- FILE *stream: It is the pointer to the opened file.
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "w");
    printf("\nInput line and press EOL\n");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }
    fclose(fp);

    printf("------output----\n");

    fp = fopen("file.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}