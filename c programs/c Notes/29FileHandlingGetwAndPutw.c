/*putw( ) :-
 putw( ) function is used for writing a number into file.

Syntax :- putw (int num, FILE *fp); 
*/
/* getw( ) :-
 getw( ) function is used for reading a number from a file.

Syntax :- int getw (FILE *fp); 
*/
#include <stdio.h>
int main()
{
    FILE *fp;
    int n;
    printf("Enter the how many integers want to write in the file : ");
    scanf("%d", &n);
    fp = fopen("text.txt", "w");
    for (int i = 1; i <= n; i++)
    {
        int num;
        printf("\nEnter the %d integer which you want to write in file : ", i);
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);

    fp = fopen("text.txt", "r");
    int no;
    printf("\n\nThe integers in the file are :\n");
    while ((no = getw(fp)) != EOF)
    {
        printf("%d ", no);
    }
    if (ferror(fp))
    {
        printf("\n--ERROR !--\n");
    }
    else
    {
        printf("\n--Read SUSSCESSFULLY !--\n");
    }
    

    fclose(fp);

    return 0;
}