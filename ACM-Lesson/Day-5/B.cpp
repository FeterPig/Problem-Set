#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int ans = 0;

    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            ans++;
            s[i] = 'X';
            s[i + 1] = 'X';
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i + 1] == s[i] && s[i] != 'X')
        {
            ans++;
            break;
        }
    }
    cout << ans;

    return 0;
}