#include <stdio.h>
#include <string.h>

//Structures are usually used when we want to store dissimilar data together.

struct student
{
    int RollNo; //structure members
    char section;
    int mathsMarks;
    int scienceMarks;
    char collgeName[30];
    int arr[5];

} AMit = {6, 'b', 93, 96, "GNDS", {5, 6, 7, 8}};

int main(int argc, char const *argv[])
{
    /* One way to store the data is to construct individual arrays, and 
   another method is to use a structure variable. Structure elements are always stored in contiguous memory locations.*/

    struct student Ajit; // structure variables

    // Method 1
    Ajit.RollNo = 7;
    Ajit.section = 'D';
    Ajit.mathsMarks = 95;
    Ajit.scienceMarks = 90;
    strcpy(Ajit.collgeName, "GNDEC");
    printf("Enter the 5 numbers: ");
    strcpy(Ajit.collgeName, "GNDEC");

    printf("\nAjit\nRoll NO. : %d\n", Ajit.RollNo);
    printf("Section : %c\n", Ajit.section);
    printf("Maths marks : %d\n", Ajit.mathsMarks);
    printf("Science marks : %d\n", Ajit.scienceMarks);
    printf("Collge Name : %s\n", Ajit.collgeName);

    printf("\nAmit\nRoll NO. : %d\n", AMit.RollNo);
    printf("Section : %c\n", AMit.section);
    printf("Maths marks : %d\n", AMit.mathsMarks);
    printf("Science marks : %d\n", AMit.scienceMarks);
    printf("Collge Name : %s\n", AMit.collgeName);
    printf("%d %d %d %d\n", AMit.arr[0], AMit.arr[1], AMit.arr[2], AMit.arr[3]);
    scanf("%d", &AMit.arr[4]);
    printf("%d\n", AMit.arr[4]);

    // method
    struct student abc = {5, 'e', 100, 99, "GNPS"}; //we can declare like this at a time
    printf("\nABC\nRoll NO. : %d\n", abc.RollNo);
    printf("Section : %c\n", abc.section);
    printf("Maths marks : %d\n", abc.mathsMarks);
    printf("Science marks : %d\n", abc.scienceMarks);
    printf("Collge Name : %s\n", abc.collgeName);
    return 0;
}
