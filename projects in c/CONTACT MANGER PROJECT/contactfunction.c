#include <time.h>
#include <windows.h>
// Contactstructure File
struct contacts
{
    int sno;
    char category[20];
    char Name[20];
    char gender[10];
    int age;
    char address[50];
    char phone_no[12];
    char e_mail[30];
} cont,cont1;

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

void gotoxy(int x1, int y1)
{
    COORD c;
    c.X = x1;
    c.Y = y1;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


void search_sno()
{

    int search, found = 0;
    FILE *fp;
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    gotoxy(50, 4);
    printf("~ S E A R C H__C O T A C T ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");
    gotoxy(50, 7);
    printf("Enter Sno to Be Search : ");
    scanf("%d", &search);
    gotoxy(45, 8);
    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    fp = fopen("contact_Info.dat", "rb");         // opening the file(binary mode)
    while (fread(&cont, sizeof(cont), 1, fp) > 0) // reading the data from the file
    {
        if (cont.sno == search) // checking the the sno of contact (from the file) and sno which user want to delete
        {
            gotoxy(50, 9);
            printf("SNo      : %d", cont.sno); // printing the all Details of contact which want to delete
            gotoxy(50, 10);
            printf("Name     : %s", cont.Name);
            gotoxy(50, 11);
            printf("Category : %s", cont.category);
            gotoxy(50, 12);
            printf("Age      : %d", cont.age);
            gotoxy(50, 13);
            printf("Address  : %s", cont.address);
            gotoxy(50, 14);
            printf("Phone No : %s", cont.phone_no);
            gotoxy(50, 15);
            printf("Email Id : %s", cont.e_mail);
            gotoxy(45, 17);
            for (int i = 0; i < 50; i++)
            {
                printf("=");
            }
            found = 1;
            gotoxy(15, 20);
            for (int i = 0; i < 150; i++)
                printf("-");
            break;
        }
    }
    if (found == 0) // statement to print if the sno is not found in file
    {
        gotoxy(50, 9);
        printf("CONTACT NOT FOUND ");
        gotoxy(45, 12);
            for (int i = 0; i < 50; i++)
            {
                printf("=");
            }
        gotoxy(50,11);
        printf("Press Any Key to return MAIN MENU ......");
        fclose(fp);
    }
}

void  search_PhNo()
{
    int found = 0;
    char name[12], temp;
    system("cls");
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ S E A R C H__C O T A C T ~\n");
    gotoxy(45, 7);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(45, 13);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(50, 9);
    fflush(stdin);
    printf("Enter the Phone No to be Searched : ");
    gets(name);

    FILE *fp;
    int i = 9;
    system("cls");
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.phone_no, name) == 0)
        {
        
            gotoxy(50, 1);
            printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
            gotoxy(50, 3);
            printf("~ L I S T__O F__S E A R C H E D__C O N T A C T ~\n");
            gotoxy(10,5);
            for (int i = 0; i < 160; i++)
                printf("-");
            gotoxy(11, 7); // printing the Headlines of the contacts
            printf("SNo");
            gotoxy(18, 7);
            printf("NAME");
            gotoxy(33, 7);
            printf("CATEGORY");
            gotoxy(53, 7);
            printf("AGE");
            gotoxy(59, 7);
            printf("Gender");
            gotoxy(68, 7);
            printf("ADDRESS");
            gotoxy(120, 7);
            printf("PHONE No");
            gotoxy(136, 7);
            printf("E-MAIL ID");
            gotoxy(11, i);
            printf("%d", cont.sno);
            gotoxy(18, i);
            printf("%s", cont.Name);
            gotoxy(33, i);
            printf("%s", cont.category);
            gotoxy(53, i);
            printf("%d", cont.age);
            gotoxy(59, i);
            printf("%s", cont.gender);
            gotoxy(68, i);
            printf("%s", cont.address);
            gotoxy(120, i);
            printf("%s", cont.phone_no);
            gotoxy(136, i);
            printf("%s", cont.e_mail);
            i++;
            found = 1;
        }
    }
    if (found == 0)
    {
        gotoxy(50, 11);
        printf("Contact Not Found ");
        gotoxy(50,12);
        printf("Press Any Key to return MAIN MENU ......");
    } 


    fclose(fp);
    
}

