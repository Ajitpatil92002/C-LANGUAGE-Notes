#include <stdio.h>
#include <conio.h>
#include "cursor.c"
#include "times.c"

char board[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player1[20], player2[20];
void createboard();
void play();
char checkin();
void resetboard();

int main()
{
    system("color F0");
    char option, temp;
    system("cls");

    printf("-------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tW E L L__C O M E   TO    T I C__T A c__T O E__G A M E    %c  %c  %c", 3, 3, 3);
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
    printf("\n-------------------------------------------------------------------------------------------------\n\n");
    temp = getch();
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
        scanf("%c", &option);

        switch (option)
        {
        case '1':
            system("cls");
            gotoxy(30, 2);
            printf("T I C__T A C__T O E______G A M E");
            resetboard();
            play();
            temp = getch();
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
    char choice, check, count = 0, temp;
    gotoxy(15, 4);
    printf("-------------------------------------------------------------------");
    gotoxy(30, 6);
    printf("Who will chosse the 'X' : ");
    fflush(stdin);
    gets(player1);
    gotoxy(30, 8);
    printf("Who will chosse the 'O' : ");
    fflush(stdin);
    gets(player2);
    gotoxy(15, 10);
    printf("-------------------------------------------------------------------");
    gotoxy(30, 12);
    printf("Enter any Key........");
    gotoxy(30, 13);
    temp = getch();
    while (1)
    {
        system("cls");
        gotoxy(30, 2);
        printf("T I C__T A C__T O E______G A M E");
        gotoxy(15, 4);
        printf("-------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("%s 's turn : ", player1);
        fflush(stdin);
        scanf("%c", &choice);
        count++;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (choice == board[i][j])
                {
                    if (count % 2 == 0)
                        board[i][j] = 'O';
                    else
                        board[i][j] = 'X';
                }
            }
        }
        createboard();
        check = checkin();
        if (check == 'X')
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("CONGRATULATION %s you Won the match %c !", player1, 3);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        else if (check == 'Y')
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("CONGRATULATION %s you Won the match %c !", player2, 3);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        else if (check == ' ' && count == 9)
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("Match DRAW %c !", 1);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        gotoxy(20, 22);
        printf("===============================================");
        gotoxy(30, 23);
        printf("Enter any key for %s's turn.....", player2);
        gotoxy(20, 24);
        printf("===============================================");
        fflush(stdin);
        gotoxy(30, 25);
        temp = getch();
        system("cls");
        gotoxy(30, 2);
        printf("T I C__T A C__T O E______G A M E");
        gotoxy(15, 4);
        printf("-------------------------------------------------------------------");
        gotoxy(30, 6);
        printf("%s 's turn : ", player2);
        fflush(stdin);
        scanf("%c", &choice);
        count++;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (choice == board[i][j])
                {
                    if (count % 2 == 0)
                        board[i][j] = 'O';
                    else
                        board[i][j] = 'X';
                }
            }
        }
        createboard();
        check = checkin();
        if (check == 'X')
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("CONGRATULATION %s you Won the match %c !", player1, 3);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        else if (check == 'O')
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("CONGRATULATION %s you Won the match %c !", player2, 3);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        else if (check == ' ' && count == 9)
        {
            gotoxy(20, 21);
            printf("=========================================================");
            gotoxy(30, 22);
            printf("Match DRAW %c !", 1);
            gotoxy(20, 23);
            printf("=========================================================");
            gotoxy(30, 24);
            printf("Enter any Key to retun to MAIN MENU......");
            break;
        }
        gotoxy(20, 21);
        printf("===============================================");
        gotoxy(30, 22);
        printf("Enter any key for %s's turn.....", player1);
        gotoxy(20, 23);
        printf("===============================================");
        //fflush(stdin);
        temp = getch();
    }
}

char checkin()
{
    // Horizontal match
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
    {
        return 'X';
    }
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
    {
        return 'X';
    }
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
    {
        return 'X';
    }
    // verticle match
    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
    {
        return 'X';
    }
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
    {
        return 'X';
    }
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
    {
        return 'X';
    }
    // cross match
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
    {
        return 'X';
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
    {
        return 'X';
    }
    // Horizontal match
    else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
    {
        return 'O';
    }
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
    {
        return 'O';
    }
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
    {
        return 'O';
    }
    // verticle match
    else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
    {
        return 'O';
    }
    else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
    {
        return 'O';
    }
    else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
    {
        return 'O';
    }
    // cross match
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
    {
        return 'O';
    }
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
    {
        return 'O';
    }
    else
        return ' ';
}
void createboard()
{  
    gotoxy(30, 8);
    printf(" ====================\n");
    gotoxy(30, 9);
    printf("|      |      |      |");
    gotoxy(30, 10);
    printf("|  %c   |  %c   |  %c   |", board[0][0], board[0][1], board[0][2]);
    gotoxy(30, 11);
    printf("|      |      |      |");
    gotoxy(30, 12);
    printf("----------------------");
    gotoxy(30, 13);
    printf("|      |      |      |");
    gotoxy(30, 14);
    printf("|  %c   |  %c   |  %c   |", board[1][0], board[1][1], board[1][2]);
    gotoxy(30, 15);
    printf("|      |      |      |");
    gotoxy(30, 16);
    printf("----------------------");
    gotoxy(30, 17);
    printf("|      |      |      |");
    gotoxy(30, 18);
    printf("|  %c   |  %c   |  %c   |", board[2][0], board[2][1], board[2][2]);
    gotoxy(30, 19);
    printf("|      |      |      |");
    gotoxy(30, 20);
    printf(" ====================");
}
void resetboard()
{
    board[0][0] = '1';
    board[0][1] = '2';
    board[0][2] = '3';
    board[1][0] = '4';
    board[1][1] = '5';
    board[1][2] = '6';
    board[2][0] = '7';
    board[2][1] = '8';
    board[2][2] = '9';
}

/*void createboard()
{

    printf("\n ======|======|======\n");
    for (int i = 0; i < 3; i++)
    {
        printf("|      |      |      |\n");
        for (int j = 0; j < 3; j++)
        {
            printf("|  %c   ", board[i][j]);
        }
        if (i == 0 || i == 1)
            printf("|\n|      |      |      |\n-----------------------\n");
        else
            printf("|\n|      |      |      |\n");
    }

    printf(" ======|======|======\n");
}*/