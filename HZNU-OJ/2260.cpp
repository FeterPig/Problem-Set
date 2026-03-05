#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
string s;
int main()
{
    int T;
    cin >> T;
    getchar();

    while (T--)
    {
        getline(cin, s);
        int len = s.length();
        int last = -1, first = 0;

        for (int i = len - 1; i >= 0; i--)
        {
            if (isdigit(s[i]))
            {
                last = i;
                break;
            }
        }

        if (last == -1)
        {
            cout << s << endl;
            continue;
        }

        for (int i = last - 1; i >= 0; i--)
        {
            if (!isdigit(s[i]))
            {
                first = i + 1;
                break;
            }
        }

        int cnt = last - first + 1;
        int add = 0; // 进位

        for (int i = last; i >= first; i--)
        {
            int tmp;
            if (i == last)
            {
                tmp = s[i] - '0' + 1 + add;
            }
            else
            {
                tmp = s[i] - '0' + add;
            }
            add = tmp / 10;
            s[i] = tmp % 10 + '0';
        }

        for (int i = 0; i < first; i++)
        {
            cout << s[i];
        }

        if (add)
        {
            cout << 1;
        }
        for (int i = first; i < len; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}