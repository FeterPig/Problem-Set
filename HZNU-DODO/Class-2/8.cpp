#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double a, b, c;
    cin >> a >> b >> c;

    if (a < 1e-5)
    {
        if (b < 1e-5)
        {
            if (c < 1e-5)
                cout << "Infinitely solution" << endl;
            else
                cout << "No solution" << endl;
        }
        else
        {
            double x = (c < 1e-5 ? 0.0 : -c / b);
            cout << "x=" << x << endl;
        }
    }
    else
    {
        double delta = b * b - 4 * a * c;

        if (delta < -1e-5)
        {
            cout << "Imaginary root" << endl;
        }

        else if (delta < 1e-5)
        {
            double x = -b / (2 * a);

            if (x < 1e-5)
            {
                x = 0.0;
            }

            cout << "x1=x2=" << x << endl;
        }

        else
        {
            double r1 = (-b + sqrt(delta)) / (2 * a);
            double r2 = (-b - sqrt(delta)) / (2 * a);

            cout << "x1=" << r1 << ";x2=" << r2 << endl;
        }
    }

    return 0;
}