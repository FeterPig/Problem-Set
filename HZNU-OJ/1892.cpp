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
        if (n < 15)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << n - 7 << endl;
        }
    }
    return 0;
}