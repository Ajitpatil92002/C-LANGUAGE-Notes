#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of elements:");
    scanf("%d", &number);

    for (i = 0; i < number; ++i)
    {
        n3 = n1 + n2;
    
        n1 = n2;
        n2 = n3;
    } 
    printf("%d",n2);

    return 0;
}
