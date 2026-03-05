#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        getchar();

        int len = str.length();

        int n_b = 0;
        int n_jb = 0;
        int n_xjb = 0;

        for (int i = len - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {
                n_b++;
            }
            else if (str[i] == 'J')
            {
                n_jb += n_b;
            }
            else if (str[i] == 'X')
            {
                n_xjb += n_jb;
            }
        }

        cout << n_xjb % 1000000007 << endl;
    }

    return 0;
}