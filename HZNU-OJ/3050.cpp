#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end(), cmp);

    k--;
    while (k--)
    {
        prev_permutation(v.begin(), v.end());
    }
    for (auto x : v)
    {
        cout << x;
    }

    return 0;
}