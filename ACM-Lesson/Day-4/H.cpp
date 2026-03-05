#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    vector<pair<int, int>> huoba;
    vector<pair<int, int>> yingshi;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        huoba.push_back({x, y});
    }

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        yingshi.push_back({x, y});
    }

    // huoba
    for (pair<int, int> xy : huoba)
    {
        int x = xy.first;
        int y = xy.second;

        matrix[x][y] = 1;

        if (x - 1 >= 0)
            matrix[x - 1][y] = 1;
        if (x + 1 < n)
            matrix[x + 1][y] = 1;
        if (y - 1 >= 0)
            matrix[x][y - 1] = 1;
        if (y + 1 < n)
            matrix[x][y + 1] = 1;

        if (x - 1 >= 0 && y - 1 >= 0)
            matrix[x - 1][y - 1] = 1;
        if (x - 1 >= 0 && y + 1 < n)
            matrix[x - 1][y + 1] = 1;
        if (x + 1 < n && y - 1 >= 0)
            matrix[x + 1][y - 1] = 1;
        if (x + 1 < n && y + 1 < n)
            matrix[x + 1][y + 1] = 1;

        if (x - 2 >= 0)
            matrix[x - 2][y] = 1;
        if (x + 2 < n)
            matrix[x + 2][y] = 1;
        if (y - 2 >= 0)
            matrix[x][y - 2] = 1;
        if (y + 2 < n)
            matrix[x][y + 2] = 1;
    }

    // yingshi
    for (pair<int, int> xy : yingshi)
    {
        int x = xy.first;
        int y = xy.second;

        matrix[x][y] = 1;

        for (int i = x - 2; i <= x + 2; i++)
        {
            for (int j = y - 2; j <= y + 2; j++)
            {
                if (i >= 0 && i < n && j >= 0 && j < n)
                {
                    matrix[i][j] = 1;
                }
            }
        }
    }

    // 黑暗区域会刷怪
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}