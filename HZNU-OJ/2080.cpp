#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<unsigned long long> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    __int128 sum = (__int128)v[0] + (__int128)v[1] + (__int128)v[2];
    if (sum > v[3])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}