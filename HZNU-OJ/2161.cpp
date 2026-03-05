#include <bits/stdc++.h>
using namespace std;

int func(int sum)
{
    while (sum >= 10)
    {
        int every_bit = 0;
        while (sum > 0)
        {
            every_bit += sum % 10;
            sum /= 10;
        }
        sum = every_bit;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool is_tgt = false;

        if (func(n) == 7)
        {
            is_tgt = true;
        }
        if (n % 7 == 0)
        {
            is_tgt = true;
        }

        while (n > 0)
        {
            int every_bit;
            every_bit = n % 10;
            if (every_bit == 7)
            {
                is_tgt = true;
                break;
            }
            n /= 10;
        }

        if (is_tgt)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}