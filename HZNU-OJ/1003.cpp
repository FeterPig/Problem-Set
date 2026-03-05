#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, T, len_a, len_b, add, sum;
    string a, b, c;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cin >> a >> b;

        len_a = a.length();
        len_b = b.length();

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        c = "";
        add = 0;

        for (i = 0; i < len_a || i < len_b; i++)
        {
            if (i < len_a && i < len_b)
                sum = a[i] - '0' + b[i] - '0' + add;
            else if (i < len_a)
                sum = a[i] - '0' + add;
            else if (i < len_b)
                sum = b[i] - '0' + add;
            add = 0;
            if (sum > 9)
            {
                add = 1;
                sum -= 10;
            }
            c += sum + '0';
        }

        if (add)
            c += add + '0';

        reverse(c.begin(), c.end());
        cout << "Case " << t << ":" << endl;
        cout << c << endl
             << endl;
    }
    return 0;
}