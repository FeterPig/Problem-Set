#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        double d;
        cin >> d;

        double t_b = 0, t_w = 0;
        t_w = d / 1.2;
        t_b = 50 + d / 3;

        if (t_w > t_b)
        {
            cout << "Bike" << endl;
        }
        else if (t_w < t_b)
        {
            cout << "Walk" << endl;
        }
        else
        {
            cout << "All" << endl;
        }
    }

    return 0;
}