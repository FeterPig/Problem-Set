#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n; // 总时间
        int m; // 数量

        cin >> n >> m;

        vector<int> v(m);
        for (auto p = v.begin(); p != v.end(); p++)
        {
            int temp;
            cin >> temp;
            *p = temp;
        }

        sort(v.begin(), v.end());

        int num = 0;
        int time = 0;

        for (int i = 0; i < m; i++)
        {
            time += v[i];
            if (time <= n)
            {
                num++;
            }
            else
            {
                break;
            }
        }
        cout << num << endl;
    }

    return 0;
}