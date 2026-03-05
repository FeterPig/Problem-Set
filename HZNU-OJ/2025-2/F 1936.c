#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    int arr[T];

    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < T; i++)
    {
        printf("%o\n", arr[i]);
    }

    return 0;
}