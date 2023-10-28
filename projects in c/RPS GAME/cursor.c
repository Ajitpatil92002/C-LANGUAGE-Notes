#include <windows.h>

void gotoxy(int x1, int y1)
{
    COORD c;
    c.X = x1;
    c.Y = y1;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
