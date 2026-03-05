#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a > 0)
    {
        b = -b;
    }
    else
    {
        b *= 2;
    }

    if (b & 1)
    {
        if (b > 0)
        {
            a = abs(a);
        }
        else
        {
            a = -abs(a);
        }
    }
    else if (b != 0)
    {
        if (b < 0)
        {
            a = abs(a);
        }
        else
        {
            a = -abs(a);
        }
    }

    cout << a - b << endl;

    return 0;
}