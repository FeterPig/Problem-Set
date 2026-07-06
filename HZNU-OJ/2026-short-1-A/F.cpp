#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a > b)
        {
            swap(a, b);
        }
        int k = b - a;

        int t = (int)(k * (1.0 + sqrt(5.0)) / 2.0);
        if (t == a)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
