
/*Creating or opening file using fopen() :----
 The fopen() function is used to create a new file or open an existing file in C.
 The fopen function is defined in the stdio.h header file.

the syntax for creation of a new file or opening a file :-   file = fopen(“file_name”, “mode”) ;
NOTE :- This will search for a file named text.txt in the current directory.
If the file exists, it will open the file otherwise it will create a new file named “text.txt”
and when we open it with write mode (specified using “w”).
This is a common syntax for both opening and creating a file in C.
 */

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

/* “w+”  :–
Searches file. If the file exists, its contents are overwritten.
If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.*/

/* “a+” MODE –
Searches file. If the file is opened successfully fopen( ) loads it into memory
and sets up a pointer which points to the last character in it. If the file doesn’t exist,
 a new file is created. Returns NULL, if unable to open file.
 */

/* The fread() function reads the entire record at a time.
Syntax :-
fread( & structure variable, size of (structure variable), no of records, file pointer);
On success, fread() and fwrite() return the number of items read or written. 
This number equals the number of bytes transferred only when size is 1. 
If an error occurs, or the end of the file is reached, the return value is a short item count (or zero).*/

/*The fwrite() function writes an entire record at a time.
Syntax :-
fwrite( & structure variable , size of structure variable, no of records, file pointer);
*/

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
/*putw( ) :-
 putw( ) function is used for writing a number into file.

Syntax :- putw (int num, FILE *fp);
*/
/* getw( ) :-
 getw( ) function is used for reading a number from a file.

Syntax :- int getw (FILE *fp);
*/
/*1. getchar() :-- (<stdio.h>)
    To input a single charcter with return (Enter)
    The difference between getc() and getchar() is getc() can read from any input stream,
    but getchar() reads from standard input. So getchar() is equivalent to getc(stdin).*/
/*2. getche() :-- (conio.h)
   To input a single charcter with echo (display) but without return
    it reads also a single character from keyboard. But it does not use any buffer,
    so the entered character is immediately returned without waiting for the enter key.*/
/*3. getch() :-- (conio.h)
   To input a single charcter without echo and without return
   Like getch(), this is also a non-standard function present in conio.h.
   It reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.
   */
