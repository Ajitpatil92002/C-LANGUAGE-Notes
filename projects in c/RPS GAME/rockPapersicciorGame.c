#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "cursor.c"
#include "times.c"

int random(int n);
int cmp(int n);
int game(char you, char cmp);
void play();

char name[20];
int main()
{
    char t, option;
    system("color F0");

    system("cls");
    printf("-------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tW E L L__C O M E   TO    R O C K__P A P E R__S I C C I O R__G A M E    %c  %c  %c", 3, 3, 3);
    printf("\n\n\n\t\t\t\tDevloped At Date  : 24 OCTOBER 2021");
    printf("\n\n\n\n\t\t\tDevloped   By   :-      A J I T__P A T I L   %c", 3);
    printf("\n\n\n\t\t\t\t  PLEASE____WAIT.........");
    printf("\n\n\n\t\t\t\t    L O A D I N G ");
    for (int i = 0; i < 15; i++)
    {
        printf("%c%c%c", 220, 220, 220);
        //_sleep((unsigned long)1);
        delay(0.1); // Here this function is made in times.c(file) in My project Directory ;
    }
    printf("\n\n\n\t\t\t\tEnter any Key........");
    printf("\n-------------------------------------------------------------------------------------------------");
    t = getch();

    while (1)
    {
        system("cls");
        printf("-------------------------------------------------------------------------------------------------\n\n");
        printf("\n\t\t\t\t\tM A I N___M E N U");
        printf("\n\n\t\t\t\t====================================");
        printf("\n\n\t\t\t\t\t 1. Start the Game ");
        printf("\n\n\t\t\t\t\t 2. End the Game ");

        printf("\n\n\t\t\t\t====================================");
        printf("\n\n\t\t\t\tEnter the choice : ");
        fflush(stdin);
        scanf("%c", &option);

        switch (option)
        {
        case '1':
            play();
            break;

        case '2':
            exit(0);
            break;
        }
    }
    return 0;
}

void play()
{
    int playerscore = 0, compscore = 0;
    char playerChar, campChar, t;
    int temp, result;
    system("cls");
    gotoxy(30, 2);
    printf("~ ~ R O C K__P A P E R__S I C C I O R__G A M E ~ ~");
    gotoxy(10, 4);
    printf("------------------------------------------------------------------------------");
    gotoxy(30, 6);
    printf("Enter Player Name : ");
    fflush(stdin);
    gets(name);
    gotoxy(25, 8);
    printf("=====================================");
    gotoxy(30, 10);
    printf(" ~ ~ INSTUCTION ~ ~");
    gotoxy(30, 12);
    printf("Enter 'r' for ROCK");
    gotoxy(30, 13);
    printf("Enter 'p' for PAPER");
    gotoxy(30, 14);
    printf("Enter 's' for SICCIOR");
    gotoxy(25, 16);
    printf("=====================================");
    gotoxy(10, 18);
    printf("------------------------------------------------------------------------------");
    t = getch();
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        gotoxy(30, 2);
        printf("~ ~ R O C K__P A P E R__S I C C I O R__G A M E ~ ~");
        gotoxy(10, 4);
        printf("------------------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("%s's Turn : ", name);
        scanf("%c", &playerChar);
        getchar();
        gotoxy(30, 8);
        printf("%s YOu Chose %c", name, playerChar);

        temp = random(3);
        campChar = cmp(temp);
        gotoxy(30, 10);
        printf("Computer Chose %c", campChar);

        result = game(playerChar, campChar);

        if (result == 1)
        {
            playerscore += 1;
            gotoxy(20, 11);
            printf("=================================");
            gotoxy(30, 13);
            printf("%s YOU GOT 1 Point !", name);
            gotoxy(20, 15);
            printf("=================================");
        }
        if (result == 0)
        {
            compscore += 1;
            gotoxy(20, 11);
            printf("=================================");
            gotoxy(30, 13);
            printf("COMPuTER GOT a Point !");
            gotoxy(20, 15);
            printf("=================================");
        }
        if (result == -1)
        {
            gotoxy(20, 11);
            printf("=================================");
            gotoxy(30, 13);
            printf("IT'S DRAW !");
            gotoxy(20, 15);
            printf("=================================");
        }
        gotoxy(10, 17);
        printf("------------------------------------------------------------------------------");
        gotoxy(30, 19);
        printf("%s SCORE : %d", name, playerscore);
        gotoxy(30, 20);
        printf("COMPUTER SCORE : %d", compscore);
        gotoxy(10, 22);
        printf("------------------------------------------------------------------------------");
        t = getch();
    }
    if (playerscore > compscore)
    {
        system("cls");
        gotoxy(30, 2);
        printf("~ ~ R O C K__P A P E R__S I C C I O R__G A M E ~ ~");
        gotoxy(10, 4);
        printf("------------------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("________R E S U L T____________");
        gotoxy(20, 8);
        printf("========================================");
        gotoxy(30, 10);
        printf("%s YOU WIN !", name);
        gotoxy(20, 12);
        printf("========================================");
    }
    else if (playerscore < compscore)
    {
        system("cls");
        gotoxy(30, 2);
        printf("~ ~ R O C K__P A P E R__S I C C I O R__G A M E ~ ~");
        gotoxy(10, 4);
        printf("------------------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("_________R E S U L T____________");
        gotoxy(20, 8);
        printf("========================================");
        gotoxy(30, 10);
        printf("%s YOU lOSSE !", name);
        gotoxy(20, 12);
        printf("========================================");
    }
    else
    {
        system("cls");
        gotoxy(30, 2);
        printf("~ ~ R O C K__P A P E R__S I C C I O R__G A M E ~ ~");
        gotoxy(10, 4);
        printf("------------------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("________R E S U L T____________");
        gotoxy(20, 8);
        printf("========================================");
        gotoxy(30, 10);
        printf("IT Draw !");
        gotoxy(20, 12);
        printf("========================================");
    }
    gotoxy(20,14);
    printf("Enter any Key to return to Main Menu ........");
    t = getch();
}
int random(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int cmp(int n)
{
    if (n == 0)
        return 'r';
    if (n == 1)
        return 'p';
    if (n == 2)
        return 's';
}
int game(char you, char cmp)
{
    if (you == cmp)
    {
        return -1;
    }
    if (you == 'r' && cmp == 's')
    {
        return 1;
    }
    else if (you == 's' && cmp == 'r')
    {
        return 0;
    }
    if (you == 'p' && cmp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && cmp == 'p')
    {
        return 0;
    }
    if (you == 'p' && cmp == 's')
    {
        return 0;
    }
    else if (you == 's' && cmp == 'p')
    {
        return 1;
    }
}
