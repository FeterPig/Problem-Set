#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year_1, month_1, day_1;
    int year_2, month_2, day_2;

    string str;

    cin >> str;
    if (str.length() == 15)
    {
        year_1 = 1900 + (str[6] - '0') * 10 + str[7] - '0';
        month_1 = (str[8] - '0') * 10 + str[9] - '0';
        day_1 = (str[10] - '0') * 10 + str[11] - '0';
    }
    else
    {
        year_1 = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + str[9] - '0';
        month_1 = (str[10] - '0') * 10 + str[11] - '0';
        day_1 = (str[12] - '0') * 10 + str[13] - '0';
    }

    cin >> str;
    if (str.length() == 15)
    {
        year_2 = 1900 + (str[6] - '0') * 10 + str[7] - '0';
        month_2 = (str[8] - '0') * 10 + str[9] - '0';
        day_2 = (str[10] - '0') * 10 + str[11] - '0';
    }
    else
    {
        year_2 = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + str[9] - '0';
        month_2 = (str[10] - '0') * 10 + str[11] - '0';
        day_2 = (str[12] - '0') * 10 + str[13] - '0';
    }

    if (year_1 > year_2 || (year_1 == year_2 && month_1 > month_2) || (year_1 == year_2 && month_1 == month_2 && day_1 > day_2))
    {
        cout << "-1" << endl;
    }
    else if (year_1 == year_2 && month_1 == month_2 && day_1 == day_2)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    return 0;
}