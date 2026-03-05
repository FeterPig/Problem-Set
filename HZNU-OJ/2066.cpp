#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char a[2000];
    cin >> t;
    // getchar();
    while (t--)
    {
        cin >> a;
        int len = strlen(a);
        while (len > 1)
        {
            for (int i = 0; i < len; i += 2)
                if (a[i] == a[i + 1])
                {
                    a[i / 2] = '1';
                }
                else
                {
                    a[i / 2] = '0';
                }

            len /= 2;
        }
        cout << a[0] << endl;
    }
}