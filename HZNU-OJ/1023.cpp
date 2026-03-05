// 这道题考的图论

#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main()
{
#define int long long

    int n, m;
    while (cin >> n >> m)
    {
        // 二维邻接矩阵
        vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));
        for (int i = 1; i <= n; i++)
        {
            dist[i][i] = 0;
        }

        for (int i = 1; i <= m; i++)
        {
            int a, b, l;
            cin >> a >> b >> l;

            dist[a][b] = min(dist[a][b], (int)l);
            dist[b][a] = dist[a][b]; // 因为路线没有方向
        }

        // 第 k 阶的结果取决于第 k-1 阶, 所以k放在最外层
        // 类似 dp ?
        for (int k = 1; k <= n; k++)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (dist[i][k] != INF && dist[k][j] != INF)
                    {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        int x, y;
        cin >> x >> y;

        if (dist[x][y] == INF)
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