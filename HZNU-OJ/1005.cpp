#include <iostream>
using namespace std;

int main()
{
    int n, m, a, maxv, t = 1;
    while (cin >> n >> m, n || m)
    {
        maxv = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a;
                maxv = max(maxv, a);
            }
        }

        if (t != 1)
        {
            cout << endl;
        }
        cout << "Case " << t << ":" << endl;
        t++;
        cout << maxv << endl;
    }

    return 0;
}