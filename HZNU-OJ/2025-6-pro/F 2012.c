// dp

#include <stdio.h>


int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int dp[10];
    for (int i = 0; i < 10; i++)
    {
        dp[i] = 1;
    }

    int max_len = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] && (dp[j] + 1) > dp[i])
            {
                dp[i] = dp[j] + 1;
            }
        }
        if (dp[i] > max_len)
        {
            max_len = dp[i];
        }
    }

    printf("%d\n", max_len);

    return 0;
}