#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    while (cin >> n)
    {
        m = n;
        while (cin >> n, n != 0)
        {
            if (n > m)
            {
                m = n;
            }
        }
        cout << m << endl;
    }

    return 0;
}