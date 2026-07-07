#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string a, b;
        cin >> a >> b;
        string ans;
        for (int i = 0; i < (int)a.size(); i++)
        {
            int num = abs((a[i] - '0') - (b[i] - '0'));
            ans += (char)(num + '0');
        }
        int zero_bit = 0;
        while ((zero_bit < (int)ans.size() - 1) && (ans[zero_bit] == '0'))
        {
            zero_bit++;
        }
        cout << ans.substr(zero_bit) << endl;
    }

    return 0;
}
