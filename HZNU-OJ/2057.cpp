#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n)
    {
        vector<long long> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        long long sum = 0;

        for (int k = 0; k < 2 * n; ++k)
        {
            if (k % 2 == 0)
            {
                sum += a[k / 2];
                if (sum == 0)
                {
                    cout << "G WIN!" << endl;
                    goto next;
                }
            }
            else
            {
                sum += b[k / 2];
                if (sum == 0)
                {
                    cout << "N WIN!" << endl;
                    goto next;
                }
            }
        }

        // 奇数
        if (sum & 1)
        {
            cout << "G WIN!" << endl;
        }
        else
        {
            cout << "N WIN!" << endl;
        }

    next:;
    }
    return 0;
}