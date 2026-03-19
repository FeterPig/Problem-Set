#include <bits/stdc++.h>
using namespace std;

int main()
{
    double target;
    cin >> target;

    double sum = 1.0;
    int fenmu = 1;
    int i = 2;

    while (1.0 / fenmu >= target)
    {
        sum += 1.0 / fenmu;
        fenmu *= i;
        i++;
    }

    cout << fixed << setprecision(6) << sum << endl;

    return 0;
}