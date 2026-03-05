#include <stdio.h>

int main()
{
    int n = 0; // 一行有n个正整数

    while (scanf("%d", &n) == 1)
    {
        int arr[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                sum += arr[i];
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}