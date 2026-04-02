#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int num = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (matrix[i - 1][j] - matrix[i][j] >= 50 && matrix[i + 1][j] - matrix[i][j] >= 50 && matrix[i][j - 1] - matrix[i][j] >= 50 && matrix[i][j + 1] >= 50)
            {
                num++;
            }
        }
    }
    cout << num << endl;

    return 0;
}