#include <bits/stdc++.h>
using namespace std;

long long x, t;

int main()
{
    long long n;
    while (cin >> n)
    {
        x += n;
        t++;
    }
    cout << x * (long long)pow(2, t - 1);
    
    return 0;
}
