#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 1;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        ans = 2 * ++ans;
    }

    cout << ans;

    return 0;
}