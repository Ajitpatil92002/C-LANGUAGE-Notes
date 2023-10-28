#include <stdio.h>

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int arr[n], s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = arr[(d + i) % n];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", s[i]);
    }
}
