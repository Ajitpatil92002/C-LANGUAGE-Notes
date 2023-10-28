#include <stdio.h>
int main()
{
    /* Types of If statements*/
    /* -----> simple if statements 
      ------> if else statements 
      ------> nested if else         ------->under if else statements there is another if else statements 
      ------> if else ladder         -else ------>multi if else statements 
    */
    int age;
    printf(" Enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        if (age >= 18 && age <= 50)
        {
            printf("you are\t adult so u can see adult films\n");
        }
        else
        {
            printf(" you are old age person\n");
        }
    }
    if (age < 18 && age > 0)
    {
        printf("you are childern so u cant see adult films\n ");
    }

    else
    {
        printf(" you are not born\n");
    }

    return 0;
}