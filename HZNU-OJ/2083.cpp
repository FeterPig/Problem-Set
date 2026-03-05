#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        k %= 4;

        // n 行 m 列
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        while (k--)
        {
            vector<vector<int>> new_mat(m, vector<int>(n));
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    // 矩阵旋转公式
                    new_mat[j][n - 1 - i] = mat[i][j];
                }
            }
            mat = new_mat;
            swap(n, m);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
                if (j < m - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}