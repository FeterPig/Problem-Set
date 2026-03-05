#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5;
long long dp[MAXN];

int main()
{
    dp[0] = dp[1] = 0;
    for (int i = 2; i < MAXN; ++i)
    {
        dp[i] = i + dp[(i + 1) / 2] + dp[i / 2];
    }

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    return 0;
}