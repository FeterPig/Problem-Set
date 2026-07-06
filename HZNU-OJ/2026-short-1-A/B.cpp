#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n, n != 0)
    {
        int w = 0;
        while (w * w < n)
        {
            w++;
        }
        cout << w - 1 << endl;
    }
    
    return 0;
}