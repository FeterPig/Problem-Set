#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, sum, num, t, i;
    cin >> T;

    while (T--)
    {
        sum = 0;
        for (int i = 1; i <= 7; ++i)
        {
            cin >> t;
            sum += t;
        }

        num = 0;
        if (sum >= 1000)
        {
            sum -= 1000,
                num++;
        }
        if (sum >= 1000)
        {
            sum -= 1000,
                num++;
        }

        num += sum / 600;
        sum %= 600;
        num += sum / 200;

        cout << num << endl;
    }
}