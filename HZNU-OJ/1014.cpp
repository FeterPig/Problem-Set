#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int n_1 = n;

        bool flag = false; // 默认不是
        if (n % 7 == 0)
        {
            flag = true;
        }
        else
        {
            while (n)
            {
                if (n % 10 == 7)
                {
                    flag = true;
                    break;
                }
                else
                {
                    n /= 10;
                }
            }
        }
        if (flag)
        {
            cout << "pa" << endl;
        }
        else
        {
            cout << n_1 << endl;
        }
    }

    return 0;
}