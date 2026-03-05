#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, arr[15] = {0};

    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        int x = i;
        while (x > 0)
        {
            int b = x % 10;
            arr[b]++;
            x /= 10;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}