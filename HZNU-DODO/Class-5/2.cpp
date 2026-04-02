#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(6, 0);

    v[0] = n / 100;
    n = n % 100;
    v[1] = n / 50;
    n = n % 50;
    v[2] = n / 20;
    n = n % 20;
    v[3] = n / 10;
    n = n % 10;
    v[4] = n / 5;
    n = n % 5;
    v[5] = n;

    for (auto &&i : v)
    {
        cout << i << endl;
    }

    return 0;
}