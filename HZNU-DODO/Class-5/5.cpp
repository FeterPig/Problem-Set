#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n != 0)
    {
        vector<int> v(n);
        for (auto &&i : v)
        {
            cin >> i;
        }
        sort(v.begin(), v.end());

        if (n % 2 != 0)
        {
            cout << v[n / 2] << endl;
        }
        else
        {
            cout << (v[n / 2 - 1] + v[n / 2]) / 2 << endl;
        }
    }

    return 0;
}