#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "times.c"
#include "struct.c"

void order_food();
void food_menu();
void admin_section();
void list_of_invoice();
void adding_food_in_menu();

int main()
{
    char option;
    while (1)
    {
        printf("\n\n1. ORDER FOOD\n");
        printf("2. FOOD MENU\n");
        printf("3. ADMIN SECTION\n");
        printf("4. LIST OF ALL INVOICE\n");
        printf("5. EXIT");
        fflush(stdin);
        printf("\n\nEnter Option : ");
        scanf("%c", &option);

        switch (option)
        {
        case '1':
            order_food();
            break;
        case '2':
            food_menu();
            break;
        case '3':
            admin_section();
            break;
        case '4':
            // list_of_invoice();
            break;
        case '5':
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }
}

void order_food()
{
    int no_of_items, i = 0, found = 0;
    char item[30];
    food_menu();
    fflush(stdin);
    printf("\nEnter Number Number of items to be order : ");
    scanf("%d", no_of_items);
    printf("Enter food to be order\n");
    while (i != no_of_items)
    {
        fflush(stdin);
        gets(item);
        FILE *fp;
        fp = fopen("food_menu.txt", "rb");
        while (fread(&f1, sizeof(f1), 1, fp) > 0)
        {
            if (strcmpi(item, f1.food) == 0)
            {
                printf("%f Rs\n\n", f1.price);
                found = 1;
            }
        }
        if (found == 0)
        {
            printf("\nFound is not present\n");
        }

        fclose(fp);
        i++;
    }
}
void food_menu()
{
    FILE *fp;
    fp = fopen("food_menu.txt", "rb");
    while (fread(&f1, sizeof(f1), 1, fp) > 0)
    {
        printf("\n\tFOOD\t\tPrice\n");
        printf("\n\t%s\t\t%f Rs Only", f1.food, f1.price);
    }
    fclose(fp);
}

void admin_section()
{
    char option;
    printf("1. Adding Food in MENU\n");
    printf("2. Deleting Invoice\n");
    printf("3. Change Password\n");
    printf("\nEnter Option : ");
    fflush(stdin);
    scanf("%c", &option);

    switch (option)
    {
    case '1':
        adding_food_in_menu();
        break;
    case '2':
        // deleting_invoice();
        break;
    case '3':
        // change_password();
        break;

    default:
        break;
    }
}

void adding_food_in_menu()
{
    printf("\nEnter Food : ");
    fflush(stdin);
    gets(f1.food);
    printf("\nEnter Price : ");
    fflush(stdin);
    scanf("%f", &f1.price);
    FILE *fp;
    fp = fopen("food_menu.txt", "ab");
    fwrite(&f1, sizeof(f1), 1, fp);
    fclose(fp);
}