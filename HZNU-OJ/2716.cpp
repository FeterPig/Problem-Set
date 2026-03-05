#include <stdio.h>
int check(int a[], int len, int k);
int main()
{
    int a[210];
    int t;
    int n, k;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &k);
        for (int i = 0; i < 2 * n; ++i)
        {
            scanf("%d", &a[i]);
        }
        if (check(a, 2 * n, k) == 0)
        {
            puts("KKTXDY");
        }
        else
        {
            puts("JLSTXDY");
        }
    }
}

int check(int a[], int len, int k)
{
    int dp[len][len];
    for (int i = 0; i < len; i++)
    {
        dp[i][i] = a[i];
    }

    // 区间长度 l
    for (int l = 2; l <= len; l++)
    {
        for (int i = 0; i <= len - l; i++)
        {
            int j = i + l - 1;

            dp[i][j] = a[i] - dp[i + 1][j];
            if (dp[i][j] < a[j] - dp[i][j - 1])
            {
                dp[i][j] = a[j] - dp[i][j - 1];
            }
        }
    }

    if ((dp[0][len - 1] > 0 && k == 1) || (dp[0][len - 1] < 0 && k == 0) || (dp[0][len - 1] == 0 && k == 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}