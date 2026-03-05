#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, string> mp;
    while (n--)
    {
        int temp_1;
        string temp_2;
        cin >> temp_1 >> temp_2;
        mp[temp_1] = temp_2;
    }

    int temp_3;
    cin >> temp_3;
    cout << mp[temp_3];
    m--;

    while (m--)
    {
        int temp;
        cin >> temp;
        cout << " " << mp[temp];
    }

    return 0;
}