void  search_Name()
{
    int found = 0;
    char name[20], temp;
    system("cls");
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ S E A R C H__C O T A C T ~\n");
    gotoxy(45, 7);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(45, 13);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(50, 9);
    fflush(stdin);
    printf("Enter the Full Name to be Searched : ");
    gets(name);

    FILE *fp;
    int i = 9;
    system("cls");
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.Name, name) == 0)
        {
        
            gotoxy(50, 1);
            printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
            gotoxy(50, 3);
            printf("~ L I S T__O F__S E A R C H E D__C O N T A C T ~\n");
            gotoxy(10,5);
            for (int i = 0; i < 160; i++)
                printf("-");
            gotoxy(11, 7); // printing the Headlines of the contacts
            printf("SNo");
            gotoxy(18, 7);
            printf("NAME");
            gotoxy(33, 7);
            printf("CATEGORY");
            gotoxy(53, 7);
            printf("AGE");
            gotoxy(59, 7);
            printf("Gender");
            gotoxy(68, 7);
            printf("ADDRESS");
            gotoxy(120, 7);
            printf("PHONE No");
            gotoxy(136, 7);
            printf("E-MAIL ID");
            gotoxy(11, i);
            printf("%d", cont.sno);
            gotoxy(18, i);
            printf("%s", cont.Name);
            gotoxy(33, i);
            printf("%s", cont.category);
            gotoxy(53, i);
            printf("%d", cont.age);
            gotoxy(59, i);
            printf("%s", cont.gender);
            gotoxy(68, i);
            printf("%s", cont.address);
            gotoxy(120, i);
            printf("%s", cont.phone_no);
            gotoxy(136, i);
            printf("%s", cont.e_mail);
            i++;
            found = 1;
        }
    }
    if (found == 0)
    {
        gotoxy(50, 11);
        printf("Contact Not Found ");
        gotoxy(50,12);
        printf("Press Any Key to return MAIN MENU ......");
    } 
    fclose(fp);  
}

void  search_category()
{
    int found = 0;
    char name[20], temp;
    system("cls");
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ S E A R C H__C O T A C T ~\n");
    gotoxy(45, 7);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(45, 13);
    for (int i = 0; i < 50; i++)
        printf("=");
    gotoxy(50, 9);
    fflush(stdin);
    printf("Enter the Category to be Searched : ");
    gets(name);

    FILE *fp;
    int i = 9;
    system("cls");
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        if (strcmpi(cont.category, name) == 0)
        {
        
            gotoxy(50, 1);
            printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
            gotoxy(50, 3);
            printf("~ L I S T__O F__S E A R C H E D__C O N T A C T ~\n");
            gotoxy(10,5);
            for (int i = 0; i < 160; i++)
                printf("-");
            gotoxy(11, 7); // printing the Headlines of the contacts
            printf("SNo");
            gotoxy(18, 7);
            printf("NAME");
            gotoxy(33, 7);
            printf("CATEGORY");
            gotoxy(53, 7);
            printf("AGE");
            gotoxy(59, 7);
            printf("Gender");
            gotoxy(68, 7);
            printf("ADDRESS");
            gotoxy(120, 7);
            printf("PHONE No");
            gotoxy(136, 7);
            printf("E-MAIL ID");
            gotoxy(11, i);
            printf("%d", cont.sno);
            gotoxy(18, i);
            printf("%s", cont.Name);
            gotoxy(33, i);
            printf("%s", cont.category);
            gotoxy(53, i);
            printf("%d", cont.age);
            gotoxy(59, i);
            printf("%s", cont.gender);
            gotoxy(68, i);
            printf("%s", cont.address);
            gotoxy(120, i);
            printf("%s", cont.phone_no);
            gotoxy(136, i);
            printf("%s", cont.e_mail);
            i++;
            found = 1;
        }
    }
    if (found == 0)
    {   
        gotoxy(45, 9);
            for (int i = 0; i < 50; i++)
            {
                printf("=");
            }
        gotoxy(45, 14);
            for (int i = 0; i < 50; i++)
            {
                printf("=");
            }
        gotoxy(50, 11);
        printf("Contact Not Found ");
        gotoxy(50,12);
        printf("Press Any Key to return MAIN MENU ......");
    } 
    fclose(fp);  
}

