// To use time library of C
#include <time.h>
#include <windows.h>


// user defined function.
void delay(float number_of_seconds)
{
    // Converting time into milli_seconds
    float milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

// user defined function.
void gotoxy(int x1, int y1)
{
    COORD c;
    c.X = x1;
    c.Y = y1;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
