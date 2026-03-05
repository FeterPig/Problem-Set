#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y)
{
    return x > y;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        int m, n;

        // for (int i = (int)sqrt(N); i > 0; i--)
        // {
        //     if (N % i == 0)
        //     {
        //         n = i;
        //         m = N / n;
        //         break;
        //     }
        // }

        int best_m = N, best_n = 1;
        for (int i = 1; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                int m1 = N / i;
                int n1 = i;

                if (m1 >= n1)
                {
                    if (m1 - n1 < best_m - best_n)
                    {
                        best_m = m1;
                        best_n = n1;
                    }
                }
            }
        }
        m = best_m;
        n = best_n;

        vector<vector<int>> mat(m, vector<int>(n));
        vector<int> v;
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        // 倒序排序
        sort(v.begin(), v.end(), cmp);

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        int p = 0;

        // 一定记得写边界检查!!!
        while (top <= bottom && left <= right && p < N)
        {
            // 向右
            for (int i = left; i <= right; i++)
            {
                mat[top][i] = v[p];
                p++;
            }
            top++;

            if (p >= N)
            {
                break;
            }

            // 向下
            for (int i = top; i <= bottom; i++)
            {
                mat[i][right] = v[p];
                p++;
            }
            right--;

            if (p >= N)
            {
                break;
            }

            // 向左
            for (int i = right; i >= left; i--)
            {
                mat[bottom][i] = v[p];
                p++;
            }
            bottom--;

            if (p >= N)
            {
                break;
            }

            // 向上
            for (int i = bottom; i >= top; i--)
            {
                mat[i][left] = v[p];
                p++;
            }
            left++;
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0)
                {
                    cout << mat[i][j];
                }
                else
                {
                    cout << " " << mat[i][j];
                }
            }
            cout << endl;
        }
        if (T > 0)
        {
            cout << endl;
        }
    }

    return 0;
}