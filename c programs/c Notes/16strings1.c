#include <stdio.h>

void print_name(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);//Here character(not string) are passing in name[i] thats why we use %c formatidentifiers(if string we use %s).
        i++;
    }
    printf("\n");
}
void print_name2(char name2[])
{
    int i = 0;
    while (name2[i] != '\0')
    {
        printf("%c", name2[i]);
        i++;
    }
}

int main()
{
    // char name[]={'A','J','I','T','\0'};
    char name[] = "AJIT PATIl";
    printf("By Declare and initializing\n");
    print_name(name);

    char name_2[20];
    printf("\nBy Declare and taking input from user\n");
    gets(name_2);
    print_name2(name_2);  
     
    printf("\n\nBy using printf\n"); 
    printf("%s\n",name); 
    printf("%s\n",name_2); 
     
    printf("\nBy using puts\n"); 
    puts(name);
    puts(name_2); 
    return 0;
}
