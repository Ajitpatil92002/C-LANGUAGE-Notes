#include <stdio.h>
#include <string.h>

struct Drivers
{
    char name[20];
    char licences[20];
    char route[30];
    int kms;
};
int main()
{

    struct Drivers driv[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the Deatials of %d diver\n", i + 1);
        printf("Enter the NAME : ");
        scanf("%s", &driv[i].name);
        printf("Enter Lincences : ");
        scanf("%s", &driv[i].licences);
        printf("Enter Route : ");
        scanf("%s", &driv[i].route);
        printf("Enter Kms :");
        scanf("%d", &driv[i].kms);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter the Deatials of %d diver\n", i + 1);
        printf("NAME : %s\n",driv[i].name);
        printf("Enter Lincences : %s\n",driv[i].licences);
        printf("Enter Route : %s\n",driv[i].route);
        printf("Enter Kms :%d\n",driv[i].kms);
    }

    return 0;
}
