#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int n = str.length();

    vector<vector<bool>> dp(n, vector<bool>(n, false));

    // 初始化
    int maxLen = 1;
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = true;
    }

    //  k = 2
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            dp[i][i + 1] = true;
            maxLen = 2;
        }
    }

    // k > 2
    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i <= n - k; i++)
        {
            int j = i + k - 1;
            if (str[i] == str[j] && dp[i + 1][j - 1])
            {
                dp[i][j] = true;
                maxLen = max(maxLen, k);
            }
        }
    }

    cout << maxLen << endl;
    return 0;
}