#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int d = abs(a - b);
    int ans = 0;
    int step = 1;
    while (d > 0)
    {
        if (d == 1)
        {
            ans += step;
            d--;
        }
        else
        {
            ans += 2 * step;
            d -= 2;
        }
        step++;
    }
    cout << ans << endl;

    return 0;
}
