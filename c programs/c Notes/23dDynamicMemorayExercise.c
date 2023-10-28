#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n, m;
    char *ptr;
    printf("Enter the no. of employes : ");
    scanf("%d", m);
    for (int i = 0; i < m; i++)
    {
        printf("\n\nEnter the no. of char in %d Employe\n", i + 1);
        scanf("%d", &n);

        ptr = (char *)malloc( n*sizeof(char));

        printf("Enter Id of %d Employe: ", i + 1);
        scanf("%s", ptr);

        printf("\n%d Employe ID  :", i + 1);
        printf("%s", ptr);
        free(ptr);
    }

    return 0;
}