#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    bool find = false;

    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        int max_j = 0;
        int min_i = 0;
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > matrix[i][max_j])
            {
                max_j = j;
            }
        }
        for (int k = 0; k < m; k++)
        {
            if (matrix[k][max_j] < matrix[min_i][max_j])
            {
                min_i = k;
            }
        }
        if (min_i == i)
        {
            find = true;
            cout << min_i << ' ' << max_j << ' ' << matrix[min_i][max_j] << endl;
        }
    }

    if (!find)
    {
        cout << "No saddle point" << endl;
    }

    return 0;
}