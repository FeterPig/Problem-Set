#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(9));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> v[i][j];
        }
    }

    int ptr_n = n;
    int ptr_v = 1;
    while (ptr_v < 9)
    {
        sort(v.begin(), v.begin() + ptr_n, [ptr_v](vector<int> a, vector<int> b)
             { return a[ptr_v] > b[ptr_v]; });

        bool isSame = true;
        int same_n = ptr_n;
        for (int i = 0; i < ptr_n - 1; i++)
        {
            if (v[i][ptr_v] != v[i + 1][ptr_v])
            {
                isSame = false;
                same_n = i + 1;
                break;
            }
        }
        if (!isSame)
        {
            ptr_n = same_n;
        }
        ptr_v++;
    }
    cout << v[0][0];

    return 0;
}