#include <stdio.h>

int main()
{
    int arr[11];

    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int h, max = 0;
    scanf("%d", &h);
    for (int i = 1; i <= 10; i++)
    {
        if (h + 30 >= arr[i])
        {
            max++;
        }
    }
    printf("%d", max);
    return 0;
}
