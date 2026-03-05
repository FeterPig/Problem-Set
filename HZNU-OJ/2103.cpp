#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        double sum = 0.000;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            int len = s.length();

            string unit;
            string num;

            // 单位 2位/1位
            if (s[len - 2] >= 'a' && s[len - 2] <= 'z')
            {
                // 两位单位
                unit = s.substr(len - 2);
                num = s.substr(0, len - 2);
            }
            else
            {
                // 一位单位
                unit = s.substr(len - 1);
                num = s.substr(0, len - 1);
            }

            // string to double
            double value = stod(num);

            // 换算成m
            if (unit == "km")
            {
                sum += value * 1000.0;
            }
            else if (unit == "m")
            {
                sum += value;
            }
            else if (unit == "dm")
            {
                sum += value * 0.1;
            }
            else if (unit == "cm")
            {
                sum += value * 0.01;
            }
            else if (unit == "mm")
            {
                sum += value * 0.001;
            }
        }

        printf("%.3fm\n", sum);
    }

    return 0;
}