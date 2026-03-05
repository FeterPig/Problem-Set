#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 3.1415;

    double x1, y1, x2, y2, r1, r2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            cout << "Over!" << endl;
            break;
        }
        else
        {
            cin >> r1 >> r2;
            double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            double ans = 0.0;

            // 相离或相切
            if (r1 + r2 <= d)
            {
                cout << "0.00" << endl;
            }

            // 大圆套小圆
            else
            {
                if (fabs(r1 - r2) >= d)
                {
                    ans = min(PI * r1 * r1, PI * r2 * r2);
                    printf("%.2f\n", ans);
                }

                // 相交
                else
                {
                    // 画个图
                    ans = r1 * r1 * acos((d * d + r1 * r1 - r2 * r2) / (2 * d * r1)) + r2 * r2 * acos((d * d + r2 * r2 - r1 * r1) / (2 * d * r2)) - 0.5 * sqrt((-d + r1 + r2) * (d + r1 - r2) * (d - r1 + r2) * (d + r1 + r2));
                    printf("%.2f\n", ans);
                }
            }
        }
    }

    return 0;
}