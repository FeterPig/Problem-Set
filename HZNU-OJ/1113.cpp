#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m, n || m)
    {
        if (n == 0 || m == 0)
        {
            cout << "Error" << endl;
            continue;
        }
        if (m % 2 == 1)
        {
            cout << "Error" << endl;
            continue;
        }

        int x = 2 * n - m / 2;
        int y = m / 2 - n;

        if (x < 0 || y < 0)
        {
            cout << "Error" << endl;
            continue;
        }
        else
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}