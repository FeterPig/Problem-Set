#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
long long dist[25][25];

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = (i == j) ? 0 : INF;
            }
        }

        for (int i = 0; i < m; i++)
        {
            int a, b, l;
            cin >> a >> b >> l;
            if (l < dist[a][b])
            {
                dist[a][b] = l;
                dist[b][a] = l;
            }
        }

        for (int k = 1; k <= n; k++)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (dist[i][k] + dist[k][j] < dist[i][j])
                    {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }

        int x, y;
        cin >> x >> y;
        if (dist[x][y] >= INF)
        {
            cout << "No path" << endl;
        }
        else
        {
            cout << dist[x][y] << endl;
        }
    }

    return 0;
}
