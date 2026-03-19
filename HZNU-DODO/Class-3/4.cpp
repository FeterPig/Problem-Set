#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int now = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += now;
        now += i + 1;
    }

    cout << sum << endl;

    return 0;
}