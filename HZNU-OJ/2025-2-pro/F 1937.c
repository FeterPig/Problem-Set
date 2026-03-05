#include <stdio.h>

int main()
{
    int x;
    int arr[1000];

    for (int i = 0; i < 1000; i++)
    {
        if (scanf("%d", &arr[i]) == 1)
        {
            printf("%c", arr[i]);
        }
        else
        {
            break;
        }
    }

    return 0;
}