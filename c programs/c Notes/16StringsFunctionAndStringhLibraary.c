#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[10], name2[10], name3[20] = "are friends";

    printf("Enter names\n");
    gets(name);
    gets(name2); 
    

    int a;
    printf("\n1--strlen\n2--strcat\n3--strcpy\n4--strrev\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("\nUsing strlen() Function\n");
        printf("The size of name : %d\n The size of name2 : %d", strlen(name), strlen(name2));
        break;
    case 2:
        printf("\nUsing strcat() Function\n");
        printf("%s\n", strcat(strcat(name, name2), name3));
        break;
    case 3:
        printf("\nUsing strcpy() Function\n");
        printf("%s\n", strcpy(name2, name));
        printf("%s", strcpy(name2, name3));
        break;
    case 4:
        printf("\nUsing strrev() Function\n");
        printf("%s", strrev(name));
        break;
    }

    return 0;
}
