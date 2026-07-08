#include <bits/stdc++.h>
using namespace std;

int main()
{
    int VUL, D;
    while (cin >> VUL >> D)
    {
        int N = (VUL + D - 1) / D;
        int k = 1;
        while (k * (k + 1) / 2 < N)
        {
            k++;
        }
        cout << N + k - 1 << endl;
    }

    return 0;
}
