#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, t;
    while (cin >> n >> m >> x >> y >> t)
    {
        if (n == 0 && m == 0 && x == 0 && y == 0 && t == 0)
        {
            break;
        }
        int q;
        cin >> q;
        vector<pair<int, int>> ops(q);
        for (int i = 0; i < q; i++)
        {
            cin >> ops[i].first >> ops[i].second;
        }
        int dir = 3;
        int idx = 0;
        for (int s = 1; s <= t; s++)
        {
            while (idx < q && ops[idx].second == s - 1)
            {
                dir = ops[idx].first;
                idx++;
            }
            if (dir == 0)
            {
                x = (x - 1 + n) % n;
            }
            else if (dir == 1)
            {
                x = (x + 1) % n;
            }
            else if (dir == 2)
            {
                y = (y - 1 + m) % m;
            }
            else
            {
                y = (y + 1) % m;
            }
        }
        cout << x << ' ' << y << endl;
    }

    return 0;
}
