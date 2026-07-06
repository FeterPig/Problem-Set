#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        if (n == m)
        {
            if (m == 1)
            {
                cout << "9\n";
            }
            else
            {
                cout << '7' << string(m - 2, '9') << "7\n";
            }
        }
        else if (n == m + 1)
        {
            if (m <= 2)
            {
                cout << "-1\n";
            }
            else
            {
                cout << '1' << string(m - 3, '2') << "10\n";
            }
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}
