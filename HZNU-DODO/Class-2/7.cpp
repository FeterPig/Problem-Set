#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<double> v(3);
    cin >> v[0] >> v[1] >> v[2];

    sort(v.begin(), v.end());
    double a = v[0], b = v[1], c = v[2];

    // 不成三角形
    if (a + b <= c)
    {
        cout << "Don't make a triangle" << endl;
        return 0;
    }
    else
    {
        // 等边
        if ((fabs(a - b) < 1e-5) && (fabs(a - c) < 1e-5))
        {
            cout << "Equilateral triangle" << endl;
            return 0;
        }
        else
        {
            if ((fabs(a - b) < 1e-5) || (fabs(a - c) < 1e-5) || (fabs(b - c) < 1e-5))
            {
                // 等腰直角
                if (fabs(a * a + b * b - c * c) < 1e-5)
                {
                    cout << "Isosceles Right triangle" << endl;
                    return 0;
                }
                // 等腰
                else
                {
                    cout << "Isosceles triangle" << endl;
                    return 0;
                }
            }
            else
            {
                // 直角
                if (fabs(a * a + b * b - c * c) < 1e-5)
                {
                    cout << "Right triangle" << endl;
                    return 0;
                }
                // 普通
                else
                {
                    cout << "General triangle" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}