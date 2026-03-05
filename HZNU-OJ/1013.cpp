#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int cnt = 0;
    while (cin >> n >> m, n || m)
    {
        cnt++;

        char mat[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == '.')
                {
                    int num = 0;
                    for (int x = i - 1; x <= i + 1; x++)
                    {
                        for (int y = j - 1; y <= j + 1; y++)
                        {
                            if (x >= 0 && x < n && y >= 0 && y < m)
                            {
                                if (mat[x][y] == '*')
                                {
                                    num++;
                                }
                            }
                        }
                    }
                    mat[i][j] = num + '0';
                }
            }
        }
        cout << "Field #" << cnt << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}