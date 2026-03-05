// 这题一眼BFS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<vector<char>> mat(N, vector<char>(M));
        int s_x, s_y, e_x, e_y;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'S')
                {
                    s_x = i;
                    s_y = j;
                }
                else if (mat[i][j] == 'E')
                {
                    e_x = i;
                    e_y = j;
                }
            }
        }

        queue<pair<int, int>> q;

        // 存储从S到这个点的最短距离
        vector<vector<int>> dp(N, vector<int>(M, -1));

        q.push({s_x, s_y});
        dp[s_x][s_y] = 0;

        // 坐标变化量 上下左右
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        bool found = false;

        while (!q.empty() && !found)
        {
            pair<int, int> p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (nx >= 0 && nx < N && ny >= 0 && ny < M &&
                    mat[nx][ny] != '#' && dp[nx][ny] == -1)
                {

                    dp[nx][ny] = dp[x][y] + 1;

                    if (nx == e_x && ny == e_y)
                    {
                        found = true;
                        break;
                    }

                    q.push({nx, ny});
                }
            }
        }

        if (dp[e_x][e_y] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dp[e_x][e_y] << endl;
        }
    }

    return 0;
}