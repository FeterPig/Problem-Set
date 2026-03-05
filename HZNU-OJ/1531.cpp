#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int ans = 1;
        for (int i = n - 1; i >= 1; i--)
        {
            ans = 2 * (ans + 1);
        }
        cout << ans << endl;
    }
    return 0;
}