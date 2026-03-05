#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        int ans = 0;
        while (n--)
        {
            int temp;
            cin >> temp;
            if (temp % 2 == 1)
            {
                ans += temp;
            }
        }

        cout << ans << endl;
    }

    return 0;
}