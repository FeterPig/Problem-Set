#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    // 状态转移 dp
    // dp[i位数字][0/非0结尾]
    // dp[0]留空
    long long dp[N + 1][2];

    dp[1][0] = 0;
    dp[1][1] = K - 1; // 1~K

    for (int i = 2; i <= N; i++)
    {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) * (K - 1);
    }

    cout << dp[N][0] + dp[N][1] << endl;

    return 0;
}