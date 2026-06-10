#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

class Time
{
private:
    int hour_, minute_, second_;

public:
    Time(int h = 0, int m = 0, int s = 0) : hour_(h), minute_(m), second_(s)
    {
        if (!(0 <= h && h < 24 && 0 <= m && m < 60 && 0 <= s && s < 60))
        {
            throw invalid_argument("Invalid argument!");
        }
    }

    int getHour() const { return hour_; }
    int getMinute() const { return minute_; }
    int getSecond() const { return second_; }

    void setTime(int h, int m, int s)
    {
        if (!(0 <= h && h < 24 && 0 <= m && m < 60 && 0 <= s && s < 60))
        {
            throw invalid_argument("Invalid argument!");
        }
        else
        {
            hour_ = h;
            minute_ = m;
            second_ = s;
        }
    }

    // 前置
    Time &operator++()
    {
        second_++;
        if (second_ >= 60)
        {
            second_ -= 60;
            minute_++;
        }
        if (minute_ >= 60)
        {
            minute_ -= 60;
            hour_++;
        }
        if (hour_ >= 24)
        {
            hour_ -= 24;
        }

        return *this;
    }
    // 后置
    Time operator++(int)
    {
        Time temp(*this);

        second_++;
        if (second_ >= 60)
        {
            second_ -= 60;
            minute_++;
        }
        if (minute_ >= 60)
        {
            minute_ -= 60;
            hour_++;
        }
        if (hour_ >= 24)
        {
            hour_ -= 24;
        }

        return temp;
    }

    bool operator==(const Time other) const
    {
        return (hour_ == other.getHour() &&
                minute_ == other.getMinute() &&
                second_ == other.getSecond());
    }

    operator int() const { return hour_ * 3600 + minute_ * 60 + second_; }

    friend ostream &operator<<(ostream &os, const Time &t)
    {
        os << setw(2) << setfill('0') << t.getHour() << ":"
           << setw(2) << setfill('0') << t.getMinute() << ":"
           << setw(2) << setfill('0') << t.getSecond() << endl;
        return os;
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    try
    {
        Time t1(hour, minute, second);
        Time t2;
        cout << "t1: ";
        cout << t1;
        cout << "t2: ";
        cout << t2;
        t2 = t1++;
        cout << "t1: ";
        cout << t1;
        cout << "t2: ";
        cout << t2;
        if (t1 == t2)
            cout << "t1 == t2" << endl;
        else
            cout << "t1 != t2" << endl;
        int s = t1;
        cout << s << endl;
    }
    catch (invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }
    return 0;
}