#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int cnt = 0;
        string s;
        cin >> s;
        for (auto &&i : s)
        {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}