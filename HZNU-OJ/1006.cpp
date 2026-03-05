#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool hasPrinted;
    bool isFirstCase = true;

    int n, t = 0;
    long long a, x;
    while (cin >> n >> x)
    {
        hasPrinted = false;

        if (isFirstCase)
        {
            isFirstCase = false;
        }
        else
        {
            cout << endl;
        }
        t++;
        cout << "Case " << t << ":" << endl;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a != x)
            {
                if (hasPrinted)
                {
                    cout << " ";
                }
                cout << a;
                hasPrinted = true;
            }
        }
        if (hasPrinted)
        {
            cout << endl;
        }
        else
        {
            cout << "Empty!" << endl;
        }
    }

    return 0;
}