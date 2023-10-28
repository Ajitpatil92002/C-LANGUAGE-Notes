#include <stdio.h>
typedef struct Biodata
{
    int id;
    char name[10];
    char collg[10];
    char roll[10];
    char branch[16];
} bio;

int main()
{
    bio ajit = {6003, "AjitPatil", "GNDEC", "3GN20CS004", "ComputerScience"};
    FILE *fp;
    fp = fopen("Biodata.txt", "wb+");
    fwrite(&ajit, sizeof(ajit), 1, fp);
    rewind(fp);
    fread(&ajit, sizeof(ajit), 1, fp);
    printf("\n---DEATIALS---\n");
    printf("\nName : %s\nID : %d\nRoll No: %s\nCollege :%s\nBranch :%s\n", ajit.name, ajit.id, ajit.roll, ajit.collg, ajit.branch);
    fclose(fp);
    return 0;
}
