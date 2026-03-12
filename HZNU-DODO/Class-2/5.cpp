#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, sum;
    cin >> n;

    if (n <= 50)
    {
        sum = n * 0.53;
    }
    else
    {
        sum = 50 * 0.53 + (n - 50) * 0.58;
    }

    cout << fixed << setprecision(2);
    cout << "cost = " << sum << endl;

    return 0;
}