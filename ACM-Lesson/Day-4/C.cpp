#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = INT_MAX;

    for (int i = 0; i <= n - m; i++)
    {
        int temp = 0;
        for (int j = i; j < i + m; j++)
        {
            temp += arr[j];
        }
        if (temp < ans)
        {
            ans = temp;
        }
    }

    cout << ans << endl;

    return 0;
}