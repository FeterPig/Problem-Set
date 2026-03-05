#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0, a[101] = {0}, flag[101] = {0};

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (i != j && a[i] + a[j] == a[k] && !(flag[k]))
                {
                    ans++;
                    flag[k] = 1;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
