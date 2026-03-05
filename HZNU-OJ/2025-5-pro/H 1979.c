// 我去, 动态规划.dp!
#include <stdio.h>

int main()
{
    long long dp[30];

    // 到达第h层的方法数
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= 30; i++)
    {
        dp[i] = dp[i - 1]    // 走一步后到达第i层
                  + dp[i - 2]  // 走两步后到达第i层
                  + dp[i - 3]; // 走三步后到达第i层
    }

    int T;
    scanf("%d", &T);

    while (T--)
    {
        int h;
        scanf("%d", &h);

        printf("%lld\n", dp[h]);
    }

    return 0;
}