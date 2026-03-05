#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b, sum;
        cin >> a >> b;

        int len = a.length();

        for (int i = 0; i < len; i++)
        {
            sum += to_string(abs((a[i] - '0') - (b[i] - '0')));
        }
        while (sum[0] == '0' && sum.length() > 1)
        {
            sum.erase(0, 1);
        }

        cout << sum << endl;
    }

    return 0;
}