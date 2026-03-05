#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 0 || n % 2 == 1)
        {
            cout << 0 << ' ' << 0 << endl;
        }
        else
        {
            cout << n / 4 + (n % 4) / 2 << ' ' << n / 2 << endl;
        }
    }

    return 0;
}