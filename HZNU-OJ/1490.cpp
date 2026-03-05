#include <bits/stdc++.h>
using namespace std;

int money_old(int d, int t)
{
    float sum_d;
    float sum_t;
    int sum;

    if (d <= 3)
    {
        sum_d = 10;
    }
    else if (d <= 10)
    {
        sum_d = 10 + 2 * (d - 3);
    }
    else
    {
        sum_d = 24 + 3 * (d - 10);
    }

    // if (t % 5 == 0)
    // {
    //     sum_t = 2 * t / 5;
    // }
    // else
    // {
    //     sum_t = 2 * (t / 5 + 1);
    // }

    sum_t = 2.0 / 5 * t;

    sum = (int)round(sum_d + sum_t + 1);
    return sum;
}
int money_new(int d, int t)
{
    float sum_d;
    float sum_t;
    int sum;

    if (d <= 3)
    {
        sum_d = 11;
    }
    else if (d <= 10)
    {
        sum_d = 11 + 2.5 * (d - 3);
    }
    else
    {
        sum_d = 28.5 + 3.75 * (d - 10);
    }

    sum_t = 2.5 / 4 * t;

    sum = (int)round(sum_d + sum_t);
    return sum;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int d; // 行驶距离
        int t; // 等待时间
        cin >> d >> t;
        cout << money_new(d, t) - money_old(d, t) << endl;
    }

    return 0;
}