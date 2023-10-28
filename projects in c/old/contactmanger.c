#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define printDetails printf("\n\t\tName     : %s", cont.Name);printf("\n\t\tCategory : %s", cont.category); printf("\n\t\tGender   : %s", cont.gender);printf("\n\t\tAge      : %d", cont.age);printf("\n\t\tAddress  : %s", cont.address);printf("\n\t\tPhone No : %s", cont.phone_no);

#define printHeadIng printf("\n\t\t\t~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
#define printDashs printf("-------------------------------------------------------------------------------------------------\n\n");

struct contacts
{
    char category[20];
    char Name[20];
    char gender[10];
    int age;
    char address[50];
    char phone_no[12];
    char e_mail[30];
} cont, cont1;

void delay(float number_of_seconds)
{
    // Converting time into milli_seconds
    float milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void add_new_contact();   // function which operates to add a new contact.
void Editing_Contact();   // function which operates to editing a particular the contact.
void Delete_Contact();    // function which operates to delete a particular the contact.
void search_contact();    // function which operates to search a particular contact (pho no.).
void list_all_contacts(); // function which operates to show all the List of all contacts.
void change_password();   // function which change the password .
char encrypt(char encryptpassword[], int key);
char decrypt(char decryptpassword[], int key);
void search_PhNo();

int main()
{
    system("cls");
    system("Color 70");
    char password[30], originalpass[30], ch, option, temp;
    int key;
    FILE *fp;

    printDashs;printHeadIng;
    printf("\n\n\n\t\t\t\t\tEnter Password : ");
    int i = 0;
    while (1)
    {
        ch = getch();
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
    decrypt(originalpass, 3);
    if (strcmp(originalpass, password) != 0) // comparing the entered password with the original password
    {
        printf("\n\n\t\t\t\t\tIncorrect Password"); // if entered password is wrong then it will exits from the program
        printDashs;
        exit(0);
    }
    else
    {
        printf("\n\n\t\t\t\t\tCorrect Password\n\t\t\t\t\tEnter any key......."); // if Entered password is correct it will print this following statement
        temp = getch();
        system("cls"); // Here we are clearing the Screen if Entered password is correct
        printDashs;printDashs;
        printf("\t\tW E L L__C O M E   TO    C O N T A C T    M A N A G E R   %c  %c  %c", 3, 3, 3);
        printf("\n\n\n\t\t\t\tDevloped At Date  : 16 OCTOBER 2021");
        printf("\n\n\n\n\t\t\tDevloped   By   :-      A J I T__P A T I L   %c", 3);
        printf("\n\n\n\t\t\t\t  PLEASE____WAIT.........");
        printf("\n\n\n\t\t\t\t    L O A D I N G ");
        for (int i = 0; i < 15; i++)
        {
            printf("%c%c%c", 220, 220, 220);
            // sleep((unsigned long)1);
            delay(0.1);
        }
        printf("\n\n\n\t\t\t\tSUCCESSFULLY Loaded Enter any Key........");printDashs;

        temp = getch();
        while (1)
        {
            system("cls");printDashs;
            // MAIN MENU
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
                list_all_contacts(); // function which operates to show all the List of all contacts.
                break;

            case '6':
                system("cls");
                change_password(); // function which change the password .
                break;

            case '7':
                exit(0); // exit from from the program.
            }
            delay(1); // which delay the loop
        }
    }
    return 0;
}

void add_new_contact()
{
    printHeadIng; printf("\t");printDashs;
    printf("\n\n\t\t\t\tA D D__C O N T A C T\n\n");
    printf("\t");printDashs;
    fflush(stdin);
    // Taking input of Contact Details From User
    printf("\n\t\tEnter Phone No. : ");
    gets(cont.phone_no);
    FILE *fp;
    fp = fopen("contact_Info.dat", "rb");           // opening the file(binary mode)
    while (fread(&cont1, sizeof(cont1), 1, fp) > 0) // reading the data from the file
    {
        if (strcmp(cont.phone_no, cont1.phone_no) == 0) // checking the the phone no. of contact is already saved or not
        {
            printf("\n\n\n\t\tThe following Phone Number is Already Saved !!!!!!!!!!! \n\n\n\t\tEnter any key to return MAIN MENU.....");
            fclose(fp);
            return;
        }
    }
    printf("\n\t\tEnter Name : ");
    gets(cont.Name);
    fflush(stdin);
    printf("\n\t\tEnter Category : ");
    gets(cont.category);
    fflush(stdin);
    printf("\n\t\tEnter gender : ");
    gets(cont.gender);
    fflush(stdin);
    printf("\n\t\tEnter Age : ");
    scanf("%d", &cont.age);
    fflush(stdin);
    printf("\n\t\tEnter Address : ");
    gets(cont.address);
    fflush(stdin);
    printf("\n\t\tEnter Email-Id : ");
    gets(cont.e_mail);
    fflush(stdin);
    // opening a file storing the data enter by the users(in binary form)
    // FILE *fp;
    fp = fopen("contact_Info.dat", "ab");
    fwrite(&cont, sizeof(cont), 1, fp);
    fclose(fp);
    printf("\t");printDashs;
    printf("\n\n\t\t\tContact Saved Successfully \n\n\t\t\tPress any key to return MAIN MENU ......");
}
// function for Editing the contact
void Editing_Contact()
{
    char temp, editCont[12];
    int found = 0, position;
    FILE *fp;
    printHeadIng;printf("\t");printDashs;
    printf("\n\n\t\t\t~ E D I T I N G__C O T A C T ~\n");
    printf("\t");printDashs;

    printf("\n\n\t\tEnter the SNo to Edit it : "); // taking input of the sno to be edited
    gets(editCont);
    fp = fopen("contact_Info.dat", "r+b");        // opening the file in r+ mode ( reading + writing mode)
    while (fread(&cont, sizeof(cont), 1, fp) > 0) // reading the the file till the sno. not matchs
    {
        if (strcmp(cont.phone_no, editCont) != 0) // printing the all the details of contact to be edited
        {
            printDetails;
            printf("\n\t");
            printDashs;
            found = 1;
            break;
        }
    }
    if (found == 0) // statement if sno is not found
    {
        printf("\n\n\n\t\tCONTACT NOT FOUND \n\n\n\t\tEnter Any Key to return MAIN MENU .....");
        fclose(fp);
        temp = getch();
        return;
    }
    position = ftell(fp);                         // storing no. bytes  read the data from the file
    fseek(fp, position - sizeof(cont), SEEK_SET); // geting the cursur in file where the data to be edited
    printf("\n\n\t\tENTER NEW DATA :- ");         // taking input from the user  of contact to be edited
    fflush(stdin);
    printf("\n\t\tEnter Name : ");
    gets(cont.Name);
    printf("\n\t\tEnter Category : ");
    gets(cont.category);
    fflush(stdin);
    fflush(stdin);
    printf("\n\t\tEnter gender : ");
    gets(cont.gender);
    fflush(stdin);
    printf("\n\t\tEnter Age : ");
    scanf("%d", &cont.age);
    fflush(stdin);
    printf("\n\t\tEnter Address : ");
    gets(cont.address);
    fflush(stdin);
    printf("\n\t\tEnter Phone No. : ");
    gets(cont.phone_no);
    fflush(stdin);
    printf("\n\t\tEnter Email-Id : ");
    gets(cont.e_mail);
    fflush(stdin);
    fwrite(&cont, sizeof(cont), 1, fp); // witing in file(fp) of data which is edited
    printf("\n\t");
    printDashs;
    fclose(fp);
    printf("\n\n\t\tContact Edited And Saved Successfully \n\t\tEnter Any Key to return MAIN MENU ........");
    temp = getch();
}
// function for deleting the particular contact
void Delete_Contact()
{
    int found = 0;
    char temp, sure, DeletePhno[12];
    FILE *fp, *fp1;
    printHeadIng;
    printf("~\n\n\t\t\t D E L E T E__C O T A C T ~\n");
    printf("\t");printDashs;

    printf("\n\n\n\t\tEnter the Phone Number to Delete : "); // taking input of sno of contact to deleting
    gets(DeletePhno);
    fp = fopen("contact_Info.dat", "rb");         // opening the file(binary mode)
    while (fread(&cont, sizeof(cont), 1, fp) > 0) // reading the data from the file
    {
        if (strcmp(DeletePhno, cont.phone_no) == 0) // checking the the sno of contact (from the file) and sno which user want to delete
        {
            // printing the all Details of contact which want to delete
            printDetails;
            found = 1;
            printf("\n\t");
            printDashs;
            break;
        }
    }
    if (found == 0) // statement to print if the sno is not found in file
    {
        printf("\n\t\tCONTACT NOT FOUND \n\t\tPress any Key to return MAIN MENU ......");
        fclose(fp);
    }
    if (found == 1)
    {
        printf("\n\t\tARE YOU SURE WANT TO DELETE (Y/N): "); //  confirmation to delete the contact
        sure = getche();
        if (sure == 'Y' || sure == 'y')
        {
            rewind(fp);
            fp1 = fopen("temp.dat", "wb");                // opening the temparory file(fp1)
            while (fread(&cont, sizeof(cont), 1, fp) > 0) // again reading the file(fp) ;
            {
                if (strcmp(DeletePhno, cont.phone_no) != 0)
                {
                    fwrite(&cont, sizeof(cont), 1, fp1); // writing the all the data of which is read from the file(fp) except the the record which is to be delete;
                }
            }
            fclose(fp1);
            fclose(fp);
            remove("contact_Info.dat");             // removing the file(fp);
            rename("temp.dat", "contact_Info.dat"); // renaming the file (fp1) to file(fp);
            printf("\n\n\t\tSUCCESSFULLY DELETED .... \n\tEnter Any Key  to return MAIN MENU ......");
        }
        else if (sure == 'N' || sure == 'n') // statement  after the confirmation of not to delete the particular contact
        {
            printf("\n\n\t\tOK CONTACT NOT DELETED ..... \n\t\tEnter Any Key  to return MAIN MENU ......");
        }
    }
    temp = getch();
}
// function for printing all the contacts stored in the file(binary file)
void list_all_contacts()
{
    printHeadIng;
    printf("\n\n\t\t\t~ L I S T__O F__A L L__C O N T A C T ~\n");
    printf("\t"); printDashs;
    // printing the Headlines of the contacts
    printf("\n\n\t\tNAME\tCATEGORY\tAGE\tGender\tADDRESS\t\tPHONE No\tE-MAIL ID");
    FILE *fp;
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        
        printf("\n\t\t%s\t%s\t\t%d\t%s\t%s\t\t%s\t%s",cont.Name,cont.category,cont.age,cont.gender,cont.address,cont.phone_no,cont.e_mail);
    }
    fclose(fp);
    printf("\n\t");
    for (int i = 0; i < 150; i++)
        printf("-");
    printf("\n\t\t\tPress Any Key to return MAIN MENU ........");
    char temp = getch(); // this just for holding the screen
}
// function for change password
void change_password()
{
    char temp, newpassword[30], oldpassword[30], ch, conformpass[30];
    FILE *fp;
    printHeadIng; printf("\t");printDashs;
    printf("\n\n\n\t\tEnter password : ");
    int i = 0;
    while (1)
    {
        ch = getch();
        if (ch == 13) // Here 13 is Assci code of "Enter Key"
        {
            oldpassword[i] = '\0'; // if user enter the "Enter Key" then  it will stores the NULL terminating char exits from the loop
            break;
        }
        oldpassword[i++] = ch; // storing the entered password in the password array ;
        printf("*");
    }
    fp = fopen("password.txt", "r");
    fgets(newpassword, 30, fp);
    decrypt(newpassword, 3);
    if ((strcmp(newpassword, oldpassword)) == 0)
    {
        fclose(fp);
        fp = fopen("password.txt", "w");
        printf("\n\n\t\tENTER NEWPASSWORD : ");
        gets(newpassword);
        rewind(fp);
        printf("\n\n\t\tENTER AGAIN NEWPASSWORD : ");
        gets(conformpass);
        if (strcmp(newpassword, conformpass) != 0)
        {
            printf("\n\n\t\tPASSWORD NOT MATCH\n");
            fclose(fp);
        }
        else
        {
            encrypt(newpassword, 3);
            fputs(newpassword, fp);
            printf("\n\n\t\tPASSWORD SUCCESSFULLY CHANGED \n\tEnter Any Key to return MAIN MENU ......\n");
            fclose(fp);
        }
    }
    else
    {
        printf("\n\n\n\n\tINCORRECT PASSWORD.... \n\tEnter Any Key to return MAIN MENU ......\n");
    }
    printDashs; temp = getch();
}
char encrypt(char encryptpassword[], int key)
{
    for (int i = 0; i < 30 && encryptpassword[i] != '\0'; i++)
    {
        encryptpassword[i] = encryptpassword[i] + key;
    }
    return encryptpassword[30];
}
char decrypt(char decryptpassword[], int key)
{
    for (int i = 0; i < 30 && decryptpassword[i] != '\0'; i++)
    {
        decryptpassword[i] = decryptpassword[i] - key;
    }
    return decryptpassword[30];
}
// function for search contact
void search_contact()
{
    printHeadIng; printf("\n\t\t\t~ S E A R C H__C O T A C T ~\n\n");
    printDashs;
    int found = 0;
    char name[12], temp;
    system("cls");
    printHeadIng; printf("\n\t\t~ S E A R C H__C O T A C T ~\n");
    printDashs;
    fflush(stdin);
    printf("\n\t\tEnter the Phone No to be Searched : ");
    gets(name);
    FILE *fp;
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.phone_no, name) == 0)
        {
            printf("\n\n\t\t============================================================\n\n");
            printDetails;
            printf("\n\n\t\t============================================================\n\n");
            printDashs;found = 1;
        }
    }
    if (found == 0)
    {
        printf("\n\n\t\tContact Not Found \n\t\tPress Any Key to return MAIN MENU ......");
    }
    fclose(fp);
}
/*void search_Name()
{
    int found = 0;
    char name[20], temp;
    system("cls");
    printf("\n\t\t~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    printf("\n\t\t~ S E A R C H__C O T A C T ~\n");
    for (int i = 0; i < 100; i++)
        printf("=");
    fflush(stdin);
    printf("\n\n\t\tEnter the Full Name to be Searched : ");
    gets(name);
    FILE *fp;
    system("cls");
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.Name, name) == 0)
        {
            printf("\n\t\t~ L I S T__O F__S E A R C H E D__C O N T A C T ~\n");
            for (int i = 0; i < 160; i++)
                printf("-");
            printf("\n\n\t\t\tNAME");
            printf("\t\tCATEGORY");
            printf("\t\tAGE");
            printf("\t\tGender");
            printf("\t\tADDRESS");
            printf("\t\t\tPHONE No");
            printf("\t\tE-MAIL ID");
            printf("\n\t\t\t%s", cont.Name);
            printf("\t\t%s", cont.category);
            printf("\t\t\t%d", cont.age);
            printf("\t\t%s", cont.gender);
            printf("\t\t%s", cont.address);
            printf("\t\t\t%s", cont.phone_no);
            printf("\t\t%s", cont.e_mail);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("Contact Not Found ");
        printf("Press Any Key to return MAIN MENU ......");
    }
    fclose(fp);
}
void search_PhNo()
{
    int found = 0;
    char name[12], temp;
    system("cls");
    printf("\n\t\t~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    printf("\n\t\t~ S E A R C H__C O T A C T ~\n");
    for (int i = 0; i < 100; i++)
        printf("-");
    fflush(stdin);
    printf("\n\t\tEnter the Phone No to be Searched : ");
    gets(name);
    FILE *fp;
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.phone_no, name) == 0)
        {
            printf("\n\n\t\t============================================================\n\n");
            printf("\n\t\t\tName     : %s", cont.Name);
            printf("\n\t\t\tCategory : %s", cont.category);
            printf("\n\t\t\tAge      : %d", cont.age);
            printf("\n\t\t\tAddress  : %s", cont.address);
            printf("\n\t\t\tPhone No : %s", cont.phone_no);
            printf("\n\t\t\tEmail Id : %s\n\n", cont.e_mail);
            printf("\n\n\t\t============================================================\n\n");

            for (int i = 0; i < 150; i++)
                printf("-");
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("\n\n\t\tContact Not Found ");
        printf("\n\t\tPress Any Key to return MAIN MENU ......");
    }
    fclose(fp);
}
*/