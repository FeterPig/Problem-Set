#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int now[5];

        // 修改now[]要记得加&
        for (auto &i : now)
        {
            cin >> i;
        }

        int n;
        cin >> n;

        double shanghai[n];
        for (int i = 0; i < n; i++)
        {
            int init;
            cin >> init;

            int xuyao[5];
            for (auto &j : xuyao)
            {
                cin >> j;
            }

            double buzheng[5];
            for (auto &j : buzheng)
            {
                cin >> j;
            }

            bool is_buzheng = true;

            shanghai[i] = init;
            for (int j = 0; j < 5; j++)
            {
                shanghai[i] += now[j] * buzheng[j];
                if (now[j] < xuyao[j])
                {
                    is_buzheng = false;
                }
            }

            if (!is_buzheng)
            {
                shanghai[i] /= 2.0;
            }
        }
        sort(shanghai, shanghai + n);
        printf("%.3f\n", shanghai[n - 1]);
    }

    return 0;
}