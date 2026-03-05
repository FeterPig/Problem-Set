#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> hight(n);
        for (auto &x : hight)
        {
            cin >> x;
        }

        vector<int> left_max(n, 0);
        vector<int> right_min(n, 1e5 + 1);

        for (int i = 1; i < n; i++)
        {
            left_max[i] = max(left_max[i - 1], hight[i - 1]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            right_min[i] = min(right_min[i + 1], hight[i + 1]);
        }

        vector<int> sum;
        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            if ((i > 0 && hight[i] < left_max[i]) || (i < n - 1 && hight[i] > right_min[i]))
            {
                flag = false;
            }
            if (flag)
            {
                sum.push_back(hight[i]);
            }
        }

        cout << sum.size() << endl;
        for (auto x : sum)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}