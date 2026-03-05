// 这道题大抵是dp把

#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int dp[67];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        dp[4] = 8;
        for (int i = 5; i <= 66; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
        }

        cout << dp[n] << endl;
    }

    return 0;
}