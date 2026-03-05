#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    int ret = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ret += 2;
        }
        if (i * i == x)
        {
            ret--;
        }
        if (ret > 1000)
        {
            return -1;
        }
    }
    return ret;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        bool is_find = false;
        for (int i = 1; i <= 1000; i++)
        {
            if (f(i) == k)
            {
                is_find = true;
                cout << i << endl;
                break;
            }
        }
        if (!is_find)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}