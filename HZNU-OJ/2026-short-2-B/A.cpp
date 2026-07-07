#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int a, b;
        cin >> a >> b;
        for (int k = 0; k < b; k++)
        {
            int start = (k == 0) ? 0 : 1;
            for (int i = start; i < a; i++)
            {
                int last = max(i, a - 1 - i);
                for (int j = 0; j <= last; j++)
                {
                    if (j == i)
                    {
                        cout << 'X';
                    }
                    else if (j == a - 1 - i)
                    {
                        cout << 'X';
                    }
                    else
                    {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
        }
        if (N > 0)
        {
            cout << endl;
        }
    }

    return 0;
}
