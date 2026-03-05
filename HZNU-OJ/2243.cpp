#include <bits/stdc++.h>
using namespace std;

int main()
{
    int yd = 0;
    int yt = 0;
    int ems = 0;
    int bs = 0;
    int sf = 0;
    int st = 0;
    int zt = 0;
    int qt = 0;

    int t;
    cin >> t;

    while (t--)
    {
        int num, b, c;
        scanf("%d-%d-%d", &num, &b, &c);

        if (num <= 25)
        {
            yd++;
        }
        else if (num <= 55)
        {
            yt++;
        }
        else if (num <= 69)
        {
            ems++;
        }
        else if (num <= 103)
        {
            bs++;
        }
        else if (num <= 125)
        {
            sf++;
        }
        else if (num >= 200 && num <= 230)
        {
            st++;
        }
        else if (num >= 231 && num <= 250)
        {
            zt++;
        }
        else
        {
            qt++;
        }
    }

    cout << yd << " " << yt << " " << ems << " " << bs << " " << sf << " " << st << " " << zt << " " << qt << endl;
    return 0;
}