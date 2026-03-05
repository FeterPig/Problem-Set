#include <bits/stdc++.h>
using namespace std;

// 跳格子矩阵
long long mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

long long total_sum = 0;

// 坐标变化量, 上下左右
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

// 试试 dfs ?

// row / col
void dfs(int r, int c, int steps, long long value)
{
    if (steps == 0)
    {
        total_sum += value;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nr = r + dx[i];
        int nc = c + dy[i];
        if (nr >= 0 && nr < 3 && nc >= 0 && nc < 3)
        {
            dfs(nr, nc, steps - 1, value * mat[nr][nc]);
        }
    }
}

int main()
{
    int x, y, n;
    cin >> x >> y >> n;

    // 0-based

    total_sum = 0;
    dfs(x - 1, y - 1, n, mat[x - 1][y - 1]);

    cout << total_sum << endl;
    return 0;
}