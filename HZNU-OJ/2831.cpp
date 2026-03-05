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

    int center = n / 2;
    int center_n = matrix[center][center];

    bool is_good = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int d = max(abs(i - center), abs(j - center));
            int tgt_n = center_n - d;
            if (matrix[i][j] != tgt_n)
            {
                is_good = false;
                break;
            }
        }
        if (is_good == false)
        {
            break;
        }
    }

    if (is_good)
    {
        cout << "ok, you are a cool guy." << endl;
    }
    else
    {
        cout << "It's too cold." << endl;
    }

    return 0;
}