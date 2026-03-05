#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int dp[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = 1;
        dp[i][i] = 1;
    }

    for (int i = 3; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}