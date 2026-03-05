#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int year, month, day;
        int day_per_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        scanf("%d-%d-%d", &year, &month, &day);
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            day_per_month[2] = 29;
        }

        int bird_day = day;
        for (int i = 0; i < month; i++)
        {
            bird_day += day_per_month[i];
        }

        // Zeller 公式
        // h = (q + [13(m+1)/5] + K + [K/4] + [J/4] + 5J) mod 7

        if (month == 1 || month == 2)
        {
            year--;
            month += 12;
        }

        int h = (day + 13 * (month + 1) / 5 + year % 100 + year % 100 / 4 + year / 100 / 4 + 5 * (year / 100)) % 7;

        string weekdays[7] = {
            "Saturday",  // h = 0
            "Sunday",    // h = 1
            "Monday",    // h = 2
            "Tuesday",   // h = 3
            "Wednesday", // h = 4
            "Thursday",  // h = 5
            "Friday"     // h = 6
        };

        cout << bird_day << " " << weekdays[h] << endl;
    }

    return 0;
}