void add_new_contact()
{
    gotoxy(30, 1); // this is a userdefined function which places the cursor at the desired location on the screen;
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    gotoxy(10, 3);
    for (int i = 0; i < 80; i++)
        printf("-");
    gotoxy(30, 5);
    printf("A D D__C O N T A C T\n");
    gotoxy(10, 6);
    for (int i = 0; i < 80; i++)
        printf("-");
    fflush(stdin);
    // Taking input of Contact Details From User
    gotoxy(25, 8);
    printf("Enter Serial No. : ");
    scanf("%d", &cont.sno);
    fflush(stdin);
    FILE *fp;
    fp = fopen("contact_Info.dat", "rb");           // opening the file(binary mode)
    while (fread(&cont1, sizeof(cont1), 1, fp) > 0) // reading the data from the file
    {
        if (cont1.sno == cont.sno) // checking the the sno of contact (from the file) and sno which user want to delete
        {
            gotoxy(25, 13);
            printf("The following sno. is Already Saved Chosse Another Sno ");
            gotoxy(25,14);
            printf("Enter any key to return MAIN MENU.....");
            fclose(fp);
            return;
        }
    }

    gotoxy(25, 10);
    printf("Enter Category : ");
    gets(cont.category);
    fflush(stdin);

    gotoxy(25, 12);
    printf("Enter Name : ");
    gets(cont.Name);
    fflush(stdin);

    gotoxy(25, 14);
    printf("Enter gender : ");
    gets(cont.gender);
    fflush(stdin);

    gotoxy(25, 16);
    printf("Enter Age : ");
    scanf("%d", &cont.age);
    fflush(stdin);

    gotoxy(25, 18);
    printf("Enter Address : ");
    gets(cont.address);
    fflush(stdin);

    gotoxy(25, 20);
    printf("Enter Phone No. : ");
    gets(cont.phone_no);
    fflush(stdin);

    gotoxy(25, 22);
    printf("Enter Email-Id : ");
    gets(cont.e_mail);
    fflush(stdin);

    // opening a file storing the data enter by the users(in binary form)
    // FILE *fp;
    fp = fopen("contact_Info.dat", "ab");
    fwrite(&cont, sizeof(cont), 1, fp);
    fclose(fp);
    gotoxy(25, 27);
    printf("Contact Saved Successfully ");
    gotoxy(25, 28);
    printf("Press any key to return MAIN MENU ......");
}
// function for printing all the contacts stored in the file(binary file)
void list_all_contacts()
{
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ L I S T__O F__A L L__C O N T A C T ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");
    gotoxy(11, 7); // printing the Headlines of the contacts
    printf("SNo");
    gotoxy(18, 7);
    printf("NAME");
    gotoxy(33, 7);
    printf("CATEGORY");
    gotoxy(53, 7);
    printf("AGE");
    gotoxy(59, 7);
    printf("Gender");
    gotoxy(68, 7);
    printf("ADDRESS");
    gotoxy(120, 7);
    printf("PHONE No");
    gotoxy(136, 7);
    printf("E-MAIL ID");
    FILE *fp;
    int i = 9;
    fp = fopen("contact_Info.dat", "rb"); // opening the file (binary mode) printing all the data of contacts from the file
    while (fread(&cont, sizeof(cont), 1, fp) > 0)
    {
        gotoxy(11, i);
        printf("%d", cont.sno);
        gotoxy(18, i);
        printf("%s", cont.Name);
        gotoxy(33, i);
        printf("%s", cont.category);
        gotoxy(53, i);
        printf("%d", cont.age);
        gotoxy(59, i);
        printf("%s", cont.gender);
        gotoxy(68, i);
        printf("%s", cont.address);
        gotoxy(120, i);
        printf("%s", cont.phone_no);
        gotoxy(136, i);
        printf("%s", cont.e_mail);
        i++;
    }
    fclose(fp);
    printf("\n");
    gotoxy(10, i);
    for (int i = 0; i < 150; i++)
        printf("-");
    // gotoxy(25, i+1);
    printf("\nPress Any Key to return MAIN MENU ........");
    char temp = getch(); // this just for holding the screen
}

