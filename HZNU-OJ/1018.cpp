#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int post_max = 0;

        vector<int> build(n);
        for (auto p = build.begin(); p != build.end(); p++)
        {
            int temp;
            cin >> temp;
            post_max = max(post_max, temp);
            *p = temp;
        }

        vector<int> sum_d(post_max + 1);
        for (int i = 0; i <= post_max; i++)
        {
            sum_d[i] = 0;
            for (int j = 0; j < n; j++)
            {
                sum_d[i] += abs(i - build[j]);
            }
        }

        int post = 0;
        int ans = sum_d[0];
        for (int i = 0; i <= post_max; i++)
        {
            if (sum_d[i] <= ans)
            {
                post = i;
                ans = sum_d[i];
            }
        }

        cout << post << " " << ans << endl;
    }

    return 0;
}