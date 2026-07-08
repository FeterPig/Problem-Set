#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float maxn, minn;
    float val;
    cin >> val;
    maxn = val;
    minn = val;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> val;
        maxn = max(maxn, val);
        minn = min(minn, val);
    }
    printf("%.2f %.2f", maxn, minn);

    return 0;
}