// function for deleting the particular contact
void Delete_Contact()
{
    int DeleteSno, found = 0;
    char temp, sure;
    FILE *fp, *fp1;
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    gotoxy(50, 4);
    printf("~ D E L E T E__C O T A C T ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");
    gotoxy(15, 7);
    printf("Enter the SNo to Delete : "); // taking input of sno of contact to deleting
    scanf("%d", &DeleteSno);
    fp = fopen("contact_Info.dat", "rb");         // opening the file(binary mode)
    while (fread(&cont, sizeof(cont), 1, fp) > 0) // reading the data from the file
    {
        if (cont.sno == DeleteSno) // checking the the sno of contact (from the file) and sno which user want to delete
        {
            gotoxy(15, 9);
            printf("SNo      : %d", cont.sno); // printing the all Details of contact which want to delete
            gotoxy(15, 10);
            printf("Name     : %s", cont.Name);
            gotoxy(15, 11);
            printf("Category : %s", cont.category);
            gotoxy(15, 12);
            printf("Age      : %d", cont.age);
            gotoxy(15, 13);
            printf("Address  : %s", cont.address);
            gotoxy(15, 14);
            printf("Phone No : %s", cont.phone_no);
            gotoxy(15, 15);
            printf("Email Id : %s", cont.e_mail);
            found = 1;
            gotoxy(15, 20);
            for (int i = 0; i < 150; i++)
                printf("-");
            break;
        }
    }
    if (found == 0) // statement to print if the sno is not found in file
    {

        gotoxy(15, 9);
        printf("CONTACT NOT FOUND ");
        gotoxy(15, 10);
        printf("Press any Key to return MAIN MENU ......");
        fclose(fp);
    }
    if (found == 1)
    {
        gotoxy(15, 22);
        printf("ARE YOU SURE WANT TO DELETE (Y/N): "); //  confirmation to delete the contact
        sure = getche();
        if (sure == 'Y' || sure == 'y')
        {
            rewind(fp);
            fp1 = fopen("temp.dat", "wb");                // opening the temparory file(fp1)
            while (fread(&cont, sizeof(cont), 1, fp) > 0) // again reading the file(fp) ;
            {
                if (cont.sno != DeleteSno)
                {
                    fwrite(&cont, sizeof(cont), 1, fp1); // writing the all the data of which is read from the file(fp) except the the record which is to be delete;
                }
            }
            fclose(fp1);
            fclose(fp);
            remove("contact_Info.dat");             // removing the file(fp);
            rename("temp.dat", "contact_Info.dat"); // renaming the file (fp1) to file(fp);
            gotoxy(15, 24);
            printf("SUCCESSFULLY DELETED ....");
            gotoxy(15, 25);
            printf("Enter Any Key  to return MAIN MENU ......");
        }
        else if (sure == 'N' || sure == 'n') // statement  after the confirmation of not to delete the particular contact
        {
            gotoxy(15, 24);
            printf("OK CONTACT NOT DELETED .....");
            gotoxy(15, 25);
            printf("Enter Any Key  to return MAIN MENU ......");
        }
    }
    temp = getch();
}

