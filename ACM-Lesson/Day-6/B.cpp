#include <bits/stdc++.h>
using namespace std;

int n;

bool is_prime(int j)
{
    if (j < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= j; i++)
    {
        if (j % i == 0)
        {
            return false;
        }
    }
    return true;
}

int func(int j)
{
    for (int i = 2; i <= j / 2; i++)
    {
        if (is_prime(i) && is_prime(j - i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    cin >> n;

    for (int i = 4; i <= n; i += 2)
    {
        int p = func(i);
        cout << i << '=' << p << '+' << i - p << endl;
    }

    return 0;
}
