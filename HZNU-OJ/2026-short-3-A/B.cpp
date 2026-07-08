#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string s[30];
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }
    int ans = 0;
    for (int j = 0; j < 30; j++)
    {
        bool same = true;
        for (int i = 1; i < N; i++)
        {
            if (s[i][j] != s[0][j])
            {
                same = false;
                break;
            }
        }
        if (same && j < s[0].length())
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}