// function for Editing the contact
void Editing_Contact()
{
    char temp;
    int editSno, found = 0, position;
    FILE *fp;
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ E D I T I N G__C O T A C T ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");
    gotoxy(10, 7);
    printf("Enter the SNo to Edit it : "); // taking input of the sno to be edited
    scanf("%d", &editSno);
    fp = fopen("contact_Info.dat", "r+b");        // opening the file in r+ mode ( reading + writing mode)
    while (fread(&cont, sizeof(cont), 1, fp) > 0) // reading the the file till the sno. not matchs
    {
        if (cont.sno == editSno) // printing the all the details of contact to be edited
        {
            gotoxy(15, 9);
            printf("SNo      : %d", cont.sno);
            gotoxy(15, 10);
            printf("Category : %s", cont.category);
            gotoxy(15, 11);
            printf("Name     : %s", cont.Name);
            gotoxy(15, 12);
            printf("Gender   : %s", cont.gender);
            gotoxy(15,13);
            printf("Age      : %d", cont.age);
            gotoxy(15, 14);
            printf("Address  : %s", cont.address);
            gotoxy(15, 15);
            printf("Phone No : %s", cont.phone_no);
            gotoxy(15, 16);
            printf("Email Id : %s", cont.e_mail);
            gotoxy(10, 17);
            for (int i = 0; i < 150; i++)
                printf("-");
            found = 1;
            break;
        }
    }
    if (found == 0) // statement if sno is not found
    {
        gotoxy(15, 9);
        printf("CONTACT NOT FOUND ");
        gotoxy(15, 10);
        printf("Enter Any Key to return MAIN MENU .....");
        fclose(fp);
        temp = getch();
        return;
    }
    position = ftell(fp);                         // storing no. bytes  read the data from the file
    fseek(fp, position - sizeof(cont), SEEK_SET); // geting the cursur in file where the data to be edited
    gotoxy(15, 19);
    printf("ENTER NEW DATA :- "); // taking input from the user  of contact to be edited
    gotoxy(15, 21);
    printf("Enter Serial No. : ");
    scanf("%d", &cont.sno);
    fflush(stdin);

    gotoxy(15, 22);
    printf("Enter Category : ");
    gets(cont.category);
    fflush(stdin);

    gotoxy(15, 23);
    printf("Enter Name : ");
    gets(cont.Name);
    fflush(stdin);

    gotoxy(15, 24);
    printf("Enter gender : ");
    gets(cont.gender);
    fflush(stdin);

    gotoxy(15, 25);
    printf("Enter Age : ");
    scanf("%d", &cont.age);
    fflush(stdin);

    gotoxy(15, 26);
    printf("Enter Address : ");
    gets(cont.address);
    fflush(stdin);

    gotoxy(15, 27);
    printf("Enter Phone No. : ");
    gets(cont.phone_no);
    fflush(stdin);

    gotoxy(15, 28);
    printf("Enter Email-Id : ");
    gets(cont.e_mail);
    fflush(stdin);
    fwrite(&cont, sizeof(cont), 1, fp); // witing in file(fp) of data which is edited
    gotoxy(15, 29);
    for (int i = 0; i < 150; i++)
        printf("-");
    fclose(fp);
    gotoxy(15, 31);
    printf("Contact Edited And Saved Successfully ");
    gotoxy(15, 32);
    printf("Enter Any Key to return MAIN MENU ........");

    temp = getch();
}
// function for change password
void change_password()
{
    char temp, newpassword[30], oldpassword[30], ch, conformpass[30];
    FILE *fp;
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");

    gotoxy(50, 4);
    printf("~ C H A N G E__P A S S W O R D ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");

    gotoxy(12, 8);
    printf("Enter password : ");
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
    if ((strcmp(newpassword, oldpassword)) == 0)
    {
        fclose(fp);
        fp = fopen("password.txt", "w");
        gotoxy(12, 10);
        printf("ENTER NEWPASSWORD : ");
        gets(newpassword);
        rewind(fp);
        fputs(newpassword, fp);
        gotoxy(12, 12);
        printf("ENTER AGAIN NEWPASSWORD : ");
        gets(conformpass);
        if (strcmp(newpassword, conformpass) != 0)
        {
            gotoxy(12, 14);
            printf("PASSWORD NOT MATCH");
            fclose(fp);
        }
        else
        {
            gotoxy(12, 15);
            printf("PASSWORD SUCCESSFULLY CHANGED ");
            gotoxy(12, 16);
            printf("Enter Any Key to return MAIN MENU ......");
            fclose(fp);
        }
    }
    else
    {
        gotoxy(12, 12);
        printf("INCORRECT PASSWORD....");
        gotoxy(12, 13);
        printf("Enter Any Key to return MAIN MENU ......");
    }
    gotoxy(10, 20);
    for (int i = 0; i < 150; i++)
        printf("-");
    temp = getch();
}

// function for search contact
void search_contact()
{
    char temp, searchoption;
    FILE *fp;
    gotoxy(50, 1);
    printf("~ ~ ~ C O N T A C T___M A N A G E R ~ ~ ~\n");
    gotoxy(52, 4);
    printf("~ S E A R C H__C O T A C T ~\n");
    gotoxy(10, 5);
    for (int i = 0; i < 150; i++)
        printf("-");
    gotoxy(50, 7);
    printf("SEARCH OPTION ");
    gotoxy(10, 8);
    for (int i = 0; i < 150; i++)
        printf("=");
    gotoxy(50, 10);
    printf("1. Search by SNo ");
    gotoxy(50, 11);
    printf("2. Search by Name");
    gotoxy(50, 12);
    printf("3. Search by Phone Number");
    gotoxy(50, 13);
    printf("4. Search by category ");
    gotoxy(10, 17);
    for (int i = 0; i < 150; i++)
        printf("=");
    gotoxy(50, 15);
    printf("Enter the option : ");
    scanf("%s", &searchoption);

    switch (searchoption)
    {
    case '1':
        system("cls");
        search_sno();
        break;
    case '2':
        search_Name();
        break;

    case '3':
        search_PhNo();
        break;
    case '4':
        search_category();
    }
    temp = getch();
}



