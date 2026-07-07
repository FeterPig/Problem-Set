#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        int len = max(a.size(), b.size());
        string ans;
        int dm = 0;
        for (int i = 0; i < len; i++)
        {
            int da = (i < (int)a.size()) ? (a[i] - '0') : 0;
            int db = (i < (int)b.size()) ? (b[i] - '0') : 0;
            int s = da + db + dm;
            ans += (char)((s % 2) + '0');
            dm = s / 2;
        }
        if (dm != 0)
        {
            ans += '1';
        }

        bool hasPrinted = true;
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            if (ans[i] == '1')
            {
                if (hasPrinted)
                {
                    cout << i + 1;
                    hasPrinted = false;
                }
                else
                {
                    cout << ' ' << i + 1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
