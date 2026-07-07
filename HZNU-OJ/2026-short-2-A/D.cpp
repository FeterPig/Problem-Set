#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        bool hua[24] = {false};
        bool diao[24] = {false};
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            for (int j = a; j <= b; j++)
            {
                hua[j] = true;
            }
        }
        for (int i = 0; i < m; i++)
        {
            int c, d;
            cin >> c >> d;
            for (int j = c; j <= d; j++)
            {
                diao[j] = true;
            }
        }
        int ans = 0;
        for (int i = 0; i < 24; i++)
        {
            if (hua[i] && diao[i])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
