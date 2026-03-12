#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    cout << static_cast<int>(n - static_cast<double>(y) / static_cast<double>(x)) << endl;

    return 0;
}