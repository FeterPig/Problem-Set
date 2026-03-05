#include <bits/stdc++.h>
using namespace std;

int dp[10001];

int main()
{
    dp[1] = 0;
    dp[2] = 0;
    for (int i = 3; i <= 10000; ++i)
    {
        dp[i] = (dp[i - 1] + dp[i - 2] + 1) % 26;
    }

    int n;
    while (cin >> n)
    {
        cout << char('a' + dp[n]) << endl;
    }
    return 0;
}