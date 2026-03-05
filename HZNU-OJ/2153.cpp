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

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        cout << func(sum) << endl;
    }

    return 0;
}