#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long

    int n;
    cin >> n;

    bool arr[2000001] = {false};
    for (int i = 0; i < n; i++)
    {
        double a;
        int t;
        cin >> a >> t;

        for (int j = 1; j <= t; j++)
        {
            arr[(int)(j * a)] = !arr[(int)(j * a)];
        }
    }

    for (int i = 1; i <= 2000000; i++)
    {
        if (arr[i] == true)
        {
            cout << i << endl;
        }
    }

    return 0;
}