#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0; // variable to track whether we are inside the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    //remove the trailier spaces from the beinning
    while (string[0] == ' ')
    {
        //shift the string to left
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
        //Removing the trailier space from end
        while (string[strlen(string)-1]==' ')
        {
            string[strlen(string) - 1] = '\0';
        }
    }
}

int main()
{
    char string[] = "<h1> My name is AJIT PATIL </h2>";
    parser(string);
    printf("The parser string is ~~%s~~\n", string);
    return 0;
}
