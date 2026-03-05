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

        double t_walk = d / 1.2;
        double t_bike = 50 + d / 3.0;

        if (t_walk < t_bike)
        {
            cout << "Walk\n";
        }
        else if (t_walk > t_bike)
        {
            cout << "Bike\n";
        }
        else
        {
            cout << "All\n";
        }
    }

    return 0;
}