#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include "times.c"
#include "cursor.c"

void draw();
void set();
void input();
void move();

int rows = 40, coloumns = 100, score, gameover;
int x, y, fruitx, fruity, flag;
int tailx[100], taily[100], piece = 0, count,scount;
char name[20];

int main()
{
    char temp, option;
    system("Color 70");

    system("cls");
    printf("-------------------------------------------------------------------------------------------------\n\n");
    printf("\t\tW E L L__C O M E   TO    S N A K __G A M E    %c  %c  %c", 3, 3, 3);
    printf("\n\n\n\n\t\t\tDevloped   By   :-      A J I T__P A T I L   %c", 3);
    printf("\n\n\n\t\t\t\t  PLEASE____WAIT.........");
    printf("\n\n\n\t\t\t\t    L O A D I N G ");
    for (int i = 0; i < 15; i++)
    {
        printf("%c%c%c", 220, 220, 220);
       ;
    }
    printf("\n\n\n\t\t\t\tEnter any Key........");
    printf("\n-------------------------------------------------------------------------------------------------");
    temp = getch();

    while (1)
    {
        system("cls");
        system("Color 70");
        printf("\n\n\t\t\t\t~ ~ S N A K E__G A M E ~ ~ \n\n");
        printf("-------------------------------------------------------------------------------------------------\n\n");
        printf("\n\n\t\t\t\t====================================");
        printf("\n\n\t\t\t\t\t 1. START THE GAME");
        printf("\n\n\t\t\t\t\t 2. EXIT");
        printf("\n\n\t\t\t\t====================================");
        printf("\n\n\t\t\t\tEnter Your Option : ");
        option = getche();
        temp = getch();

        switch (option)
        {
        case '1':
            system("cls");
            printf("-------------------------------------------------------------------------------------------------\n\n");
            printf("\n\n\t\t\t\t====================================");
            printf("\n\n\t\t\t\t\t Enter your Name : ");
            gets(name);
            printf("\n\n\t\t\t\t====================================");

            system("cls");
            system("color F2");

            piece = 0;
            scount = 1;
            count = 0;
            set();
            while (gameover != 1)
            {
                draw();
                input();
                move();
            }
            system("cls");
            system("Color 70");
            gotoxy(50, 2);
            printf("~ ~ S N A K E__G A M E ~ ~");
            gotoxy(30, 4);
            printf("=====================================================");
            gotoxy(50, 6);
            printf("GAME OVER !!!!!!!");
            gotoxy(50, 8);
            printf("Total Food Eaten : %d", count);
            gotoxy(50, 10);
            printf("Size of Snake is : %d ",scount);
            gotoxy(50,12);
            printf("%s Your SCORE IS : %d", name, score);
            gotoxy(30, 14);
            printf("=====================================================");

            temp = getch();
            break;

        case '2':
            exit(0);
        }
        delay(1);
    }

    return 0;
}

void draw()
{
    system("cls");
    delay(0.00000000001);

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < 40; k++)
        {
            printf(" ");
        }

        for (int j = 0; j < coloumns; j++)
        {
            if (i == 0 || j == 0 || i == rows - 1 || j == coloumns - 1)
            {
                printf("%c", 223);
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("%c", 2);
                }
                else if (i == fruitx && j == fruity)
                {
                    printf("%c", 223);
                }
                else
                {
                    int c = 0;
                    for (int m = 0; m < piece; m++)
                    {
                        if (i == tailx[m] && j == taily[m])
                        {
                            printf("%c", 223);
                            c = 1;
                        }
                    }
                    if (c == 0)
                    {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
}
void set()
{
    x = rows / 2, y = coloumns / 2;
    gameover = 0;
label1:
    fruitx = rand() % 30;
    if (fruitx == 0)
    {
        goto label1;
    }

label2:
    fruity = rand() % 100;
    if (fruity == 0)
    {
        goto label2;
    }
    score = 0;
    piece++;
}
void input()
{
    if (kbhit())
    {
        switch (getch())
        {
        case 'a':
            flag = 1;
            break;
        case 's':
            flag = 2;
            break;
        case 'w':
            flag = 3;
            break;
        case 'z':
            flag = 4;
            break;

        case 'x':
            gameover = 1;
            break;
        }
    }
}

void move()
{

    int prevx, prevy, prev2x, prev2y;
    prevx = tailx[0];
    prevy = taily[0];
    tailx[0] = x;
    taily[0] = y;
    for (int i = 1; i <= piece; i++)
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;

    default:
        break;
    }
    if (x < 0 || x > rows || y < 0 || y > coloumns)
    {
        gameover = 1;
    }

    if (x == fruitx && y == fruity)
    {
    label3:
        fruitx = rand() % 30;
        if (fruitx == 0)
        {
            goto label3;
        }

    label4:
        fruity = rand() % 100;
        if (fruity == 0)
        {
            goto label4;
        }
        score = score + 10;
        piece++;
        count++;
        scount++;
    }
    
}
