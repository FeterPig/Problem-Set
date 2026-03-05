#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n, m;
    while (cin >> n >> m)
    {
        bool find = false;
        for (int i = 0; i <= n.length() - m.length(); i++)
        {
            bool same = true;
            for (int j = 0; j < m.length(); j++)
            {
                if (n[i + j] != m[j])
                {
                    same = false;
                    break;
                }
            }
            if (same)
            {
                cout << i << endl;
                find = true;
                break;
            }
        }
        if (!find)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}