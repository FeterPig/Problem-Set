#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << n / i << endl;
            return 0;
        }
    }

    return 0;
}