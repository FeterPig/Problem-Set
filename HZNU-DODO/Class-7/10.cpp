#include <iostream>
using namespace std;

class Date
{
public:
    Date(int year, int month, int day);
    int getWeekday() const;

private:
    int year;
    int month;
    int day;
};

bool isLeapYear(int t_year) { return (t_year % 4 == 0 && t_year % 100 != 0) || (t_year % 400 == 0); }

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {}

int Date::getWeekday() const
{
    if (year >= 2000 && year <= 9999 && month >= 1 && month <= 12 && day >= 1)
    {
        int days = 0;
        int days_of_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day <= 31) ||
            ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30) ||
            (month == 2 && day <= 29 && isLeapYear(year)) || (month == 2 && day <= 28 && !isLeapYear(year)))
        {
            for (int y = 2000; y < year; y++)
            {
                days += isLeapYear(y) ? 366 : 365;
            }

            if (isLeapYear(year))
            {
                days_of_month[2] = 29;
            }
            else
            {
                days_of_month[2] = 28;
            }

            for (int m = 0; m < month; m++)
            {
                days += days_of_month[m];
            }

            days += day;
            // return (6 + days - 1) % 7 + 1;
            return (days + 4) % 7 + 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int year, month, day;
    while (cin >> year >> month >> day)
    {
        if (year == 0 && month == 0 && day == 0)
            break;
        Date d(year, month, day);
        cout << d.getWeekday() << endl;
    }
    return 0;
}