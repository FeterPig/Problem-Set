#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x < 0)
    {
        cout << x + 1;
    }
    else if (x < 100)
    {
        cout << x * x * x << endl;
    }
    else
    {
        cout << x * x + 5 << endl;
    }

    return 0;
}