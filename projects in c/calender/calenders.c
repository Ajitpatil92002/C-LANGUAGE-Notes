#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int get_1st_weekday(int year)
{
    int d;
    d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
    return d;
}

int calenderPrint(int year)
{
    int month;
    int days, weekdays = 0, startingDays = 0;
    int monthday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        monthday[1] = 29;
    startingDays = get_1st_weekday(year);
    char *months[] = {"Januray", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (month = 0; month < 12; month++)
    {
        printf("\n\n--------------%s----------------------\n", months[month]);
        printf("\n  Sun  Mon  Tue  Wed  Thur  Fri  Sat\n");
        for (weekdays = 0; weekdays < startingDays; weekdays++)
        {
            printf("     ");
        }
        for (days = 1; days <= monthday[month]; days++)
        {
            printf("%5d", days);
            if (++weekdays > 6)
            {
                printf("\n");
                weekdays = 0;
            }
            startingDays = weekdays;
        }
    }
}
int main()
{    
    system("color 3F");
    int year;
    printf("Calender : ");
    scanf("%d", &year);
    calenderPrint(year);
    char ch = getch();
    return 0;
}
