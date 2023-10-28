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
   It reads a single character from the keyboard and displays immediately on output screen without waiting for enter key.*/

#include <stdio.h>
#include <conio.h>
int main()
{
    char ch, ch1, ch2;
    printf("---getchar()---\n");
    printf("Enter any char : ");
    ch = getchar();
    printf("---%c---\n", ch);

    printf("\n----getche()----\n");
    printf("Enter any char : ");
    ch1 = getche();
    printf("\n---%c---\n", ch1);

    printf("\n---getch()---\n");
    printf("Enter any char : ");
    ch2 = getch();
    printf("\n---%c---\n", ch2);

    return 0;
}