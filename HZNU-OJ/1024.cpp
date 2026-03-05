#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long

    int n, m;
    while (cin >> n >> m)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        // 先去学习一下二分查找

        // OK 学成归来

        int left = 0, right = v.back();
        int ans = 0;

        while (left <= right)
        {
            int h = (left + right) / 2;
            int sum = 0;

            for (int i : v)
            {
                if (i > h)
                {
                    sum += i - h;
                }
            }

            // 寻找最大的h
            if (sum >= m)
            {
                ans = h;
                left = h + 1;
            }
            else
            {
                right = h - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}