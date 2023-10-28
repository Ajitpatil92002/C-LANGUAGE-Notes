/* fputs() :- 
The fputs() function in C can be used to write to a file. It is used to write a line (character line) to the file.

Syntax :-
 fputs(const char *string, FILE *stream)
Parameters :- Constant char *string[]: It is the character array that we want to write in the file.
FILE for *stream: It is the pointer to the opened file. 
*/
/*  fgets() :-
The fget() function in C is used to read string from the stream.

Syntax :- 
 char* fgets(char *string, int length, FILE *stream)
Parameter :- char *string: It is a string which will store the data from the string.
int length :- It is an int which gives the length of string to be considered.
FILE *stream :- It is the pointer to the opened file.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char name[25];
    printf("Enter the Text which you want in the file\n");
    gets(name);

    fp = fopen("text.txt", "w");
    fputs(name, fp);
    fclose(fp);

    fp = fopen("text.txt", "r");
    fgets(name, 25, fp);
    printf("\n--- The Texts int file are --\n\n%s", name);
    fclose(fp);

    return 0;
}