#include <stdio.h>
// #include <conio.h>
#include <string.h>
//In this file i defined a function ( 'delay()' ) which slow down the run time.
//In this file i defined a function ( 'gotoxy()' ) which  places cursor at a particular position on screen (or window).
// #include "contactstructure.c" // In this file i defined the struct of contact deatials . 
#include "contactfunction.c"  // In this file all function which is required for the project are defined

int main()
{
    system("cls");
    system("Color 70");
    char password[30], originalpass[30], ch, option, temp;
    FILE *fp;

    printf("-------------------------------------------------------------------------------------------------\n\n");

    printf("\n\t\t\t\t\tEnter Password : ");
    int i = 0;
    while (1)
    {
        ch = getch(); // unformated input function
        if (ch == 13) // Here 13 is Assci code of "Enter Key"
        {
            password[i] = '\0'; // if user enter the "Enter Key" then  it will stores the NULL terminating char exits from the loop
            break;
        }
        password[i++] = ch; // storing the entered password in the password array ;
        printf("*");
    }

    // Reading data from the file ;
    fp = fopen("password.txt", "r");
    fgets(originalpass, 30, fp); // Here reading the data from the file (password) and storing it in 'originalpass'(i.e :-ARRAY)
    fclose(fp);

    if (strcmp(originalpass, password) != 0) // comparing the entered password with the original password
    {
        printf("\n\n\t\t\t\t\tIncorrect Password"); // if entered password is wrong then it will exits from the program
        printf("\n-------------------------------------------------------------------------------------------------\n\n");
        exit(0);
    }
    else
    {
        printf("\n\n\t\t\t\t\tCorrect Password\n\t\t\t\t\tEnter any key......."); // if Entered password is correct it will print this following statement
        temp = getch();
        printf("-------------------------------------------------------------------------------------------------\n\n");

        system("cls"); // Here we are clearing the Screen if Entered password is correct

        printf("-------------------------------------------------------------------------------------------------\n\n");
        printf("\t\tW E L L__C O M E   TO    C O N T A C T    M A N A G E R   %c  %c  %c", 3, 3, 3);
        printf("\n\n\n\t\t\t\tDevloped At Date  : 16 OCTOBER 2021");
        printf("\n\n\n\n\t\t\tDevloped   By   :-      A J I T__P A T I L   %c", 3);
        printf("\n\n\n\t\t\t\t  PLEASE____WAIT.........");
        printf("\n\n\n\t\t\t\t    L O A D I N G ");
        for (int i = 0; i < 15; i++)
        {
            printf("%c%c%c", 220, 220, 220);
            // sleep((unsigned long)1);
            delay(0.1); // Here this function is made in times.c(file) in My project Directory ;
        }
        printf("\n\n\n\t\t\t\tSUCCESSFULLY Loaded Enter any Key........");
        printf("\n-------------------------------------------------------------------------------------------------\n\n");

        temp = getch();
        while (1)
        {
            system("cls");
            // MAIN MENU
            printf("-------------------------------------------------------------------------------------------------\n\n");
            printf("\n\t\t\t\t\tM A I N___M E N U");
            printf("\n\n\t\t\t\t====================================");
            printf("\n\n\t\t\t\t\t 1. Add new Contact");
            printf("\n\n\t\t\t\t\t 2. Editing");
            printf("\n\n\t\t\t\t\t 3. Delete Contact");
            printf("\n\n\t\t\t\t\t 4. Searching ");
            printf("\n\n\t\t\t\t\t 5. List of all Contacts ");
            printf("\n\n\t\t\t\t\t 6. Change Password ");
            printf("\n\n\t\t\t\t\t 7. Exit ");
            printf("\n\n\t\t\t\t====================================");
            printf("\n\n\t\t\t\tEnter Your Option : ");
            option = getche(); // unformated input function
            temp = getch();
            switch (option)
            {
            case '1':
                system("cls");
                add_new_contact(); // function which operates to add a new contact.
                temp = getch();
                break;

            case '2':
                system("cls");
                Editing_Contact(); // function which operates to editing a particular the contact.
                break;

            case '3':
                system("cls");
                Delete_Contact(); // function which operates to delete a particular the contact.
                break;
            case '4':
                system("cls");
                search_contact(); // function which operates to search a particular contact (or by category)  the contact.
                break;

            case '5':
                system("cls");
                list_all_contacts();  // function which operates to show all the List of all contacts.
                break;

            case '6':
                system("cls");
                change_password(); // function which change the password .
                break;

            case '7':
                exit(0); // exit from from the program.
            }
            delay(1); // which delay the loop (this function is defined in times.c)
        }
    }

    return 0;
}
