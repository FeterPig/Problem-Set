#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        int tmp = 1;
        for (int j = i; j < n - 1; j++)
        {
            if (arr[j + 1] == arr[j] + 1)
            {
                tmp += 1;
            }
            else
            {
                break;
            }
        }
        if (tmp > ans)
        {
            ans = tmp;
        }
    }

    printf("%d", ans);

    return 0;
}