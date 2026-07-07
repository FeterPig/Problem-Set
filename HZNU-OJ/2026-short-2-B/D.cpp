#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    int val[7] = {1, 2, 5, 10, 20, 50, 100};
    int ptr = 6;
    while (n > 0)
    {
        n -= val[ptr];
        if (n < 0)
        {
            n += val[ptr];
            ptr--;
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}