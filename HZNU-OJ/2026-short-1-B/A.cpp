#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int dp[10][10] = {0};

        for (int i = 0; i < n; i++)
        {
            dp[i][0] = dp[i][i] = 1;

            for (int j = 1; j < i; j++)
            {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int s = 0; s < i; s++)
            {
                cout << ' ';
            }
            for (int j = 0; j < n - i; j++)
            {
                if (j > 0)
                {
                    cout << ' ';
                }
                cout << dp[n - 1 - i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
