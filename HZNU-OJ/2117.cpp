#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #define int long long

    //     int n, m;
    //     while (cin >> n >> m)
    //     {
    //         int cnt = 0;
    //         for (int i = 1; i <= n; i++)
    //         {
    //             for (int j = 1; j <= m; j++)
    //             {
    //                 if ((i + j) % 5 == 0)
    //                 {
    //                     cnt++;
    //                 }
    //             }
    //         }
    //         cout << cnt << endl;
    //     }

    // 暴力枚举超时了, 换思路

    int n, m;
    while (cin >> n >> m)
    {
        long long mod_n[5] = {0}, mod_m[5] = {0};
        for (int i = 1; i <= n; i++)
        {
            mod_n[i % 5]++;
        }
        for (int i = 1; i <= m; i++)
        {
            mod_m[i % 5]++;
        }

        long long sum = mod_n[0] * mod_m[0];
        for (int i = 1; i <= 4; i++)
        {
            sum += mod_n[i] * mod_m[5 - i];
        }

        cout << sum << endl;
    }

    return 0;
}