#include <bits/stdc++.h>
using namespace std;

int main()
{
    string week[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int w, y, m, d;
    while (cin >> y >> m >> d)
    {
        // 蔡勒公式
        if (m < 3)
        {
            m += 12;
            y--;
        }
        w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
        cout << week[(w + 1) % 7] << endl;
    }
    return 0;
}
