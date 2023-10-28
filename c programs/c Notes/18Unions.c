#include <stdio.h>
#include <string.h>
union student
{
    int roll;
    char name[10]; 
};

int main()
{

    union student s1;
    strcpy(s1.name, "AJIT");   // here it will stores the the vlaue which we initialised 2nd not for which we printed second 
    printf("\nNAME : %s\n", s1.name);
    s1.roll = 7;                // here we initialsed first roll and then name(string) then it will stores only string and it will give garbage value if print roll

    printf("ROLL NO : %d\n", s1.roll); 


    return 0;
}
