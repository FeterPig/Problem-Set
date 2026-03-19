#include <bits/stdc++.h>
using namespace std;

int main()
{
    int now, add = 0, sub = 0, sum = 0, n = 0;

    while (cin >> now)
    {
        if (now == 0)
        {
            break;
        }
        else
        {
            sum += now;
            n++;

            if (now > 0)
            {
                add++;
            }
            else
            {
                sub++;
            }
        }
    }

    if (n == 0)
    {
        cout << "No input" << endl;
    }
    else
    {
        cout << add << endl
             << sub << endl
             << sum << endl
             << fixed << setprecision(2) << 1.0 * sum / n << endl;
    }

    return 0;
}