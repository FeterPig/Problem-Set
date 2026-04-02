#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for (auto &&i : v)
    {
        cin >> i;
    }

    for (int i = 0; i < m; i++)
    {
        int tmp = v[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            v[i + 1] = v[i];
        }
        v[0] = tmp;
    }

    for (auto &&i : v)
    {
        cout << i << ' ';
    }

    return 0;
}