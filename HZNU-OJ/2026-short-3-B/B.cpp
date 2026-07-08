#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int sumW = 0, sumWV = 0;
        for (int i = 0; i < 3; i++)
        {
            int a, b;
            cin >> a >> b;
            sumW += a;
            sumWV += a * b;
        }
        printf("%.2f\n", (double)sumWV / sumW);
    }

    return 0;
}
