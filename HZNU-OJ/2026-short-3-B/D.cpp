#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> dp(N + 1);
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for (int i = 4; i <= N; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 3];
    }
    cout << dp[N] << endl;

    return 0;
}
