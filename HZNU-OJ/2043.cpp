#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, ta, b, tb, t;
        cin >> a >> ta >> b >> tb;
        int temp_1, temp_2;
        scanf("%d:%d", &temp_1, &temp_2);
        t = temp_1 * 60 + temp_2;

        int ccj_left = t;
        int ccj_right = t + ta;

        int count = 0;

        for (int bus_time = 300; bus_time < 24 * 60; bus_time += b)
        {
            int bus_left = bus_time;
            int bus_right = bus_time + tb;

            // 两个闭区间相交或重合
            if (bus_left <= ccj_right && ccj_left <= bus_right && bus_left != ccj_right && bus_right != ccj_left)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}