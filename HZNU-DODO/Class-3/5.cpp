#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i <= 45; i++)
    {
        for (int j = 0; j <= 45 - i; j++)
        {
            int k = 45 - i - j;
            if ((i * 3 + j * 2 + k * 0.5) == 45)
            {
                cout << i << ',' << j << ',' << k << endl;
            }
        }
    }

    return 0;
}