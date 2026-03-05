#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int xyz = 0;
        int qzz = 0;

        while (n--)
        {
            int num;
            cin >> num;

            if (num > 0)
            {
                num /= 2;
            }

            xyz += num;

            if (xyz < 0)
            {
                qzz++;
            }
        }

        cout << qzz << endl;
    }

    return 0;
}