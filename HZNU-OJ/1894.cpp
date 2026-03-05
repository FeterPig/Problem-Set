#include <bits/stdc++.h>
using namespace std;

int main()
{
#define int long long

    int a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e)
    {
        if (d < e)
        {
            int square1 = (b - 2 * e) * (c - 2 * e);
            int square2 = (a - 2 * e) * (c - 2 * e);
            int square3 = (a - 2 * e) * (b - 2 * e);
            int removed = 2 * d * (square1 + square2 + square3);
            int total = a * b * c;
            cout << total - removed << endl;
        }
        else
        {
            int in_x = max(0LL, a - 2 * d);
            int in_y = max(0LL, b - 2 * d);
            int in_z = max(0LL, c - 2 * d);
            int in_vol = in_x * in_y * in_z;

            int a_in = a - 2 * e;
            int b_in = b - 2 * e;
            int c_in = c - 2 * e;
            int total = a * b * c;
            int frame_initial = total - a_in * b_in * c_in;

            int square1 = e * (b - 2 * e) * (c - 2 * e);
            int square2 = (a - 2 * e) * e * (c - 2 * e);
            int square3 = (a - 2 * e) * (b - 2 * e) * e;
            int dug_in_frame = 2 * (square1 + square2 + square3);
            int frame_vol = frame_initial - dug_in_frame;

            cout << max(in_vol, frame_vol) << endl;
        }
    }
    return 0;
}