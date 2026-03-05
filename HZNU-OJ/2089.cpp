#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n != 0)
        {
            vector<int> v;
            for (int i = 0; i < n * n; i++)
            {
                int c;
                cin >> c;
                v.push_back(c);
            }
            // 是否出现过
            set<int> s;
            for (int i = 0; i < n * n; i++)
            {
                // 没找到, 说明第一次出现
                if (s.find(v[i]) == s.end())
                {
                    s.insert(v[i]);
                }
                else
                {
                    v[i] = -1;
                }
            }
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (v[k] == -1)
                    {
                        cout << "X ";
                    }
                    else
                    {
                        cout << v[k] << " ";
                    }

                    k++;
                }
                cout << endl;
            }
        }
        cout << endl;
    }

    return 0;
}