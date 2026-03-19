#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int fenmu = 1;
    double sum = 0.0;

    while (n > 0)
    {
        n--;
        sum += 1.0 / fenmu;
        fenmu += 2;
    }

    cout << sum << endl;

    return 0;
}